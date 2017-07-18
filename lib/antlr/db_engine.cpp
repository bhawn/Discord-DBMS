#include "db_engine.h"
#include <sys/stat.h> 
#include <fcntl.h>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <discordpp/discordpp.hh>
using namespace std;

db_engine::db_engine() { }

db_engine::~db_engine() {
	for(int i = 0; i < open_tables.size(); ++i) {
		delete open_tables[i];
	}
}

void db_engine::out_message(string msg) {
	discordpp::DiscordAPI::channels::messages::create(id_c, "`" + msg + "`");
}

/************************************************************************/
//
//						CONDITIONS
//
/************************************************************************/

//Helper for eval that allows checking of type string or int for comparisons.
template <class T>
bool db_engine::eval_helper(T dat, T literal, string op) {	
	if (op == "==" && dat == literal) 
		return true;
	else if (op == "!=" && dat != literal)
		return true;
	else if (op == ">" && dat > literal) 
		return true;
	else if (op == ">=" && dat >= literal)
		return true;
	else if (op == "<" && dat < literal)
		return true;
	else if (op == "<=" && dat <= literal)
		return true;
	return false;
}
	
Table db_engine::eval(Table t, string attribute, string literal, string op) {
	Table temp;
	temp = t; 						//so that attributes, and types can be copied
	temp.data.clear();					//don't care about the data from t

	int attribute_index = -1;			//find the index of the attribute we want to test
	for (int i=0; i<t.attributes.size(); ++i) 
		if (t.attributes[i]==attribute)
			attribute_index = i;
	string type = t.types[attribute_index];	  //get the name of the type aswell
	   
	if (attribute_index<0) {
		cerr << "No matching attributes\n";
		out_message("No matching attributes.");
	} else {
		for (int i=0; i<t.data.size(); ++i) {
			if (type == "INTEGER") {
				 if(eval_helper(stoi(t.data[i][attribute_index]), stoi(literal), op))
					temp.data.push_back(t.data[i]);
			}
			else if (type.substr(0,7) == "VARCHAR") {
				if (eval_helper(t.data[i][attribute_index], literal, op))
					temp.data.push_back(t.data[i]);
			}
		}
	}
     return temp;
}	  	

Table* db_engine::find_table_by_name(string fl) {
	for (int i=0; i<open_tables.size(); ++i) { 
		if (open_tables[i]->name == fl) {
			return open_tables[i];
		}
	}
	return NULL;
}

//check if two table are compatible
bool db_engine::compatible(Table *dest, Table *insert) {
	if(dest->types.size() == insert->types.size()) {						//check if types are the same length
		for(int i=0; i<dest->types.size(); i++) {						//iterate over list of types...
			if(dest->types[i] != insert->types[i]) {					//check if they're not are the same types
				string dest_type = dest->types[i].substr(0,7);
				string insert_type = insert->types[i].substr(0,7);
				if(dest_type == "VARCHAR" && insert_type == "VARCHAR") {
					int dest_max_len = stoi(dest->types[i].substr(8, dest->types[i].length()-1));
					int insert_max_len = stoi(dest->types[i].substr(8, dest->types[i].length()-1));
					if(dest_max_len < insert_max_len) {
						cerr << "cannot insert, incompatible lengths" << endl;
						out_message("Cannot insert, incompatible lengths.");
						return false;
					}	
				}
			}
		}
	} else {
		cerr << "cannot insert, not same type" << endl;
		out_message("Cannot insert, not same type.");
		return false;
	}
	return true;						//if no disagreeing types were found during iteration tables are compatible
}

bool db_engine::compatible(Table *t, vector<string> literals) {					//discord change
	if(t->attributes.size() >= literals.size()) 
		return true;
	else
		return false;
	//return t->attributes.size() == literals.size();
}

bool db_engine::set_compatible(Table *t1, Table *t2) {
	if(t1->types.size() == t2->types.size()) {							//check if types are the same length
		for(int i=0; i<t1->types.size(); i++) {							//iterate over list of types...
			if(t1->types[i] != t2->types[i]) {							//check if they're not are the same types
				return false;
			}
		}
	} else {
		return false;
	}	
	return true;
}

/************************************************************************/
//
//						COMMANDS
//
/************************************************************************/

