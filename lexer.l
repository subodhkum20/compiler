
%{
        #include<iostream>
        #include<string>
        #include<utility>
        #include <fstream>
        #include <vector>
        #include <algorithm>
        #include <unordered_map>
        #include "parser.tab.h++"
        using namespace std;
        #include "ast.h"
        #include "parser.hpp"

        void count(void);
        int line = 1;

        unordered_map<string,yytokentype>m(
                {
                        {"abstract",ABSTRACT},
                        {"continue",CONTINUE},
                        {"for",FOR},
                        {"new",NEW},
                        {"switch",SWITCH},
                        {"assert",ASSERT},
                        {"default",DEFAULT},
                        {"if",IF},
                        {"package",PACKAGE},
                        {"synchronized",SYNCHRONIZED},
                        {"boolean",BOOLEAN},
                        {"do",DO},{"goto",GOTO},
                        {"private",PRIVATE},
                        {"this",THIS},
                        {"break",BREAK},
                        {"double",DOUBLE},
                        {"implements",IMPLEMENTS},
                        {"protected",PROTECTED},
                        {"throw",THROW},
                        {"byte",BYTE},
                        {"else",ELSE},
                        {"import",IMPORT},
                        {"public",PUBLIC},
                        {"throws",THROWS},
                        {"case",CASE},
                        {"enum",ENUM},
                        {"instanceof",INSTANCEOF},
                        {"return",RETURN},
                        {"transient",TRANSIENT},
                        {"catch",CATCH},
                        {"extends",EXTENDS},
                        {"int",INT},
                        {"short",SHORT},
                        {"try",TRY},
                        {"char",CHAR},
                        {"final",FINAL},
                        {"interface",INTERFACE},
                        {"static",STATIC},
                        {"void",VOID},
                        {"class",CLASS},
                        {"finally",FINALLY},
                        {"long",LONG},
                        {"strictfp",STRICTFP},
                        {"volatile",VOLATILE},
                        {"const",CONST},
                        {"float",FLOAT},
                        {"native",NATIVE},
                        {"super",SUPER},
                        {"while",WHILE},
                        {"_",UNDERSCORE},
                        {"exports",EXPORTS},
                        {"opens",OPENS},
                        {"requires",REQUIRES},
                        {"uses",USES},
                        {"module",MODULE},
                        {"permits",PERMITS},
                        {"sealed",SEALED},
                        {"var",VAR},
                        {"non-sealed",NON_SEALED},
                        {"provides",PROVIDES},
                        {"to",TO},
                        {"with",WITH},
                        {"open",OPEN},
                        {"record",RECORD},
                        {"transitive",TRANSITIVE},
                        {"yield",YIELD}
                }
        )
        ;
%}

