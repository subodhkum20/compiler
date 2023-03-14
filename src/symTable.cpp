#include"symTable.h"

using namespace std;

symTable gst;
structSymTable structGst;
map<symTable*, symTable*> parentTable;
map<structSymTable*, structSymTable*> structParentTable;
map<typTable*,typTable*> typParentTable;
structSymTable *currStructTable;
symTable* currTable;
typTable* currTypTable;
extern vector<int>arrDims;
extern int isArray;
int avl=0;
stack<int> Goffset, Loffset, blockSz;

symEntry* createEntry(string type, int size, bool init, int offset, symTable* ptr){
	symEntry* newSym = new symEntry();
	newSym->type = type;
	newSym->size = size;
	newSym->init = init;
	newSym->offset = offset;
	newSym->entry = ptr;
	return newSym;
}

void insertSymbol(symTable& table, string id, string type, int size, bool is_init, symTable* ptr){
	table.insert(make_pair(id, createEntry(type, size, is_init, blockSz.top(), ptr)));
    if(type[type.length()-1]=='*'&&arrDims.size()!=0){
        int dims=1;
        vector<int>temp;
        for(int i = arrDims.size()-1; i>=1; i--){
			dims*=arrDims[i];
			temp.push_back(dims);
        }
        reverse(temp.begin(), temp.end());
		table[id]->arrDims = temp;
		if(isArray){
			table[id]->isArray = 1;
			isArray = 0;
		}
		arrDims.clear();
    }
}

void insertKeywords(){
	vector<string> keyWords = {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"}; 
	vector<string> operators = {"...",">>=","<<=","+=","-=","*=","/=","%=","&=","^=","|=",">>","<<","++","--","->","&&","||","<=",">=","==","!=",";","{","<%","}","%>",",",":","=","(",")","[","<:","]",":>",".","&","!","~","-","+","*","/","%","<",">","^","|","?"};

	for(auto h:keyWords){
		insertSymbol(*currTable, h, "keyword", 8, 1, nullptr);
	}
	for(auto h:operators){
		insertSymbol(*currTable, h, "operator", 8, 1, nullptr);
	}
}


void symTableInit(){
    Goffset.push(0);
	Loffset.push(0);
	blockSz.push(0);
    parentTable.insert(make_pair(&gst, nullptr));
	structParentTable.insert(make_pair(&structGst, nullptr));
	currTable = &gst;
    currTypTable = &typgst;
	currStructTable = &structGst;
    insertKeywords();
}


void makeSymbolTable(string name, string fType, int offset_flag){
	// if(!avl){
        symTable* newTable = new symTable;
		structSymTable* newStructTable = new structSymTable;
		typTable* newTypTable = new typTable;

		if(fType != "") insertSymbol(*currTable, name , "FUNC_" + fType , 0 , 1, newTable);
		else{
			insertSymbol(*currTable, name , "Block",0,1, newTable);
		}
		parentTable.insert(make_pair(newTable, currTable));
		structParentTable.insert(make_pair(newStructTable, currStructTable));
		typParentTable.insert(make_pair(newTypTable, currTypTable));

		currTable = newTable;
		currStructTable = newStructTable;
		currTypTable = newTypTable;
    // }
    // else{
	// 	avl = 0;
	// 	(*parentTable[currTable]).erase("dummyF_name");
	// 	(*parentTable[currTable]).insert(make_pair(name, createEntry("FUNC_"+fType,0,1,Loffset.top(), currTable)));
	// 	Loffset.pop();
    // }
}

void removeFuncProto(){
	avl = 0;
	// clear_paramoffset();
	updSymbolTable("dummyF_name",1);
	parentTable.erase((*currTable)["dummyF_name"]->entry);
	(*currTable).erase("dummyF_name");
	Loffset.pop();
}

void updSymbolTable(string id, int offset_flag){
	int temp = Goffset.top();
	Goffset.pop();
	Goffset.top()+=temp;

	currTable = parentTable[currTable];
	currStructTable = structParentTable[currStructTable];
	currTypTable = typParentTable[currTypTable];

	symEntry* entry = lookup(id);
	if(entry) entry->size = blockSz.top();

	if(offset_flag){
		temp = blockSz.top();
		blockSz.pop();
		blockSz.top()+=temp;
	}
}

symEntry* lookup(string id){
	symTable* temp = currTable;
	while(temp){
		if((*temp).find(id)!=(*temp).end()) return (*temp)[id];
		temp = parentTable[temp];
	}
	return nullptr;
}