//Loads a relation from an existing database file
void db_engine::open_cmd(string fl) {
	
	Table *check = find_table_by_name(fl);
	if (check != NULL) { 
		cerr << "Table \"" << check->name << "\" is already open\n";
		out_message("Table \"" + check->name + "\" is already open.");
		return;
	}	
	
	ifstream read("dbFiles/"+user_id+"_"+fl+".db");
	
	if(!read.is_open()) {
		cerr << "could not open file\n";
		out_message("Could not open file.");
		return;
	}else {
		cout << fl+".db: " << "opened succesfully\n";
		out_message(fl+".db: " + "opened succesfully.");
	}
	Table* t = new Table();
	t->name = fl;
	int i = 0;
	string line = "";
	while (getline(read, line)) {
	     vector<string> table_info;
	     stringstream ss(line);
	     string parse_line = "";
	     while (getline(ss,parse_line, '\x1e')) {	//1 line
	          table_info.push_back(parse_line); 
	          parse_line = "";
	     }
	     switch(i) {
	     	case 0 : 
	          	t->attributes = table_info;
	          	break;
	          case 1 :
	          	t->types = table_info;
	          	break;
	          case 2 :
	          	t->keys = table_info;
	          	break;
	          default :
	          	t->data.push_back(table_info);
	          	break;
	     }
	     i++;
	     line = "";
	} 
	open_tables.push_back(t);
	read.close();
}

void db_engine::write_cmd(string name) {
	Table *t = find_table_by_name(name);
	if(t == NULL) {
		out_message("Cannot write \"" + name + "\". Does not exist.");			//******Change output maybe?
		return;
	}
	write_cmd(*t);
}


//t: user_info.db
//t1: our user data if it exists
//t_check: table we are checking to see if it exists. /updating its info
bool db_engine::user_info(Table t_check) {
	Table t;
	//----------------------------Get-Table-------------------------------------
	ifstream read("user_info.db");
		int i = 0;
	string line = "";
	while (getline(read, line)) {
	     vector<string> table_info;
	     stringstream ss(line);
	     string parse_line = "";
	     while (getline(ss,parse_line, '\x1e')) {	//1 line
	          table_info.push_back(parse_line); 
	          parse_line = "";
	     }
	     switch(i) {
	     	case 0 : 
	          	t.attributes = table_info;
	          	break;
	          case 1 :
	          	t.types = table_info;
	          	break;
	          case 2 :
	          	t.keys = table_info;
	          	break;
	          default :
	          	t.data.push_back(table_info);
	          	break;
	     }
	     i++;
	     line = "";
	}
	read.close();
	//------------------------------Find-user-id--------------------------------
	Table t1 = eval(t,"USER_ID",user_id,"==");								//if user exists
	if(t1.data.size() > 0 && t1.data[0].size() > 0) {							//maybe not need two conditions
		bool exists = false;
		for(int i = 0; i < t1.data[0].size(); ++i)								//if curr tables exists
			if(t1.data[0][i] == t_check.name) {
				update_cmd(&t, {t1.attributes[i]}, {t_check.name}, t1);			// need to add size
				exists = true;
			}
		if(t1.data[0].size() < t1.attributes.size() && !exists)	{					// else if open slot
			update_cmd(&t, {t1.attributes[t1.data[0].size()]}, {t_check.name}, t1);
		}
		else if(!exists) {
			out_message("Error cannot write another table, limit is 3.");
			return false;
		}
	}
	else
		insert_cmd(&t, {user_id, t_check.name});
	//-----------------write table----------------------------------------------
	ofstream write("user_info.db", ios::out | ios::trunc);
	for(int i = 0; i < t.attributes.size(); ++i)
		write << t.attributes[i] << '\x1e';
	write << "\n";
	for(int i=0; i< t.types.size(); ++i)
		write << t.types[i] << '\x1e';
	write << "\n";
	for(int i = 0; i < t.keys.size(); ++i)
		write << t.keys.at(i) << '\x1e';
	write << "\n";
	for(int i=0; i < t.data.size(); ++i){
		for(int j = 0; j < t.data[i].size(); ++j)
			write << t.data.at(i).at(j) << '\x1e';
		write << "\n";
	}
    write.close();
	return true;
}

//Adds a new relation to a file. Basically just adds updated info to file.
void db_engine::write_cmd(Table t) {
	pthread_mutex_lock(write_lock);
	lock_check = true;
	bool can_save = user_info(t);
	pthread_mutex_unlock(write_lock);
	lock_check = false;
	if(can_save)
		t.save(id_c, user_id);
}

void db_engine::close_name(string name) {
	Table *t = find_table_by_name(name);
	if(t == NULL) {
		cerr << "Table is not open\n";
		out_message("Table is not open.");
		return;
	}
    close_cmd(*t);
}

