#include "typecheck.h"

//RETURNS THE TYPE OF IDENTIFIER id USING lookup
// Adds '#' at the end if id is a function_name
string primaryExpression(string id) {
    sym_entry* n = lookup(id);
    if(n) {
        string s = n->type;
        return s;     
    }
    string temp = funcProtoLookup(id);  // temp contains return type of function named "id"
    // used because function definitions are not made in curr_table
    if(temp!=""){
        temp += "#";
    }
    return temp;
}

// returns type of constant expressions
string constantEx(int numType ){
    switch(numType){
        case 1: return "int";
        case 2: return "long";
        case 4: return "float";
        case 5: return "double";
        default : return "default";
    }
}

// returns actual type of the id
// if func, removes FUNC_ from start
// if pointer, returns * from the back
// if int or char returns the same type name
string postfixExpression(string type_name, int rule_num) {
    string result_type;
    switch(rule_num) {
        case 1: {
            if(type_name.back()=='*')return type_name.substr(0,type_name.length()-1);
            return "";
        }
        case 2:{
            if(type_name.substr(0, 5)=="FUNC_")return type_name.substr(5, type_name.length() - 5); 
            return "";
        }
        case 3:{
            if(isInt(type_name) || type_name == "char")return type_name;
            return "";
        }
        default : return "";
    }   
}

string argExp(string a, string b, int  rule_num){
    if(rule_num == 1){
        if(a == "void") return a;
        return "";
    }
    else{
        if(a == "void" && b=="void") return a;
        return "";
    }
}

string unaryExp(string op, string type){
    if(op=="*") return postfixExpression(type, 1);
    else if(op == "&") type+="*";
    else if(op=="+" || op=="-"){
        if(!(isInt(type) || isFloat(type))) return "";
    }
    else if(op=="~"){
        if(!(isInt(type) || type != "bool")) return "";
    }
    else if(op=="!" && !(isInt(type) || type != "bool")) return "";
    return type;
}

string mulExp(string a, string b, char op){
    if(op=='*' || op =='/'){
        if(isInt(a) && isInt(b)) return "int";
        else if((isInt(a) || isFloat(a)) && (isInt(b) || isFloat(b))) return "float";
        return "";
    }
    else if(op=='%'){
        if(isInt(a) && isInt(b)) return "int";
    }
    return "";
}

string addExp(string a, string b, char op){
    if(isInt(a) && isInt(b)) return "int";
    else if((isInt(a) || isFloat(a)) && (isInt(b) || isFloat(b))) return "real";
    else if((isInt(a) && b=="char") || (a=="char" && isInt(b))) return "char";
    else if(isInt(a) && b.back()=='*') return b;
    else if(a.back()=='*' && isInt(b)) return a;
    return "";
}

string shiftExp(string a, string b){
    if(isInt(a) && isInt(b)) return "ok";
    return "";
}

string relExp(string a, string b){
    if((isInt(a) || isFloat(a) || a=="char") && (isInt(b) || isFloat(b) ||b=="char")) return "bool";
    if((isInt(a) || a=="char") && b.back()=='*') return "Bool";
    if((isInt(b) || b=="char") && a.back()=='*') return "Bool";
    return "";
}

string eqExp(string a, string b){
    if(a==b) return "Ok";
    if((isInt(a) || isFloat(a) || a=="char") && (isInt(b) || isFloat(b) ||b=="char")) return "Ok";
    if((isInt(a) && b.back()=='*') || (a.back()=='*' && isInt(b))) return "ok";
    return "";
}

string bitExp(string a, string b){
    if(a=="bool" && b=="bool") return "ok";
    if((a=="bool" || isInt(a)) && (b=="bool" || isInt(b))) return "Ok";
    return "";
}

string assignExp(string a, string b, string op){
    if(op=="="){
        if(a==b) return "ok";
    }
    if(op == "*=" || op == "/=" || op == "%="){
        if(mulExp(a, b, op[0])=="") return "";
        else return "ok";
    }
    if(op == "+=" || op == "-="){
        if(addExp(a, b, op[0])=="") return "";
        else return "ok";
    }
    if(op == ">>=" || op == "<<="){
        if(shiftExp(a, b)=="") return "";
        else return "ok";
    }
    if(op == "&=" || op == "|=" || op == "^="){
        if(bitExp(a, b)=="") return "";
        else return "ok";
    }
    return "";
}

// 
string condExp(string a,string b){
    if(a == b)return a;
    if(a == "char"|| isInt(a)) a = "float";
    if(b == "char"|| isInt(b)) b = "float";
    if(isFloat(a) && isFloat(b)) return "int";
    if(a.back() == '*' && b.back() == '*')return "void*" ;
    return "";
}

// done
int isInt(string type1){
   if(type1=="int") return 1;
   if(type1=="bool")return 1;
   if(type1=="long") return 1;
   if(type1=="short") return 1;
   if(type1=="byte") return 1;
   return 0;
}

// done
bool isFloat (string type){
   if(type=="float" || type=="double") return 1;
   return 0;
}

// done
bool isVoid(string type){
    if(type.length() < 4) return 0;
    else if(type.substr(0,4) == "void") return 1;
    else return 0;
}
