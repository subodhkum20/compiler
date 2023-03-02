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
    PTR_OP = 258,
    INC_OP = 259,
    DEC_OP = 260,
    LEFT_OP = 261,
    RIGHT_OP = 262,
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    METHOD_REFERENCE = 267,
    ELLIPSIS = 268,
    AND_OP = 269,
    OR_OP = 270,
    MUL_ASSIGN = 271,
    DIV_ASSIGN = 272,
    MOD_ASSIGN = 273,
    ADD_ASSIGN = 274,
    SUB_ASSIGN = 275,
    LEFT_ASSIGN = 276,
    RIGHT_ASSIGN = 277,
    AND_ASSIGN = 278,
    UNSIGNED_RIGHT = 279,
    UNSIGNED_RIGHT_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    integerLiteral = 283,
    stringLiteral = 284,
    nullLiteral = 285,
    characterLiteral = 286,
    textBlock = 287,
    booleanLiteral = 288,
    FloatingPointLiteral = 289,
    Identifier = 290,
    ABSTRACT = 291,
    CONTINUE = 292,
    FOR = 293,
    NEW = 294,
    ASSERT = 295,
    DEFAULT = 296,
    IF = 297,
    PACKAGE = 298,
    SYNCHRONIZED = 299,
    BOOLEAN = 300,
    PRIVATE = 301,
    THIS = 302,
    BREAK = 303,
    DOUBLE = 304,
    IMPLEMENTS = 305,
    THROW = 306,
    BYTE = 307,
    ELSE = 308,
    PUBLIC = 309,
    THROWS = 310,
    ENUM = 311,
    INSTANCEOF = 312,
    RETURN = 313,
    TRANSIENT = 314,
    EXTENDS = 315,
    INT = 316,
    SHORT = 317,
    CHAR = 318,
    FINAL = 319,
    INTERFACE = 320,
    STATIC = 321,
    VOID = 322,
    CLASS = 323,
    FINALLY = 324,
    LONG = 325,
    STRICTFP = 326,
    VOLATILE = 327,
    FLOAT = 328,
    NATIVE = 329,
    SUPER = 330,
    WHILE = 331,
    _ = 332,
    EXPORTS = 333,
    OPENS = 334,
    REQUIRES = 335,
    USES = 336,
    MODULE = 337,
    PERMITS = 338,
    SEALED = 339,
    VAR = 340,
    NON_SEALED = 341,
    PROVIDES = 342,
    TO = 343,
    WITH = 344,
    OPEN = 345,
    RECORD = 346,
    TRANSITIVE = 347,
    YIELD = 348,
    eof = 349
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

#line 158 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