//Saves all changes to a relation in a database file and closes the file.
void db_engine::close_cmd(Table t) {
	//write_cmd(t);
	out_message(t.name + " has been closed succesfully. ");	    //kinda lying here.
	for (int i=0; i<open_tables.size(); ++i) {					//find the table in the list of open tables
		if(open_tables[i]->name == t.name){
		   delete open_tables[i];	
		   open_tables[i] = NULL;
		   open_tables.erase(open_tables.begin() + i);			//erase the table from the list of open tables
		}
	}
	
}

//Exits the DML interpreter.
void db_engine::exit_cmd() {
	//exit(1);
	for(int i = 0; i < open_tables.size(); ++i) {
		delete open_tables[i];
		open_tables[i] = NULL;
	}
	open_tables.clear();
}

//Print a certain relation or a view.
void db_engine::show_cmd(Table *t, string name) {
	if(t != NULL)
    	t->print(id_c);
    else
    	out_message("Table \"" + name + "\" does not exist.");
}
void db_engine::show_cmd(string name) {
	Table *t = find_table_by_name(name);
	show_cmd(t, name);
}

//Creates a new table.
void db_engine::create_cmd(string name, vector<string> attributes, vector<string> types, vector<string> key) {
	if(find_table_by_name(name) != NULL) {
		out_message("There is already a table with this name open.\nOverwriting old table.");
		close_name(name);
	}
	Table* t = new Table(name,attributes,types,key);
	open_tables.push_back(t);
}

// Update attribute according to given attribute
void db_engine::update_cmd(Table *t1, vector<string> attribute_names, vector<string> values, Table t2) {
	if(t1 == NULL)
		return;
	int update_index;
	for (int i=0; i<t2.data.size(); ++i) {										//iterate through table of values to update
		update_index = t1->find(t2.data[i]);									//get index of the value we want to update
		if (update_index >= 0) {												//if the index to be updated is valid
			for (int j=0; j<attribute_names.size(); ++j) {						//iterate through NEW attributes
				for (int k=0; k<t1->attributes.size(); ++k)						//iterate thourgh EXISTING attributes
					if (t1->attributes[k] == attribute_names[j]) {				//if NEW = EXISTING
						if(t1->data[update_index].size() < k+1)					//Discord update
							t1->data[update_index].push_back(values[j]);
						else
							t1->data[update_index][k] = values[j];				//set table's data to the NEW value
					}
			}
		}
		update_index = -1;
	}
}

// Insert new attributes to a relation in correct order according to key.
void db_engine::insert_cmd(Table *t, vector<string> values) {
	if(t != NULL) {
	    if(compatible(t, values)){
	      t->data.push_back(values);										//add the new data tuple into the table
	    }else{
	    	cerr << "not compatible for insert";
	    	out_message("Not compatible for insert.");
	    	return;
	    }
	}
}

// Inserts the values of table t2 into table t1
void db_engine::insert_cmd(Table *t1, Table *t2) {
	if(t1 == NULL)
		return;
    if(compatible(t1, t2)){	
      for (vector<string> s : t2->data)									//add every element of t2 into t1
     	t1->data.push_back(s);
    }else{
    	 cerr << "Incompatible tables" << endl;
    	 out_message("Incompatible tables.");
    }
}

// delete attribute or whatever else in relation.
void db_engine::delete_cmd(Table *t1, Table *t2) {
	if(t1 == NULL)
		return;
	if (set_compatible(t1, t2)){
		int del_index;
		for (int i=0; i<t2->data.size(); ++i) {							//search t1 for each element in t2
			del_index = t1->find(t2->data[i]);
			if (del_index >= 0) {
				t1->data.erase(t1->data.begin() + del_index);			//if it exists in t1, delete it
			}
			del_index = -1;
		}
	}else{
	  //TODO throw error
	}
}

void db_engine::list_cmd(string list_type) {
	int j;
	int num_open[2] = {0};
	string opened = "| ";
	for(int i = 0; i < open_tables.size(); ++i) {
		if(list_type == "TABLES" && open_tables[i]->view == false || list_type == "ALL" && open_tables[i]->view == false) {
			j = 0;
			opened += open_tables[i]->name + " | ";
			++num_open[j];
		}
		else if(list_type == "VIEWS" && open_tables[i]->view == true || list_type == "ALL" && open_tables[i]->view == true) {
			j = 1;
			opened += open_tables[i]->name + " | ";
			++num_open[j];
		}
	}
	stringstream out_msg;
	if(open_tables.size() == 0)
		out_msg << "There is nothing open.";
	else if(list_type == "ALL") {
		out_msg << "``" << "Type: " << list_type << ".\nTables open: " << num_open[0] 
				<< ".  Views open: " << num_open[1] << ".  Total open: " 
				<< open_tables.size() << ".\n" << opened << "``";
	} 
	else if(list_type == "TABLES" && num_open[0] == 0 || list_type == "VIEWS" && num_open[1] == 0)
		out_msg << "There are no " << list_type << " currently open.";
	else
		out_msg << "``" << "Type: " << list_type << ".\n" << list_type << " open: " << num_open[j] 
				<<  ".  Total open: " << open_tables.size() << ".\n" << opened << "``";
	
	out_message(out_msg.str());
}

