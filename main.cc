#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

#include "antlr4-runtime.h"

#include <boost/filesystem.hpp>
#include <boost/lexical_cast.hpp>

#include <discordpp/bot.hh>
#include <discordpp/discordpp.hh>

#include <signal.h>
#include <unistd.h>
#include <time.h>
using json = nlohmann::json;
using boost::system::error_code;



/************************************************************************/
//
//					        Data structs
//
/************************************************************************/

// I could probably just pass the bot instead.
struct handler_data {
    std::map<std::string, parseTreeVisitor> *ptv;
    std::map<std::string, time_t> *time_stamp;
    handler_data(std::map<std::string, parseTreeVisitor> *_ptv, std::map<std::string, time_t> *_time_stamp)
                : ptv(_ptv), time_stamp(_time_stamp) {}
};

/************************************************************************/
//
//					        Helper Functions
//
/************************************************************************/

std::string readTokenFile(std::string tokenFilePath){
    std::ifstream tokenFile;
    tokenFile.open(tokenFilePath);
    std::string token;
    if (tokenFile.is_open()) {
        std::getline(tokenFile, token);
    } 
    else {
        std::cerr << "CRITICAL: There is no such file as " + tokenFilePath + "! Copy the example login.dat to make one.\n";
        exit(1);
    }
    tokenFile.close();
    std::cout << "Retrieved token.\n\n";
    return token;
}

// Checks for inactive tables. Uses timer set below.
void handler(int sig, siginfo_t *si, void *uc) {
	struct handler_data *h_data = (struct handler_data*)si->si_value.sival_ptr;
    for (std::map<string,time_t>::iterator it=h_data->time_stamp->begin(); it!=h_data->time_stamp->end(); ++it) {
        if(h_data->ptv->at(it->first).Engine.open_tables.size() > 0) {
            time_t end;
            time (&end);
            if(difftime (end, it->second) > 300) {
                std::cout << "User: " << it->first << " has been away for too long. Wiping data.\n";
                h_data->ptv->at(it->first).Engine.exit_cmd();
                h_data->time_stamp->at(it->first) = 0;
            }
        }
    }
}

int main() 
{
    
    /************************************************************************/
    //
    //						Start up
    //
    /************************************************************************/
    std::cout << "Starting bot...\n\n";
    std::string token;
    if(boost::filesystem::exists("token.dat")){
        token = readTokenFile("token.dat");
    } 
    else {
        std::cerr << "CRITICAL: There is no valid way for Discord++ to obtain a token! "
                  << "Copy the example login.dat or token.dat to make one.\n";
        exit(1);
    }
        
    discordpp::Bot* bot = new discordpp::Bot(token);
    
    /************************************************************************/
    //
    //						Signal handling
    //
    /************************************************************************/
    // Check for inactive tables every 5 minutes.
	struct handler_data h_data(&bot->ptv, &bot->time_stamp); 

	timer_t timerid;
	struct sigevent sev;
	struct itimerspec its;
    struct sigaction act;
    
    sigemptyset(&act.sa_mask);
	//act.sa_flags = SA_RESTART || SA_SIGINFO; <--- doesnt work ¯\_(ツ)_/¯
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = &handler;
	sigaction(SIGALRM, &act, NULL);
	
	sev.sigev_notify = SIGEV_SIGNAL;
	sev.sigev_signo = SIGALRM;
	sev.sigev_value.sival_ptr = &h_data;									
	timer_create(CLOCK_REALTIME, &sev, &timerid); 
	
	its.it_value.tv_sec = 300;
    its.it_value.tv_nsec = 0;
    its.it_interval.tv_sec = 300;
    its.it_interval.tv_nsec = 0;
	timer_settime(timerid, 0, &its, NULL);


    /************************************************************************/
    //
    //						Event Responses
    //
    /************************************************************************/
 
    bot->addResponse("MESSAGE_CREATE", [](discordpp::Bot *bot, json jmessage) {
        std::string statement = jmessage["d"]["content"].get<std::string>();
        statement.erase(0, statement.find_first_not_of(" \t\r\n"));
        
        if(statement[0] == '~') {
            statement.erase(0, statement.find_first_not_of(" \t\r\n~"));
             
            std::string user_id = jmessage["d"]["author"]["id"].get<std::string>();
            bot->time_stamp[user_id] = time(&bot->time_stamp[user_id]);
            
            std::string sid = jmessage["d"]["channel_id"];
            uint64_t id = boost::lexical_cast<discordpp::snowflake>(sid);
            bot->ptv[user_id].Engine.id_c = id;                                 //Is there a way to only set this once?
            bot->ptv[user_id].Engine.user_id = user_id;
            try {
     			ANTLRInputStream input(statement);    
                dmlLexer lex(&input);            
                CommonTokenStream tokens(&lex);  
                dmlParser parser(&tokens);    
                parser.setErrorHandler(make_shared<BailErrorStrategy>());
                tree::ParseTree *tree = parser.program(); 
                bot->ptv[user_id].tree::AbstractParseTreeVisitor::visit(tree);
            }
            catch(ParseCancellationException e) {
                std::string s = e.what();
                if(s.size() == 0) {
                     s = "Not a valid grammer. ";
                } 
                discordpp::DiscordAPI::channels::messages::create(id, "`" + s + "`");
            }
            catch(RecognitionException e) { //No idea what the exception is. I have a guess but its never been called for what i test.
                discordpp::DiscordAPI::channels::messages::create(id, "Error in parsing.");
            }
        }
    });

    bot->addResponse("PRESENCE_UPDATE", [](discordpp::Bot *bot, json jmessage) {
        //ignore
    });
    bot->addResponse("TYPING_START", [](discordpp::Bot *bot, json jmessage) {
        //ignore
    });
    bot->start();
    
    //cleanup
    timer_delete(timerid);
    delete bot;
    return 0;
    
}