/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    RIGHT_OP = 258,                /* RIGHT_OP  */
    LEFT_OP = 259,                 /* LEFT_OP  */
    EQ_OP = 260,                   /* EQ_OP  */
    NE_OP = 261,                   /* NE_OP  */
    AND_OP = 262,                  /* AND_OP  */
    OR_OP = 263,                   /* OR_OP  */
    LE_OP = 264,                   /* LE_OP  */
    GE_OP = 265,                   /* GE_OP  */
    ADD_ASSIGN = 266,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 267,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 268,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 269,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 270,              /* MOD_ASSIGN  */
    LEFT_ASSIGN = 271,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 272,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 273,              /* AND_ASSIGN  */
    XOR_ASSIGN = 274,              /* XOR_ASSIGN  */
    OR_ASSIGN = 275,               /* OR_ASSIGN  */
    UNSIGNED_RIGHT = 276,          /* UNSIGNED_RIGHT  */
    UNSIGNED_RIGHT_ASSIGN = 277,   /* UNSIGNED_RIGHT_ASSIGN  */
    integerLiteral = 278,          /* integerLiteral  */
    stringLiteral = 279,           /* stringLiteral  */
    nullLiteral = 280,             /* nullLiteral  */
    characterLiteral = 281,        /* characterLiteral  */
    textBlock = 282,               /* textBlock  */
    booleanLiteral = 283,          /* booleanLiteral  */
    FloatingPointLiteral = 284,    /* FloatingPointLiteral  */
    Identifier = 285,              /* Identifier  */
    CONTINUE = 286,                /* CONTINUE  */
    FOR = 287,                     /* FOR  */
    NEW = 288,                     /* NEW  */
    IF = 289,                      /* IF  */
    PACKAGE = 290,                 /* PACKAGE  */
    BOOLEAN = 291,                 /* BOOLEAN  */
    PRIVATE = 292,                 /* PRIVATE  */
    THIS = 293,                    /* THIS  */
    BREAK = 294,                   /* BREAK  */
    DOUBLE = 295,                  /* DOUBLE  */
    THROW = 296,                   /* THROW  */
    BYTE = 297,                    /* BYTE  */
    ELSE = 298,                    /* ELSE  */
    PUBLIC = 299,                  /* PUBLIC  */
    RETURN = 300,                  /* RETURN  */
    INT = 301,                     /* INT  */
    SHORT = 302,                   /* SHORT  */
    CHAR = 303,                    /* CHAR  */
    FINAL = 304,                   /* FINAL  */
    STATIC = 305,                  /* STATIC  */
    VOID = 306,                    /* VOID  */
    CLASS = 307,                   /* CLASS  */
    LONG = 308,                    /* LONG  */
    FLOAT = 309,                   /* FLOAT  */
    WHILE = 310,                   /* WHILE  */
    _ = 311,                       /* _  */
    YIELD = 312,                   /* YIELD  */
    eof = 313,                     /* eof  */
    INC_OP = 314,                  /* INC_OP  */
    DEC_OP = 315                   /* DEC_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "parser.y++"
 
    char* str;
    treeNode* ptr;
    constants* num;
    int ind;

#line 131 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