hex [0-9a-fA-F]
UnicodeEscape   [\\]u+{hex}{4}
UnicodeInputCharacter {UnicodeEscape}|
LineTerminators [\n\r]|[\r][\n]
whitespace  [ \t\f]|{LineTerminators}
oneLineComment  [/]{2}[^\r\n]+
character   .|\n|\r
multiLineComment    "/*"([^*]|\*+[^*/])*\*+"/"
comments    {oneLineComment}|{multiLineComment}
keyword abstract|continue|for|new|switch|assert|default|if|package|synchronized|boolean|do|goto|private|this|break|double|implements|protected|throw|byte|else|import|public|throws|case|enum|instanceof|return|transient|catch|extends|int|short|try|char|final|interface|static|void|class|finally|long|strictfp|volatile|const|float|native|super|while|_|exports|opens|requires|uses|module|permits|sealed|var|non-sealed|provides|to|with|open|record|transitive|yield
Identifier       [a-zA-Z$_][a-zA-Z0-9$_]*
hexAndUnderscore    [0-9a-fA-F_]+
hexDigits   {hex}|{hex}{hexAndUnderscore}?{hex}
hexNumeral  0[xX]{hexDigits}
decimal [0-9]|[1-9][0-9_]*[0-9][lL]?
octal   0[0-7_]*[0-7][lL]?
binary  0[bB][01][01_]*[01]|0[bB][01][lL]?
digits  [0-9]|[0-9][0-9_]*[0-9]
Integer   [+-]?{digits}
exponent    [eE]{Integer}
decimalFloat    {digits}[.]{digits}?{exponent}?[fFdD]?|[.]{digits}{exponent}?[fFdD]?|{digits}{exponent}[fFdD]?|{digits}{exponent}?[fFdD]
hexsignificand  {hexNumeral}[.]?|0[xX]{hexDigits}?[.]{hexDigits}
binaryExponent  [Pp]{Integer}
hexadecimalFloat  {hexsignificand}{binaryExponent}[fFdD]?
float   {decimalFloat}|{hexadecimalFloat}
boolean true|false
octalEscape [\][0-3]?[0-7]{1,2}
integerLiteral  {decimal}|{hexNumeral}[lL]?|{octal}|{binary}
escapeSequence  [\\][btrnf\"\'\\]|{octalEscape}
singleCharacter [^\n\r\'\\]
characterLiteral    [\']{singleCharacter}[\']|[\']{escapeSequence}[\']
stringCharacter [^\n\r\"\\]|{escapeSequence}
stringLiteral   [\"]{stringCharacter}*[\"]
nullLiteral null
end [^\\][\"]{3}
textBlockCharacter  [^\\]|{escapeSequence}
textBlock   [\"]{3}[ \t\f]*{textBlockCharacter}*{end}
compileError    [\'].*[\r\n]+.*[\']|[\'].[^\']|[\"][^\r\n\"]*[\r\n]+[^\r\n\"][\"]
%%

{LineTerminators}       {count();}
{whitespace}            {}
{comments}              {}
{keyword}               {yylval.str = strdup(yytext); count();return m[string(yytext)]}
{integerLiteral}        {yylval.str = strdup(yytext); count(); return integerLiteral;}
{stringLiteral}         {yylval.str = strdup(yytext); count(); return stringLiteral;}
{boolean}               {yylval.str = strdup(yytext); count(); return booleanLiteral;}
{float}                 {yylval.str = strdup(yytext); count(); return FloatingPointLiteral;}
{nullLiteral}           {yylval.str = strdup(yytext); count(); return nullLiteral;}
{characterLiteral}      {yylval.str = strdup(yytext); count(); return characterLiteral;}
{textBlock}             {yylval.str = strdup(yytext); count(); return textBlock;}
{Identifier}            {yylval.str = strdup(yytext); count(); return Identifier;}
{compileError}          {yylval.str = strdup(yytext); count(); return compileError;}
">>>"                   {yylval.str = strdup(yytext); count(); return(UNSIGNED_RIGHT); }
">>>="                  {yylval.str = strdup(yytext); count(); return(UNSIGNED_RIGHT_ASSIGN); }
"::"                    {yylval.str = strdup(yytext); count(); return(METHOD_REFERENCE); }
"..."			{yylval.str = strdup(yytext); count(); return(ELLIPSIS); }
">>="			{yylval.str = strdup(yytext); count(); return(RIGHT_ASSIGN); }
"<<="			{yylval.str = strdup(yytext); count(); return(LEFT_ASSIGN); }
"+="			{yylval.str = strdup(yytext); count(); return(ADD_ASSIGN); }
"-="			{yylval.str = strdup(yytext); count(); return(SUB_ASSIGN); }
"*="			{yylval.str = strdup(yytext); count(); return(MUL_ASSIGN); }
"/="			{yylval.str = strdup(yytext); count(); return(DIV_ASSIGN); }
"%="			{yylval.str = strdup(yytext); count(); return(MOD_ASSIGN); }
"&="			{yylval.str = strdup(yytext); count(); return(AND_ASSIGN); }
"^="			{yylval.str = strdup(yytext); count(); return(XOR_ASSIGN); }
"|="			{yylval.str = strdup(yytext); count(); return(OR_ASSIGN); }
">>"			{yylval.str = strdup(yytext); count(); return(RIGHT_OP); }
"<<"			{yylval.str = strdup(yytext); count(); return(LEFT_OP); }
"++"			{yylval.str = strdup(yytext); count(); return(INC_OP); }
"--"			{yylval.str = strdup(yytext); count(); return(DEC_OP); }
"->"			{yylval.str = strdup(yytext); count(); return(PTR_OP); }
"&&"			{yylval.str = strdup(yytext); count(); return(AND_OP); }
"||"			{yylval.str = strdup(yytext); count(); return(OR_OP); }
"<="			{yylval.str = strdup(yytext); count(); return(LE_OP); }
">="			{yylval.str = strdup(yytext); count(); return(GE_OP); }
"=="			{yylval.str = strdup(yytext); count(); return(EQ_OP); }
"!="			{yylval.str = strdup(yytext); count(); return(NE_OP); }
";"			{yylval.str = strdup(yytext); count(); return(';'); }
"@"                     {yylval.str = strdup(yytext); count(); return('@'); }
"{"		        {yylval.str = strdup(yytext); count(); return('{'); }
"}"		        {yylval.str = strdup(yytext); count(); return('}'); }
","			{yylval.str = strdup(yytext); count(); return(','); }
":"			{yylval.str = strdup(yytext); count(); return(':'); }
"="			{yylval.str = strdup(yytext); count(); return('='); }
"("			{yylval.str = strdup(yytext); count(); return('('); }
")"			{yylval.str = strdup(yytext); count(); return(')'); }
"["	        	{yylval.str = strdup(yytext); count(); return('['); }
"]"     		{yylval.str = strdup(yytext); count(); return(']'); }
"."			{yylval.str = strdup(yytext); count(); return('.'); }
"&"			{yylval.str = strdup(yytext); count(); return('&'); }
"!"			{yylval.str = strdup(yytext); count(); return('!'); }
"~"			{yylval.str = strdup(yytext); count(); return('~'); }
"-"			{yylval.str = strdup(yytext); count(); return('-'); }
"+"			{yylval.str = strdup(yytext); count(); return('+'); }
"*"			{yylval.str = strdup(yytext); count(); return('*'); }
"/"			{yylval.str = strdup(yytext); count(); return('/'); }
"%"			{yylval.str = strdup(yytext); count(); return('%'); }
"<"			{yylval.str = strdup(yytext); count(); return('<'); }
">"			{yylval.str = strdup(yytext); count(); return('>'); }
"^"			{yylval.str = strdup(yytext); count(); return('^'); }
"|"			{yylval.str = strdup(yytext); count(); return('|'); }
"?"			{yylval.str = strdup(yytext); count(); return('?'); }
<<EOF>>                 {yylval.str =  "<EOF>"; return EOF;}
.       {
        cout<<"illegal character on line "<<line<<" :"<<yytext<<endl;
        return -1;
}

%%

int yywrap()
{
      return(1);
}

void count(void)
{
      for (i = 0; yytext[i] != '\0'; i++) 
        if (yytext[i] == '\n') line ++;
      return;  
}