/************************************************************************/
//
//						Queries
//
/************************************************************************/

//Select tuples in a relation that satisfy a condition.
Table db_engine::selection(Table *cond, Table *atom) {
	Table ret;
	if(set_compatible(cond, atom)){									//ensure set compatiblity
		if(cond->data.size() <= 0 || atom->data.size() <= 0){				//check that both tables are not empty
			cout << "Selecton came up empty!" << endl;					//if one is selection will turn up empty so return empty table
			out_message("Selection came up empty!");
			return ret;
		}else{													//set keys and attributes of return table
			ret.keys = atom->keys;
			ret.attributes = atom->attributes;							//find the rows in conditon that exists in atom
			ret.types = atom->types;
			int add_index;											//index of matching field
			int t_sz = cond->data.size();								//condition table size
			for(int i = 0; i < t_sz; ++i){							//iterate over condition table
				add_index = atom->find(cond->data[i]);					//check if row in condtion table exits in atomic table
				if(add_index >= 0){									//if it does...
					ret.data.push_back(atom->data[add_index]);			//...add it to the return table	
				}
				add_index = -1;									//reset match index 
			}
		}
	}else{														//if not compatible error out and return empty table
		cerr << "Selection made with incompatible conditions" << endl;
		out_message("Selection made with incompatible conditions.");
		return ret;
	}
}
//Projection: select a subset of the attributes in a relation.
Table db_engine::projection(vector<string> attribute_names, Table *t) {
	Table ret;													//find all the indexes of the attributes to project
	vector<int> attr_indices;
	vector<string> new_attrs;
	vector<string> new_types;
	for(int x = 0; x < attribute_names.size(); ++x){						//iterate over all the attributes to project
		for(int y = 0; y < t->attributes.size(); ++y){					//iterate over tables attributes
			if(t->attributes[y] == attribute_names[x]){					//find the index the attribute we want to project is located at
				attr_indices.push_back(y);							//add it to the vector of indeces
				new_attrs.push_back(t->attributes[y]);
				new_types.push_back(t->types[y]);
			}	
		}
	}
	ret.attributes = new_attrs;
	ret.types = new_types;											//iterate over all the data in table t
	for(int i = 0; i < t->data.size(); ++i){							//push back new vector on data to populate with datas
		ret.data.push_back({});										//iterate over all the attributes to project
		for(int j = 0; j < attr_indices.size(); ++j){
			ret.data[i].push_back(t->data[i][attr_indices[j]]);
		}
	}
	return ret;
}

//renaming ::= rename ( attribute-list ) atomic-expr
Table db_engine::renaming(vector<string> attribute_names, Table *t) {			//change names vector in table to new names
	Table ret;
	ret = *t;
	if(attribute_names.size() == ret.attributes.size()){
		ret.attributes = attribute_names;
	}else{
		cerr << "Attribute list does not match the expression to rename" << endl;
		out_message("Attribute list does not match the expression to rename.");
		return ret;
	}
	return ret;
}

//union ::= atomic-expr + atomic-expr
Table db_engine::set_union(Table *t1, Table *t2) {
	Table ret;
	if(set_compatible(t1, t2)){										//add all of t1's data to ret
		ret=*t1;													//add all of t2's data to ret
		for(int j = 0; j < t2->data.size(); ++j){
			ret.data.push_back(t2->data[j]);
		}														//remove all overlap of t2 in t1 from ret
		int ins_index;
		for(int i=0; i < t1->data.size(); ++i){
			ins_index=t2->find(t1->data[i]);							//find the index of t1 info in t2
			if(ins_index >= 0){										//this index will match in ret so remove the data there
				ret.data.erase(ret.data.begin() + t1->data.size() + ins_index);
			}
			ins_index=-1;											//reset for next loop
		}
	}
	else{
		cerr << "cannot find the set union of incompatible sets" << endl;
		out_message("Cannot find the set union of incompatible sets.");
		return ret;
	}
	return ret;
}

