#include <string>
#include <vector>
#include <pthread.h>
#include "Table.h"

class db_engine {
	
public: 
	db_engine();
	~db_engine();
	vector<Table*> open_tables;
	vector<Table*> queries;
	uint64_t id_c;
	string user_id;
	pthread_mutex_t* write_lock;
	bool lock_check = false;
	
	bool user_info(Table t);
	void out_message(string msg); 
	Table* find_table_by_name(string);
	Table* find_table_by_query(string);
	Table eval(Table,string,string,string);
	bool compatible(Table*,Table*);
	bool compatible(Table*,vector<string>);
	bool set_compatible(Table*,Table*);
	template <class T>
	bool eval_helper(T, T, std::string);
	
	//Commands
	void open_cmd(string fl);
	void close_cmd(Table);
	void write_cmd(string);
	void write_cmd(Table);
	void exit_cmd();
	void show_cmd(Table*, string);
	void show_cmd(string name);
	void create_cmd(string, vector<string>, vector<string>, vector<string>);
	void update_cmd(Table*, vector<string>, vector<string>, Table);
	void insert_cmd(Table*, vector<string>);
	void insert_cmd(Table*, Table*);
	void delete_cmd(Table*, Table*);
	void list_cmd(string list_type);
	void close_name(string n);

	//Queries
	Table selection(Table*, Table*);
	Table projection(vector<string>, Table*);
	Table renaming(vector<string>, Table*);
	Table set_union(Table*, Table*);
	Table set_difference(Table*, Table*);
	Table cross_product(Table*, Table*);
	Table natural_join(Table*, Table*);
};