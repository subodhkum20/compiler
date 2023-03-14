#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
using namespace std;

typedef struct symEntry{
    string type;
    int size;
    int offset;
    bool init;
    bool isArray;
    vector<int>arrDims;
    map<string, symEntry* > * entry;

}symEntry;

typedef map<string, symEntry* > symTable;
typedef map<string, pair< int, symTable* > > structSymTable;
typedef map<string,string> typTable;
extern symTable gst;
extern typTable typgst;
extern map<symTable*, symTable*> parentTable;
extern map<string, pair<string,vector<string> > > funcArg;

symEntry* createEntry(string type, int size, bool init, int offset, symTable* ptr);
void insertSymbol(symTable& table, string id, string type, int size, bool is_init, symTable* ptr);
void insertKeywords();
void symTableInit();
void makeSymbolTable(string name, string f_type,int flag);
void removeFuncProto();
void updSymbolTable(string id, int offset_flag);
symEntry* lookup(string id);