//difference ::= atomic-expr - atomic-expr
Table db_engine::set_difference(Table *t1, Table *t2) {
	Table ret;
	if(set_compatible(t1, t2)){										//add all of t1's data to ret
		ret = *t1;
		int del_index;
		for(int i = 0; i < t2->data.size(); ++i){
			del_index = ret.find(t2->data[i]);							//delete if dats from 2 is in 1
			if(del_index >= 0){
				ret.data.erase(ret.data.begin() + del_index);
			}
			del_index = -1;										//reset for next loop
		}
	}else{
		cerr << "cannot find the difference of incompatible sets" << endl;
		out_message("Cannot find the difference of incompatible sets.");
		return ret;
	}
	return ret;
}

//product ::= atomic-expr * atomic-expr
Table db_engine::cross_product(Table *t1, Table *t2) {
	Table ret;
	vector<string> new_attributes;
	vector<string> new_types;
	for (int i = 0; i < t1->attributes.size(); ++i){
		new_attributes.push_back(t1->attributes[i]);
		new_types.push_back(t1->types[i]);
	}
	for (int i = 0; i < t2->attributes.size(); ++i){
		new_attributes.push_back(t2->attributes[i]);
		new_types.push_back(t2->types[i]);
	}
	ret.attributes = new_attributes;
	ret.types = new_types;									//vector to store product of each row
	vector<string> product;												
	for(int i = 0; i < t1->data.size(); ++i){					//iterate over t1
		for(int j = 0; j < t2->data.size(); ++j){				//iterate over t2
			for(int x = 0; x < t1->data[i].size(); ++x){			//compute product of this row combo
				product.push_back(t1->data[i][x]);
			}
			for(int x = 0; x < t2->data[j].size(); ++x){
				product.push_back(t2->data[j][x]);
			}
			ret.data.push_back(product);						//added to table to be returned
			product.clear();								//se nothing is accidently copied for next combo
		}
	}
	return ret;
}

//Bonus: natural-join ::= atomic-expr & atomic-expr
Table db_engine::natural_join(Table *t1, Table *t2) {
	Table ret("",{},{},{});
	vector<string> similar_attributes;							//construct the list of similar attributes
	vector<int> t1_sim_attr_index;							//index of similar attribute in each table
	vector<int> t2_sim_attr_index;
	for (int i=0; i<t1->attributes.size(); ++i) {
		for (int j=0; j<t2->attributes.size(); ++j) {
			if (t1->attributes[i] == t2->attributes[j] && t1->types[i] == t2->types[j]) {
				similar_attributes.push_back(t1->attributes[i]);
				t1_sim_attr_index.push_back(i);
				t2_sim_attr_index.push_back(j);
			}
		}
	}
	vector<string> new_attributes;
	vector<string> new_types;
	for (int i=0; i<t1->attributes.size(); ++i) {
		new_attributes.push_back(t1->attributes[i]);
		new_types.push_back(t1->types[i]);
	}
	for (int i=0; i<t2->attributes.size(); ++i) {
		//check to see if this is a similar attribute
		bool check = true;
		for(int j = 0; j < t2_sim_attr_index.size(); ++j){
			if(i == t2_sim_attr_index[j]){
				check = false;
			}
		}
		if(check){
			new_attributes.push_back(t2->attributes[i]);
			new_types.push_back(t2->types[i]);
		}
	}
	ret.attributes = new_attributes;
	ret.types = new_types;
	
	vector<string> join_field;								//data to store join fields	
	for (int i=0; i<t1->data.size(); ++i) {						//iterate over table t1
		for (int j = 0; j < t2->data.size(); ++j) {				//iterate over table t2
			bool check = true;
			for (int x=0; x<t1_sim_attr_index.size(); ++x) {		//find if the similar attributes are equal
				if (t1->data[i][t1_sim_attr_index[x]] != t2->data[j][t2_sim_attr_index[x]]) {
					check = false;
				}
			}
			if (check) {									//find the combo
				for (int a=0; a<t1->data[i].size(); ++a) {
					join_field.push_back(t1->data[i][a]);
				}
				for (int b=0; b<t2->data[j].size(); ++b) {
					bool dup_check = false;					//check if were gonna push back a duplicate entry
					for (int z=0; z<t2_sim_attr_index.size(); ++z) {
						if (b == t2_sim_attr_index[z]) {
							dup_check = true;
						}
					}
					if (!dup_check) {
						join_field.push_back(t2->data[j][b]);
					}
				}
				ret.data.push_back(join_field);				//append it to the new table=
				join_field.clear();							//clear new field
			}
		}
	}
	return ret;	
}