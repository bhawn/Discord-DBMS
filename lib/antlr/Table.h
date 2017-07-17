#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Table {
public:
	string name;
	vector<string> attributes;
	vector<string> types;
	vector<string> keys;
	vector<vector<string>> data;
	bool view;
	
	Table();
	Table(string,vector<string>,vector<string>,vector<string>);
	void print();
	void print(uint64_t id_c);
	void save(uint64_t id_c, string user_id);
	int find(vector<string>);
};