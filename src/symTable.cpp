#include"symTable.h"

using namespace std;

symTable gst;
structSymTable struct_gst;
map<symTable*, symTable*> parentTable;
map<structSymTable*, structSymTable*> structParentTable;
structSymTable *currStructTable;
symTable* currTable;
extern vector<int>arrDims;
extern int isArray;
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
	structParentTable.insert(make_pair(&struct_gst, nullptr));
	currTable = &gst;
	currStructTable = &struct_gst;
    insertKeywords();
}
