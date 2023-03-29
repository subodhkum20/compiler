#include "symTable.h"

sym_table globalst;
class_sym_table class_gst;
map<sym_table*, sym_table*> parent_table;
map<class_sym_table*, class_sym_table*> class_parent_table;
map<string, pair< string,vector<string> > > func_arg;    // this information about functions is not stored in sym table
int class_offset;
sym_table* curr_table;
sym_table* curr_classure;
class_sym_table *curr_class_table;                   // includes all the class used in this scope. 
stack<int> Goffset, Loffset, blockSz;
typ_table typ_gst;
map<typ_table*, typ_table*> typ_parent_table;
typ_table* curr_typ;

int max_size = 0;                     //?
int param_offset = -4;
int class_count = 1;                
int avl=0;                            //?
extern int isArray;
extern vector<int> array_dims;
extern map<string, int> func_usage_map;
extern int dump_sym_table;           //?
map<string, pair<string, int>> globaldecl;           //?
int blockCnt = 1;               //?

// initialize base symbol table - done
void symTable_init(){
	Goffset.push(0);
	Loffset.push(0);
	blockSz.push(0);
	parent_table.insert(make_pair(&gst, nullptr));
	class_parent_table.insert(make_pair(&class_gst, nullptr));
	curr_table = &gst;
	curr_class_table = &class_gst;
	curr_typ = &typ_gst;
	insertKeywords();
}

// conclassor for symbol table entry - done
sym_entry* createEntry(string type, int size, bool init, int offset, sym_table* ptr){
	sym_entry* new_sym = new sym_entry();
	new_sym->type = type;
	new_sym->size = size;
	new_sym->init = init;
	new_sym->offset = offset;
	new_sym->entry = ptr;
	return new_sym;
}

// create new symbol tables for new scopes - done 
// if f_type is "" then the block is not of function
void makeSymbolTable(string name, string f_type, int offset_flag){
	if(!avl){
		// since there is no already existing dummy table a new table is created and its entry is made in the parent table

		sym_table* new_table = new sym_table;
		class_sym_table* new_class_table = new class_sym_table;
		typ_table* new_typ = new typ_table;

		if(f_type != "") insertSymbol(*curr_table, name , "FUNC_" + f_type , 0 , 1, new_table);
		else{
			insertSymbol(*curr_table, name , "Block",0,1, new_table);
			blockCnt++;
		}

		Goffset.push(0);
		if(offset_flag)blockSz.push(0);
		parent_table.insert(make_pair(new_table, curr_table));
		class_parent_table.insert(make_pair(new_class_table, curr_class_table));
		typ_parent_table.insert(make_pair(new_typ, curr_typ));

		curr_table = new_table;
		curr_class_table = new_class_table;
		curr_typ = new_typ;
	}
	else{
		avl = 0;
		// given actual name to entry already existing in the parent table by dummy name
		// actually not creating any new table
		(*parent_table[curr_table]).erase("dummyF_name");
		(*parent_table[curr_table]).insert(make_pair(name, createEntry("FUNC_"+f_type,0,1,Loffset.top(), curr_table)));
		Loffset.pop();
	}
}

// remove func prototype from symbol table - 
void removeFuncProto(){
	avl = 0;
	clear_paramoffset();
	updSymbolTable("dummyF_name",1);
	parent_table.erase((*curr_table)["dummyF_name"]->entry);
	(*curr_table).erase("dummyF_name");
	Loffset.pop();
}

// set parent as current (end of scope) and update current symbol table (adding sizes and all) - done
void updSymbolTable(string id, int offset_flag){
	int temp = Goffset.top();
	Goffset.pop();
	Goffset.top()+=temp;

	curr_table = parent_table[curr_table];
	curr_class_table = class_parent_table[curr_class_table];
	curr_typ = typ_parent_table[curr_typ];

	sym_entry* entry = lookup(id);
	if(entry) entry->size = blockSz.top();

	if(offset_flag){
		temp = blockSz.top();
		blockSz.pop();
		blockSz.top()+=temp;
	}
}

