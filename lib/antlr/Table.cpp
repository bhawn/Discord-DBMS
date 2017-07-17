#include "Table.h"
#include <iomanip>
#include <sstream>
#include <discordpp/discordpp.hh>

using namespace std;

Table::Table() {
	name = "";
	view = false;
}

Table::Table(string n, vector<string> a, vector<string> t, vector<string> k) {
	name = n;				//Database file name.
	attributes = a;		//Top row stating what each column is.
	types = t;			//Type each column is. ex: int, string, varchar(10).
	keys = k;				//Type we are sorting it by. Key can be multiple attributes.
	data;				//Actual info in each row.
	view = false;
}

//returns index where input row is found in the current table
int Table::find(vector<string> s) {
	if(data.size() <= 0 || data[0].size() != s.size()){
		return -1;
	}else{	
		for (int i=0; i<data.size(); ++i){ 
			for (int j=0; j<data[i].size(); ++j) {
				if (data[i][j] != s[j])
					j=data[i].size(); //stop looking here
				if(j == data[i].size() - 1){ //if we reached the end of a line that is equal	
					return i;
				}
			}	
		}	
	}
	return -1;	//if we never find it return -1
}

/*
Name: [Name]
Primary Key: [Primary Key]
TYPES
ATTRIBUTE NAMES
DATA
*/
void Table::print() {
	if(name != "") 
		cout << "Name: " << name << endl;
	if(keys.size() > 0) {
		cout << "Primary Key: (";
		for (int i=0; i<keys.size(); ++i) {
			cout << keys[i];
			if (i<keys.size()-1)	
				cout << ",";
		}
		cout << ")\n";
	}
	for (string s : types) 
		cout << left << setw(15) << s;
	cout << endl;
	for (string s : attributes) 		
		cout << left << setw(15) << s;
	cout << endl;
	for (vector<string> v : data) {
		for (string s : v)
			cout << left << setw(15) << s;
		cout << endl;
	}
}

//Discordpp output //include boost and discordpp
void Table::print(uint64_t id_c) {
	std::stringstream a_stream;
	if(name != "")
		a_stream << "Name: " << name << endl;
	if(keys.size() > 0) {
		a_stream << "Primary Key: (";
		for (int i=0; i<keys.size(); ++i) {
			a_stream << keys[i];
			if (i<keys.size()-1)		
				a_stream << ",";
		}
		a_stream << ")\n";
	}
	for (string s : types)
		a_stream << std::setiosflags (std::ios_base::left) << setw(15) << s;
	a_stream << endl;
	for (string s : attributes) 
		a_stream << std::setiosflags (std::ios_base::left) << setw(15) << s;
	a_stream << endl;
	for (vector<string> v : data) {
		for (string s : v)
			a_stream << std::setiosflags (std::ios_base::left) << setw(15) << s;
		a_stream << endl;
	}																			//I probably need to add some kind of wait here due to the rate limit
	string message = "";
	message = a_stream.str();
	if(message.size() > 2000) {
		while(message.size() > 2000) {
			string send = message.substr(0,1999);
			message.erase(0,1999);
			cout << send;
			discordpp::DiscordAPI::channels::messages::create(id_c, "```" + send + "```");
		}
		if(message.size() > 0) {
			cout << message;
			discordpp::DiscordAPI::channels::messages::create(id_c, "```" + message + "```");
		}
	}
	else {
		cout << message;
		discordpp::DiscordAPI::channels::messages::create(id_c, "```" + message + "```");	
	}
}

//Saves this table to file.
void Table::save(uint64_t id_c, string user_id) {
	if(view){
		cerr << "Cannot save a view!" << endl;
		discordpp::DiscordAPI::channels::messages::create(id_c, "`Cannot save a view!`");	
	}else{
		ofstream write("dbFiles/" + user_id + "_" + name + ".db", ios::out | ios::trunc);
		for(int i = 0; i < attributes.size(); ++i){
			write << attributes[i] << '\x1e';
		}
		write << "\n";
		for(int i=0; i< types.size(); ++i){
			write << types[i] << '\x1e';
		}
		write << "\n";
		for(int i = 0; i < keys.size(); ++i){
			write << keys.at(i) << '\x1e';
		}
		write << "\n";
		for(int i=0; i < data.size(); ++i){
			for(int j = 0; j < data[i].size(); ++j){
				write << data.at(i).at(j) << '\x1e';
			}
			write << "\n";
		}
	     write.close();
	     cout << name << " has been saved/written to file.\n";
		 discordpp::DiscordAPI::channels::messages::create(id_c, "`" + name + " has been saved/written to file." + "`");
	}
}
