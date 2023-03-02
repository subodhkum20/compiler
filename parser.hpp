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
    GOTO = 301,
    PRIVATE = 302,
    THIS = 303,
    BREAK = 304,
    DOUBLE = 305,
    IMPLEMENTS = 306,
    PROTECTED = 307,
    THROW = 308,
    BYTE = 309,
    ELSE = 310,
    IMPORT = 311,
    PUBLIC = 312,
    THROWS = 313,
    CASE = 314,
    ENUM = 315,
    INSTANCEOF = 316,
    RETURN = 317,
    TRANSIENT = 318,
    CATCH = 319,
    EXTENDS = 320,
    INT = 321,
    SHORT = 322,
    TRY = 323,
    CHAR = 324,
    FINAL = 325,
    INTERFACE = 326,
    STATIC = 327,
    VOID = 328,
    CLASS = 329,
    FINALLY = 330,
    LONG = 331,
    STRICTFP = 332,
    VOLATILE = 333,
    CONST = 334,
    FLOAT = 335,
    NATIVE = 336,
    SUPER = 337,
    WHILE = 338,
    _ = 339,
    EXPORTS = 340,
    OPENS = 341,
    REQUIRES = 342,
    USES = 343,
    MODULE = 344,
    PERMITS = 345,
    SEALED = 346,
    VAR = 347,
    NON_SEALED = 348,
    PROVIDES = 349,
    TO = 350,
    WITH = 351,
    OPEN = 352,
    RECORD = 353,
    TRANSITIVE = 354,
    YIELD = 355
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "parser.y++"
 
    char* str;

#line 162 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