// look up the hirerachy up till the global sym table from the curr sym table that corresponds to the id - done
sym_entry* lookup(string id){
	sym_table* temp = curr_table;
	while(temp){
		if((*temp).find(id)!=(*temp).end()) return (*temp)[id];
		temp = parent_table[temp];
	}
	return nullptr;
}

// look up function prototype parameter list - done
// returns function type
string funcProtoLookup(string id){
	if(func_arg.find(id)!= func_arg.end())return func_arg[id].first;
	else return "";
}

// find total size of local variables a function - done
int func_local_size(string name){
	return gst[name]->size;
}

// look up for a symbol in current symbol table only (only the current scope) - done
sym_entry* currLookup(string id){
	if((*curr_table).find(id)==(*curr_table).end()) return nullptr;
	return (*curr_table)[id];
}

// insert keywords into global symbol table - done
void insertKeywords(){
	vector<string> key_words = {"abstract","continue","for","new","assert","default","if","package","synchronized","boolean","private","this","break","double","throw","byte","else","public","enum","instanceof","return","transient","int","short","char","final","interface","static","void","class","long","strictfp","volatile","float","native","super","while","exports","opens","requires","uses","module","permits","sealed","var","non-sealed","provides","to","with","open","record","transitive","yield"}; 
	vector<string> op = {">>>",">>>=","::","...",">>=","<<=","+=","-=","*=","/=","%=","&=","^=","|=",">>","<<","++","--","->","&&","||","<=",">=","==","!=",";","@","{","}",",",":","=","(",")","[","]",".","&","!","~","-","+","*","/","%","<",">","^","|","?"};

	for(auto h:key_words){
		insertSymbol(*curr_table, h, "keyword", 16, 1, nullptr);              //changed 8->16
	}
	for(auto h:op){
		insertSymbol(*curr_table, h, "operator", 16, 1, nullptr);            //changed 8->16
	}
	
	// important io functions
	vector<string> type = {"printfn"};
	insert_imp_func("system.out.println", type, "void");
}

// helper function to insert library functions in symbol table - done
void insert_imp_func(string func_name, vector<string> type, string ret_type){
	insertSymbol(*curr_table, func_name, "FUNC_"+ret_type, 4, 0, nullptr);
	func_arg.insert({func_name, make_pair("FUNC_"+ret_type, type)});
	func_usage_map.insert({func_name, 0});
}

// find the type of a symbol if the entry for it exists - done
string getType(string id){
	sym_entry* entry = lookup(id);
	string ret = "";
	if(entry) ret += entry->type;
	return ret;
}

// conclass class/ union table - done
void createStructTable(){
	sym_table* new_table = new sym_table;
	curr_classure = new_table;
	class_offset = 0;
}

// insert class/ union members (attributes) in symbol table - done
// create entry in class sym table if it doesnot exist already
int insertStructAttr(string attr, string type, int size, bool init){  
	if((*curr_classure).find(attr)==(*curr_classure).end()){
		blockSz.top()+=size;
		Goffset.top()+=size;
		max_size = max(max_size, size);
		(*curr_classure).insert(make_pair(attr, createEntry(type,size,init, class_offset, nullptr)));
		if(type[type.length()-1] == '*' && !array_dims.empty()){
			vector<int> temp;
			int curr = 1;
			for(int i = array_dims.size()-1; i>=1; i--){
				curr*=array_dims[i];
				temp.push_back(curr);
			}
			reverse(temp.begin(), temp.end());
			(*curr_classure)[attr]->array_dims = temp;
			if(isArray){
				(*curr_classure)[attr]->isArray = 1;
				isArray = 0;
			}
			array_dims.clear();
		}
		class_offset += size;
		return 1;
	}
	return 0;
}

