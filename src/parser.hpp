/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RIGHT_OP = 258,
    LEFT_OP = 259,
    EQ_OP = 260,
    NE_OP = 261,
    AND_OP = 262,
    OR_OP = 263,
    LE_OP = 264,
    GE_OP = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    MUL_ASSIGN = 268,
    DIV_ASSIGN = 269,
    MOD_ASSIGN = 270,
    LEFT_ASSIGN = 271,
    RIGHT_ASSIGN = 272,
    AND_ASSIGN = 273,
    XOR_ASSIGN = 274,
    OR_ASSIGN = 275,
    UNSIGNED_RIGHT = 276,
    UNSIGNED_RIGHT_ASSIGN = 277,
    INSTANCEOF = 278,
    PTR_OP = 279,
    METHOD_REFERENCE = 280,
    ELLIPSIS = 281,
    integerLiteral = 282,
    stringLiteral = 283,
    nullLiteral = 284,
    characterLiteral = 285,
    textBlock = 286,
    booleanLiteral = 287,
    FloatingPointLiteral = 288,
    Identifier = 289,
    ABSTRACT = 290,
    CONTINUE = 291,
    FOR = 292,
    NEW = 293,
    ASSERT = 294,
    DEFAULT = 295,
    IF = 296,
    PACKAGE = 297,
    SYNCHRONIZED = 298,
    BOOLEAN = 299,
    PRIVATE = 300,
    THIS = 301,
    BREAK = 302,
    DOUBLE = 303,
    THROW = 304,
    BYTE = 305,
    ELSE = 306,
    PUBLIC = 307,
    ENUM = 308,
    RETURN = 309,
    TRANSIENT = 310,
    INT = 311,
    SHORT = 312,
    CHAR = 313,
    FINAL = 314,
    INTERFACE = 315,
    STATIC = 316,
    VOID = 317,
    CLASS = 318,
    LONG = 319,
    STRICTFP = 320,
    VOLATILE = 321,
    FLOAT = 322,
    NATIVE = 323,
    SUPER = 324,
    WHILE = 325,
    _ = 326,
    EXPORTS = 327,
    OPENS = 328,
    REQUIRES = 329,
    USES = 330,
    MODULE = 331,
    PERMITS = 332,
    SEALED = 333,
    VAR = 334,
    NON_SEALED = 335,
    PROVIDES = 336,
    TO = 337,
    WITH = 338,
    OPEN = 339,
    RECORD = 340,
    TRANSITIVE = 341,
    YIELD = 342,
    eof = 343,
    INC_OP = 344,
    DEC_OP = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y++"
 
    char* str;
    treeNode* ptr;
    int ind;

#line 154 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
