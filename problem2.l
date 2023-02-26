
%{
        #include<iostream>
        #include<string>
        #include<utility>
        #include <fstream>
        #include <vector>
        #include <algorithm>
        #include <unordered_map>
        #include "y.tab.h++"
        using namespace std;
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
integerLiteral  {boolean}|{decimal}|{hexNumeral}[lL]?|{octal}
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

{LineTerminators}       {}
{whitespace}            {}
{comments}              {}
{keyword}               {return m[string(yytext)];}
{integerLiteral}        {return integerLiteral;}
{stringLiteral}         {return stringLiteral;}
{boolean}               {return boolean;}
{float}                 {return float;}
{nullLiteral}           {return nullLiteral;}
{characterLiteral}      {return characterLiteral;}
{textBlock}             {return textBlock;}
{Identifier}            {return Identifier;}
{compileError}          {return compileError;}
">>>"                   {return(UNSIGNED_RIGHT); }
">>>="                  {return(UNSIGNED_RIGHT_assign); }
"::"                    {return(METHOD_REFERENCE); }
"..."			{return(ELLIPSIS); }
">>="			{return(RIGHT_ASSIGN); }
"<<="			{return(LEFT_ASSIGN); }
"+="			{return(ADD_ASSIGN); }
"-="			{return(SUB_ASSIGN); }
"*="			{return(MUL_ASSIGN); }
"/="			{return(DIV_ASSIGN); }
"%="			{return(MOD_ASSIGN); }
"&="			{return(AND_ASSIGN); }
"^="			{return(XOR_ASSIGN); }
"|="			{return(OR_ASSIGN); }
">>"			{return(RIGHT_OP); }
"<<"			{return(LEFT_OP); }
"++"			{return(INC_OP); }
"--"			{return(DEC_OP); }
"->"			{return(PTR_OP); }
"&&"			{return(AND_OP); }
"||"			{return(OR_OP); }
"<="			{return(LE_OP); }
">="			{return(GE_OP); }
"=="			{return(EQ_OP); }
"!="			{return(NE_OP); }
";"			{return(';'); }
"@"                     {return('@'); }
"{"		        {return('{'); }
"}"		        {return('}'); }
","			{return(','); }
":"			{return(':'); }
"="			{return('='); }
"("			{return('('); }
")"			{return(')'); }
"["	        	{return('['); }
"]"     		{return(']'); }
"."			{return('.'); }
"&"			{return('&'); }
"!"			{return('!'); }
"~"			{return('~'); }
"-"			{return('-'); }
"+"			{return('+'); }
"*"			{return('*'); }
"/"			{return('/'); }
"%"			{return('%'); }
"<"			{return('<'); }
">"			{return('>'); }
"^"			{return('^'); }
"|"			{return('|'); }
"?"			{return('?'); }

.       {
        cout<<"illegal character on line "<<j<<" :"<<yytext<<endl;
        return -1
}

%%