// print a class/ union table into a csv file
int printStructTable(string class_name){
	if((*curr_class_table).find(class_name)==(*curr_class_table).end()){
		class_parent_table.insert(make_pair(curr_class_table, nullptr));
		if(class_name.substr(0, 6) == "class") (*curr_class_table).insert(make_pair(class_name, make_pair(class_offset,curr_classure)));
		else{
			(*curr_class_table).insert(make_pair(class_name, make_pair(max_size,curr_classure)));
			for(auto it: *curr_classure){
				it.second->offset = 0;
			}
		}
		max_size = 0;
		printSymbolTable(curr_classure, class_name + "_" + to_string(class_count)+".csv");  // prints classre symbol table
		class_count++;
		return 1;
	}
	return 0;
}

// used when accessing member of a class/ union - done
// accessing entry corresponding to class_name.id in symbol table for class_name (eg class student vivek)
// dont know use of class_var ?
sym_entry* retTypeAttrEntry(string class_name, string id, string class_var){
	class_sym_table* temp = curr_class_table;
	while((*temp).find(class_name) == (*temp).end()){
		temp = class_parent_table[temp];
	}
	if(temp == nullptr){
		cout << "Error: Class not defined!\n";
		return NULL;
	}
	sym_table* table = (*temp)[class_name].second;
	// sym_entry* class_entry = lookup(class_var);
	sym_entry* t = new sym_entry;
	t->type = ((*table)[id])->type;
	t->size = ((*table)[id])->size;
	t->offset = ((*table)[id])->offset;
	t->isArray = ((*table)[id])->isArray;
	t->array_dims = ((*table)[id])->array_dims;
	t->addr_descriptor = ((*table)[id])->addr_descriptor;
	t->next_use = -1;
	t->heap_mem = 0;
	t->is_derefer = 0;
	return t;
}

// look up the type of a class member - done
// Like type of class_name.id
string StructAttrType(string class_name, string id){
	class_sym_table* temp = curr_class_table;
	while((*temp).find(class_name) == (*temp).end()){
		temp = class_parent_table[temp];
	}
	sym_table* table = (*temp)[class_name].second;
	if(temp == nullptr){
		cout << "Error: Class not defined!\n";
		return NULL;
	}
	return ((*table)[id]->type);
}

// look up any user defined conclasss (classs or unions) - done
// return 1 if found the classure up the herierachy else return 0
int typeLookup(string class_name){
	class_sym_table* temp = curr_class_table;
	while(temp){
		if((*temp).find(class_name)!=(*temp).end()) return 1;
		temp = class_parent_table[temp];
	}
	return 0;
}

// look up any user defined conclasss (classs or unions) only in the current symbol table (current scope) - done
int currTypeLookup(string class_name){
	class_sym_table* temp = curr_class_table;
	if((*temp).find(class_name)!=(*temp).end()) return 1;
	return 0;
}

// search for any member of a user defined type - done
// return -1 if classure for class_name itself dne
// returns 1 if attr id is in class_name else 0
int findTypeAttr(string class_name, string id){
	class_sym_table* temp = curr_class_table;
	while(temp){
		if((*temp).find(class_name)!=(*temp).end()){
			if((*((*temp)[class_name].second)).find(id)!=(*((*temp)[class_name].second)).end()) return 1; // found the attr
			else return 0; // attr id not present
		}
		temp = class_parent_table[temp];
	}
	return -1;	// class (or union) not present
	
}

// initialize creation of a function table - done
// required because parameter list is made now but symbol table is made later
void createParamList(){
	Loffset.push(Goffset.top());
	makeSymbolTable("dummyF_name", "",1);
	avl = 1;
}

// create a symbol table entry and put it in the given symbol table - done
void insertSymbol(sym_table& table, string id, string type, int size, bool is_init, sym_table* ptr){
	table.insert(make_pair(id, createEntry(type, size, is_init, blockSz.top(), ptr)));
	if(type[type.length()-1] == '*' && !array_dims.empty()){
		vector<int> temp;
		int curr = 1;
		for(int i = array_dims.size()-1; i>=1; i--){
			curr*=array_dims[i];
			temp.push_back(curr);
		}
		reverse(temp.begin(), temp.end());
		table[id]->array_dims = temp;
		if(isArray){
			table[id]->isArray = 1;
			isArray = 0;
		}
		array_dims.clear();
	}
	blockSz.top()+=size;
	Goffset.top()+=size;
}

// insert function parameters into the symbol table of the function - done
void paramInsert(sym_table& table, string id, string type, int size, bool is_init, sym_table* ptr){
	table.insert(make_pair(id, createEntry(type, size, is_init, param_offset-size, ptr)));
	if(type[type.length()-1] == '*' && !array_dims.empty()){
		size = 4;
		vector<int> temp;
		int curr = 1;
		for(int i = array_dims.size()-1; i>=1; i--){
			curr*=array_dims[i];
			temp.push_back(curr);
		}
		reverse(temp.begin(), temp.end());
		table[id]->array_dims = temp;
		table[id]->offset = param_offset - size;
		array_dims.clear();
	}
	param_offset-=size;
}

// reset parameter offset global variable before insertion - done
void clear_paramoffset(){
	param_offset = -4;
}

// returns the list of function arguments if the function exists - done
// else return vector({"N=#NO_FUNC"})
vector<string> getFuncArgs(string id){
	vector<string> temp;
	temp.push_back("#NO_FUNC");
	if(func_arg.find(id) != func_arg.end()) return func_arg[id].second;
	else return temp;
}

// returns the return type of the required function if it exists - done
// else return ""
string getFuncType(string id){
	if(func_arg.find(id) != func_arg.end()) return func_arg[id].first;
	return "";
}

// update the init field of an entry if the entry exists - done
void updInit(string id){
	sym_entry* entry = lookup(id);
	if(entry) entry->init = true;
}

// update the argument list and return type of a function - done
void insertFuncArg(string &func, vector<string> &arg, string &tp){
	func_arg.insert(make_pair(func, make_pair(string("FUNC_" +tp),arg)));
}

// look up a specific user defined type in that is currently in scope - didn't understand
// returns the id for that type ??
string lookupType(string a){
	typ_table* temp = curr_typ;
	while(temp){
		if((*temp).find(a)==(*temp).end()) return (*temp)[a];
		temp = typ_parent_table[temp];
	}
	return "";
}

// set global variables - needs to be changed for java datatypes
void setGlobal(){
	for(auto &it: gst){
		if(it.second->type.substr(0,2) == "in" || it.second->type.substr(0,2)=="ch"){
			it.second->is_global = 1;
			globaldecl.insert(make_pair(it.first,make_pair("0", 0)));
			if(it.second->size >= 4) globaldecl[it.first].second = it.second->size/4;
		}
	}
}

// write the specified symbol table into a csv file - done
void printSymbolTable(sym_table* table, string file_name){
	if(!dump_sym_table) return;
	FILE* file = fopen(file_name.c_str(), "w");
  	fprintf( file,"Name, Type, Size, isInitialized, Offset\n");
  	for(auto it: (*table)){
    	fprintf(file,"%s,%s,", it.first.c_str(), it.second->type.c_str());
		fprintf(file, "%d,%d,%d\n", (it.second)->size, (it.second)->init, (it.second)->offset);
  	}
  	fclose(file);
}

// return the total size of the user defined datatype - done
int getStructsize(string class_name){
	class_sym_table* temp = curr_class_table;
	while(temp){
		if((*temp).find(class_name)!=(*temp).end()){
			return (*temp)[class_name].first;
		}
		temp = class_parent_table[temp];
	}
	cout << "Error: No such data type exists! Returning default value = 4.\n";
	return 4;
}

// return the size of the given datatype - done
int getSize(string id){
  	if(typeLookup(id)) return getStructsize(id);
	if(id == "byte") return 1;
  	if(id == "char") return 2;           
  	if(id == "short") return 2;
  	if(id == "int") return 4;
  	if(id == "bool") return 1;
  	if(id == "long") return 8;
  	if(id == "float") return 4;
  	if(id == "double") return 8;
  	cout << "Error: No such data type exists! Returning default value = 4.\n";
  	return 4;
}