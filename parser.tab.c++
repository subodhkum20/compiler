/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y++"

    #include<iostream>
    #include<stdio.h>
    #include "ast.h"
    #include <fstream>
    using namespace std;
    extern char* yytext;
    extern int line;
    int yylex (void); /* type of yylex() */
    int yyerror(const char*);
    #define YYDEBUG 1
    #define YYERROR_VERBOSE

    FILE* dotfile;

#line 86 "parser.tab.c++"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H__INCLUDED
# define YY_YY_PARSER_TAB_H__INCLUDED
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
    YIELD = 355,
    EOF = 356
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

#line 246 "parser.tab.c++"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H__INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  234
/* YYNRULES -- Number of rules.  */
#define YYNRULES  543
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  968

#define YYUNDEFTOK  2
#define YYMAXUTOK   356


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,     2,     2,   124,   105,     2,
     114,   115,   122,   120,   108,   121,   102,   123,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   117,   110,
     106,   113,   107,   109,   116,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,   119,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,   118,   112,   125,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    43,    44,    45,    46,    47,    48,    57,
      66,    67,    71,    72,    80,    83,    89,    90,    91,    92,
      93,    97,    98,   101,   102,   103,   107,   111,   118,   127,
     139,   140,   144,   153,   159,   165,   174,   185,   186,   197,
     207,   208,   212,   221,   224,   233,   234,   244,   254,   263,
     264,   273,   276,   282,   292,   293,   299,   305,   315,   316,
     326,   327,   337,   338,   348,   349,   359,   360,   370,   371,
     382,   388,   397,   403,   409,   410,   419,   429,   441,   442,
     452,   461,   472,   485,   486,   495,   503,   510,   517,   524,
     537,   545,   549,   550,   559,   560,   570,   571,   581,   584,
     593,   596,   599,   605,   620,   621,   627,   628,   634,   635,
     641,   642,   648,   649,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   670,   681,   682,   692,   701,   711,   712,
     722,   732,   742,   743,   752,   753,   754,   755,   759,   760,
     761,   762,   763,   767,   778,   779,   788,   789,   790,   791,
     792,   793,   794,   798,   799,   809,   818,   819,   827,   836,
     837,   841,   842,   846,   847,   851,   852,   853,   857,   858,
     862,   868,   877,   889,   890,   894,   898,   902,   908,   914,
     923,   933,   934,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   955,   962,   974,   975,   979,   980,   984,   997,
    1003,  1007,  1008,  1012,  1013,  1017,  1028,  1034,  1038,  1047,
    1048,  1058,  1065,  1069,  1081,  1082,  1090,  1091,  1095,  1103,
    1104,  1114,  1115,  1119,  1120,  1124,  1133,  1144,  1145,  1154,
    1155,  1156,  1160,  1173,  1184,  1185,  1189,  1194,  1200,  1212,
    1227,  1236,  1248,  1249,  1253,  1265,  1277,  1278,  1282,  1283,
    1292,  1293,  1302,  1313,  1314,  1324,  1325,  1329,  1335,  1339,
    1353,  1363,  1364,  1373,  1374,  1383,  1390,  1394,  1406,  1416,
    1417,  1426,  1427,  1431,  1444,  1445,  1449,  1463,  1464,  1468,
    1469,  1473,  1474,  1483,  1484,  1485,  1486,  1487,  1488,  1489,
    1490,  1494,  1503,  1513,  1523,  1524,  1533,  1534,  1535,  1536,
    1537,  1541,  1552,  1553,  1562,  1563,  1564,  1565,  1569,  1570,
    1580,  1581,  1589,  1590,  1591,  1592,  1593,  1594,  1595,  1599,
    1609,  1618,  1619,  1627,  1628,  1629,  1630,  1631,  1634,  1646,
    1652,  1658,  1662,  1668,  1673,  1674,  1682,  1683,  1684,  1687,
    1695,  1696,  1697,  1700,  1710,  1716,  1721,  1730,  1731,  1741,
    1750,  1751,  1752,  1755,  1762,  1769,  1778,  1784,  1789,  1798,
    1799,  1809,  1817,  1832,  1842,  1848,  1849,  1853,  1854,  1858,
    1867,  1868,  1880,  1917,  1927,  1928,  2292,  2296,  2303,  2304,
    2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,  2315,  2316,
    2319,  2320,  2321,  2322,  2324,  2326,  2329,  2330,  2331,  2334,
    2341,  2344,  2345,  2348,  2349,  2352,  2353,  2356,  2357,  2358,
    2361,  2362,  2365,  2366,  2367,  2368,  2369,  2370,  2371,  2372,
    2373,  2374,  2375,  2376,  2377,  2378,  2379,  2380,  2381,  2382,
    2383,  2384,  2385,  2386,  2389,  2390,  2393,  2394,  2395,  2396,
    2397,  2398,  2399,  2400,  2401,  2402,  2403,  2404,  2405,  2408,
    2409,  2410,  2411,  2412,  2413,  2416,  2417,  2420,  2423,  2424,
    2427,  2430,  2432,  2435,  2436,  2437,  2440,  2444,  2445,  2448,
    2449,  2452,  2453,  2456,  2459,  2460,  2461,  2464,  2464,  2464,
    2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2464,  2467,
    2468,  2469,  2472,  2473,  2476,  2477,  2480,  2481,  2484,  2485,
    2488,  2489,  2492,  2493,  2494,  2497,  2498,  2499,  2500,  2501,
    2502,  2505,  2506,  2509,  2510,  2511,  2512,  2515,  2516,  2517,
    2520,  2521,  2522,  2523,  2526,  2527,  2528,  2529,  2530,  2533,
    2536,  2539,  2540,  2541,  2542,  2545,  2546,  2547,  2548,  2551,
    2554,  2557,  2558,  2559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "METHOD_REFERENCE",
  "ELLIPSIS", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "UNSIGNED_RIGHT", "UNSIGNED_RIGHT_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "integerLiteral", "stringLiteral", "nullLiteral", "characterLiteral",
  "textBlock", "booleanLiteral", "FloatingPointLiteral", "Identifier",
  "ABSTRACT", "CONTINUE", "FOR", "NEW", "ASSERT", "DEFAULT", "IF",
  "PACKAGE", "SYNCHRONIZED", "BOOLEAN", "GOTO", "PRIVATE", "THIS", "BREAK",
  "DOUBLE", "IMPLEMENTS", "PROTECTED", "THROW", "BYTE", "ELSE", "IMPORT",
  "PUBLIC", "THROWS", "CASE", "ENUM", "INSTANCEOF", "RETURN", "TRANSIENT",
  "CATCH", "EXTENDS", "INT", "SHORT", "TRY", "CHAR", "FINAL", "INTERFACE",
  "STATIC", "VOID", "CLASS", "FINALLY", "LONG", "STRICTFP", "VOLATILE",
  "CONST", "FLOAT", "NATIVE", "SUPER", "WHILE", "_", "EXPORTS", "OPENS",
  "REQUIRES", "USES", "MODULE", "PERMITS", "SEALED", "VAR", "NON_SEALED",
  "PROVIDES", "TO", "WITH", "OPEN", "RECORD", "TRANSITIVE", "YIELD", "EOF",
  "'.'", "'['", "']'", "'&'", "'<'", "'>'", "','", "'?'", "';'", "'{'",
  "'}'", "'='", "'('", "')'", "'@'", "':'", "'|'", "'^'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'~'", "'!'", "$accept", "Literal", "PrimitiveType",
  "PrimitiveType2", "Annotations", "NumericType", "IntegralType",
  "FloatingPointType", "ReferenceType", "ClassOrInterfaceType",
  "ClassType", "ClassType2", "TypeVariable", "ArrayType", "Dims", "Dims2",
  "TypeParameter", "TypeParameter2", "TypeBound", "TypeBound2",
  "AdditionalBounds", "TypeArguments", "TypeArgumentList",
  "TypeArgumentList2", "TypeArgument", "Wildcard", "Wildcard2",
  "WildcardBounds", "ModuleName", "PackageName", "TypeName",
  "ExpressionName", "PackageOrTypeName", "AmbiguousName",
  "CompilationUnit", "OrdinaryCompilationUnit",
  "TopLevelClassOrInterfaceDeclarations",
  "TopLevelClassOrInterfaceDeclaration", "PackageDeclaration",
  "Identifiers", "ModularCompilationUnit", "ModuleDeclaration2",
  "ModuleDirectives", "ModuleDirective", "ModuleDirective2",
  "RequiresModifiers", "ModuleNames", "TypeNames", "RequiresModifier",
  "ClassDeclaration", "NormalClassDeclaration", "TypeParametersy",
  "ClassExtendsy", "ClassImplementsy", "ClassPermitsy", "ClassModifiers",
  "ClassModifier", "TypeParameters", "TypeParameterList", "ClassExtends",
  "ClassImplements", "InterfaceTypeList", "ClassPermits", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "FieldModifiers",
  "FieldModifier", "VariableDeclaratorList", "VariableDeclarator",
  "VariableDeclaratory", "VariableDeclaratorId", "VariableInitializer",
  "UnannType", "UnannPrimitiveType", "UnannReferenceType",
  "UnannClassOrInterfaceType", "UnannClassType", "TypeArgumentsy",
  "UnannInterfaceType", "UnannTypeVariable", "UnannArrayType",
  "MethodDeclaration", "MethodModifiers", "MethodModifier", "MethodHeader",
  "Throwsy", "Result", "MethodDeclarator", "ReceiverParametery",
  "FormalParameterListy", "Dimsy", "ReceiverParameter", "Identifiery",
  "FormalParameterList", "FormalParameterList2", "FormalParameter",
  "VariableArityParameter", "VariableModifiers", "VariableModifier",
  "Throws", "ExceptionTypeList", "ExceptionType", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorModifiers",
  "ConstructorModifier", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocationy", "BlockStatementsy",
  "ExplicitConstructorInvocation", "ExplicitConstructorInvocation2",
  "ArgumentListy", "EnumDeclaration", "EnumBody", "comay",
  "EnumConstantListy", "EnumConstantList", "EnumConstant",
  "ArgumentListyy", "ClassBodyy", "EnumBodyDeclarationsy",
  "RecordDeclaration", "RecordHeader", "RecordComponentListy",
  "RecordComponentList", "RecordComponent", "VariableArityRecordComponent",
  "RecordBody", "RecordBodyDeclarations", "RecordBodyDeclaration",
  "CompactConstructorDeclaration", "InterfaceDeclaration",
  "NormalInterfaceDeclaration", "InterfaceExtendsy", "InterfacePermitsy",
  "InterfaceModifiers", "InterfaceModifier", "InterfaceExtends",
  "InterfacePermits", "InterfaceBody", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration", "ConstantModifiers",
  "ConstantModifier", "InterfaceMethodDeclaration",
  "InterfaceMethodModifiers", "InterfaceMethodModifier",
  "AnnotationInterfaceDeclaration", "AnnotationInterfaceBody",
  "AnnotationInterfaceMemberDeclarations",
  "AnnotationInterfaceMemberDeclaration",
  "AnnotationInterfaceElementDeclaration",
  "AnnotationInterfaceElementDeclaration2",
  "AnnotationInterfaceElementDeclaration3",
  "AnnotationInterfaceElementModifiers",
  "AnnotationInterfaceElementModifier", "DefaultValue", "Annotation",
  "NormalAnnotation", "NormalAnnotation2", "ElementValuePairList",
  "ElementValuePairList2", "ElementValuePair", "ElementValue",
  "ElementValueArrayInitializer", "ElementValueArrayInitializer2",
  "ElementValueList", "ElementValueList2", "MarkerAnnotation",
  "SingleElementAnnotation", "ArrayInitializer", "ArrayInitializer2",
  "ArrayInitializer3", "VariableInitializerList",
  "VariableInitializerList2", "Block", "LocalVariableDeclaration",
  "LocalVariableType", "Pattern", "TypePattern", "Primary",
  "PrimaryNoNewArray", "ClassLiteral", "Brackets",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression",
  "ClassOrInterfaceTypeToInstantiate", "ClassOrInterfaceTypeToInstant",
  "TypeArgumentsOrDiamond", "FieldAccess", "ArrayAccess",
  "MethodInvocation", "ArgumentList", "MethodReference",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Expression",
  "LambdaExpression", "LambdaParameters", "LambdaParameterList",
  "LambdaParameter", "LambdaParameterType", "LambdaBody",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "InstanceofExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "UnaryExpression",
  "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,    46,    91,    93,    38,    60,    62,    44,    63,
      59,   123,   125,    61,    40,    41,    64,    58,   124,    94,
      43,    45,    42,    47,    37,   126,    33
};
# endif

#define YYPACT_NINF (-670)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-477)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2733,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,    48,
     268,    69,    -7,  -670,   561,   561,    -1,   399,  -670,     1,
     564,  -670,  -670,   210,  -670,  -670,  -670,   110,    -9,   175,
     267,   280,   245,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,   241,  -670,   -20,
     399,  -670,  -670,   327,   339,   354,  -670,  -670,   281,  1070,
     382,   341,   341,   431,  -670,   440,   379,  -670,   438,   390,
     390,  2405,  2405,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
     370,    90,   411,  -670,  -670,  -670,  -670,  -670,  -670,   419,
    -670,  -670,    35,   971,  2479,  -670,  2405,  2405,  2405,  2405,
    -670,   281,  1533,   411,  -670,  -670,   504,   331,   512,   -31,
     517,   430,   149,    26,   432,   473,  -670,   425,   436,   435,
    -670,    42,   443,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,    25,   540,   441,   447,   470,   415,   123,  -670,
     394,   340,   414,  -670,  -670,  -670,  -670,   497,  -670,  -670,
    -670,  -670,   543,   474,   469,   341,   390,   552,    10,   481,
    -670,   281,   529,  -670,   489,   356,  -670,  -670,  1243,  1317,
    -670,    10,   281,  1969,   -12,  -670,   281,   491,   500,   503,
     507,   536,    13,   153,   508,  -670,   511,   308,    79,  1416,
     389,    34,   879,  1045,  1143,   501,  -670,   609,  -670,  -670,
    1211,  -670,  -670,  -670,  -670,  -670,   519,  -670,   509,  -670,
    -670,  -670,   521,   203,   281,  -670,   211,  -670,   586,    44,
     198,   524,   208,    21,  2479,   592,  -670,   594,  -670,  -670,
     235,   232,  2479,  2405,  2479,  2405,  2405,  2405,  2405,  2405,
    2405,  2405,  2405,   166,  2405,  2405,  2405,  2405,  2405,  2405,
    2405,  2405,  2405,  2405,  -670,  -670,   341,  -670,   483,   528,
     565,   531,   597,   538,   234,    88,  -670,   608,   537,    10,
     438,  -670,   403,   438,  -670,  -670,   532,  2479,   640,  -670,
    -670,   541,   545,  -670,   546,   539,   -31,   -31,   392,   539,
     -31,   616,   544,   548,    95,  -670,  -670,   411,   582,  -670,
    -670,   625,   547,   631,  -670,  1243,  -670,   555,  -670,  -670,
     556,  2405,    10,   554,  -670,  2479,  -670,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  2479,   567,
    -670,  -670,   602,  -670,   644,   647,  -670,   645,  -670,  -670,
     648,   572,  -670,    53,   652,   614,  -670,   654,   577,   148,
     657,  -670,   589,  -670,   585,  -670,  -670,   660,   587,   665,
    -670,   601,   540,   591,   441,   447,   470,   415,   123,   123,
     394,   394,  -670,  -670,  1251,   214,   296,  -670,  -670,  -670,
     394,   394,   340,   340,   340,   414,   414,  -670,  -670,  -670,
    -670,   675,   675,   -10,    48,    48,   599,   483,   483,   604,
     623,  -670,  2704,  -670,   509,    10,  -670,   680,   610,   611,
     658,   281,   617,   615,   637,  2043,   613,   621,  -670,   619,
    -670,  -670,     9,  -670,    10,  -670,  1490,  1144,  -670,  -670,
     630,  -670,   281,  -670,  -670,   633,  2479,  -670,  -670,  -670,
    -670,  -670,  1591,   629,  -670,  -670,   145,  -670,   301,  1346,
    -670,  -670,  -670,  -670,   -31,  -670,  -670,   509,  -670,   509,
    1665,   240,   246,   632,  -670,  -670,  1739,   636,  -670,  -670,
    1813,   638,  -670,  2479,   334,  -670,  -670,  -670,   635,  -670,
     -31,  -670,   346,  -670,  -670,   -31,  -670,   704,  -670,  -670,
     -18,   -18,  -670,  -670,   710,   -10,   646,   659,  -670,  -670,
     650,  -670,    48,   649,  -670,  1683,   688,  1757,  2117,  1831,
     692,   693,   696,  -670,  -670,  -670,  -670,  2043,   303,   656,
    2704,  -670,  2043,   205,  1905,   234,   655,  -670,   661,   611,
    -670,    10,  -670,  -670,   537,  -670,    48,   662,  -670,   105,
    -670,   621,  -670,  2566,  -670,    10,    10,  -670,  -670,    10,
     668,  -670,   669,  -670,   664,   678,  -670,  2479,  -670,   676,
    -670,   685,  1887,   341,  1424,   687,   689,  -670,  -670,  -670,
     690,  -670,  -670,  -670,  -670,   695,  -670,   755,   681,   769,
    1961,  -670,   698,  2035,  -670,   702,  2109,  -670,  -670,  -670,
    -670,    44,  -670,   281,  -670,  -670,   -31,  -670,   699,   705,
     710,   785,  -670,  -670,  -670,  -670,   147,  -670,  -670,    48,
    -670,   713,  2661,  -670,   704,  -670,  -670,  -670,  -670,  -670,
    -670,  -670,   788,  -670,  -670,  -670,  -670,  -670,  2479,   662,
    2614,   712,  -670,   790,   350,  -670,  -670,  -670,   713,  2614,
    -670,  -670,   817,  -670,   795,  -670,  1508,  2858,  -670,  2942,
    2816,  2765,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  2043,
     463,  -670,  1583,   219,  -670,  -670,   263,   307,   721,  2566,
    -670,  -670,  2900,  -670,  -670,  -670,  -670,  -670,  2183,  -670,
    -670,  -670,  -670,   662,  -670,  -670,   719,  -670,  -670,  -670,
     704,  -670,   145,   731,  -670,  -670,  2257,   722,  -670,   723,
    -670,  -670,   724,  -670,  -670,   725,   810,   813,  -670,  -670,
     704,  2183,  -670,   290,   814,  -670,   713,    48,  -670,  2962,
    -670,  2989,  3009,  3036,  3056,  -670,  -670,  -670,   741,  2661,
    -670,  -670,  1583,   256,  3083,   746,   743,   744,  -670,  -670,
    -670,  -670,  2614,   390,  -670,  -670,  -670,   750,   823,  -670,
     704,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   281,  -670,
     753,   829,  -670,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
     759,   838,   816,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
     837,  -670,   214,  -670,   -31,  -670,   763,  2331,  -670,  -670,
    -670,   509,   509,  -670,  -670,   710,   770,  -670,   772,   713,
    -670,  -670,   753,  -670,  -670,  -670,  -670,  -670,  -670,  -670,
    -670,   774,  -670,  -670,  -670,  -670,   775,   716,  -670,  -670,
    -670,   776,   816,  2508,  -670,   778,    10,   759,  -670,   281,
    -670,  2043,  -670,  -670,  -670,   779,  -670,  -670,   290,  -670,
    -670,  -670,  -670,     8,  -670,   829,   275,  -670,  2479,    96,
      20,  -670,  -670,    64,   275,   615,  -670,   799,  -670,   794,
     281,  -670,  -670,  1243,  -670,   168,  -670,   802,   816,  2043,
     298,   801,    21,   800,   811,  -670,   824,   232,   298,    10,
    -670,  2479,   871,  -670,  -670,  -670,   827,  -670,  -670,   903,
     826,  -670,   831,  -670,  2043,  -670,   657,   860,  2479,  2479,
    -670,   665,   861,   830,   799,   832,   909,  -670,   844,   901,
     -31,   214,  -670,   152,   836,   840,   841,   839,  -670,  -670,
     662,  -670,  -670,  -670,  -670,   831,  -670,  2479,   842,   847,
    2479,   912,  -670,   845,  -670,  -670,   846,   509,   849,   852,
     281,  -670,  -670,   851,  2479,   853,   927,   509,   281,   855,
     856,   662,   928,   509,   281,   858,   859,   931,   281,   863,
    2479,   864,   934,   281,   866,   868,   662,  -670
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      12,   117,   116,   115,   119,   118,   122,   120,   121,     0,
       0,     0,     0,    73,   112,   112,     0,   281,   100,     0,
     112,   101,   102,   114,   340,   341,   342,    62,   361,     0,
       0,     0,     0,    80,     1,    70,    75,   114,    72,    71,
     286,   285,   284,   287,   290,   288,   289,     0,   274,     0,
     281,   275,   283,     0,     0,     0,   113,    13,    12,     0,
       0,    78,    78,     0,    76,     0,     0,   282,   108,   104,
     104,     0,     0,     2,     6,     8,     5,     7,     4,     3,
      64,    12,   394,   382,    22,    16,    18,    17,    20,     0,
      19,    21,     0,     0,     0,   345,     0,     0,     0,     0,
     380,    12,     0,   394,    14,    15,     0,    23,    26,    24,
      25,     0,     0,   536,     0,    12,   343,     0,   347,     0,
     351,   535,   378,   381,   385,   396,   386,   387,   388,   389,
     379,   350,   489,   492,   494,   496,   498,   500,   502,   510,
     505,   513,   517,   520,   524,   525,   528,   531,   537,   538,
     534,    63,     0,     0,     0,    78,   104,     0,     0,     0,
     109,    12,   106,   105,     0,    64,   529,   530,     0,     0,
      60,    12,    12,     0,    12,    26,    12,     0,   402,     0,
       0,     0,     0,     0,     0,   355,   359,     0,    64,     0,
      12,    45,   536,   386,   387,     0,   458,     0,   459,   472,
       0,   471,   526,   527,   532,   533,     0,    33,    30,    11,
       9,    10,     0,     0,    12,    34,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,   344,     0,   346,   362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   539,   540,    78,    77,    83,     0,
     277,     0,     0,     0,   128,   248,   244,     0,   124,     0,
     108,   107,    12,   108,   349,   413,     0,   434,     0,    51,
      25,     0,    49,    52,     0,     0,   450,   455,    30,     0,
     451,     0,     0,     0,    12,   405,   401,   394,     0,   393,
     443,     0,   408,     0,   354,     0,   358,     0,   357,   353,
       0,     0,     0,     0,   384,   372,   478,   479,   480,   481,
     482,   483,   484,   486,   485,   487,   488,   477,     0,     0,
      27,    31,     0,   441,     0,     0,   447,     0,   448,    61,
       0,     0,   383,     0,     0,     0,   437,     0,     0,    12,
       0,   397,     0,    65,     0,   348,   439,     0,   407,     0,
     398,     0,   493,     0,   495,   497,   499,   501,   503,   504,
     508,   509,   217,   511,     0,   214,    12,   377,   512,   376,
     506,   507,   514,   515,   516,   518,   519,   521,   522,   523,
      79,     0,     0,    92,     0,     0,     0,    83,    83,   128,
     279,   278,   302,   319,    30,     0,   127,     0,   246,   250,
      40,    12,     0,   126,   110,     0,     0,   263,   266,     0,
     412,   435,    54,    47,    12,    48,     0,   366,   453,   449,
       0,   456,    12,   454,   452,   403,     0,   400,   406,   395,
     392,   442,     0,     0,   360,   356,   214,   541,    45,     0,
     470,   469,   460,   473,    37,   391,   440,    30,   446,    30,
       0,     0,     0,     0,   390,   436,     0,     0,   410,   438,
       0,     0,   411,     0,   173,   164,   375,   163,     0,   374,
     161,   162,   165,   168,   169,   166,   167,     0,   215,   216,
       0,     0,    99,    98,     0,    92,     0,     0,    82,    84,
       0,   291,     0,     0,   280,   117,   116,   115,   119,   118,
     122,   120,   121,   327,   325,   326,   324,     0,   302,     0,
     302,   323,     0,   334,   114,   128,   253,   247,   258,   250,
     249,     0,    39,    41,   124,   123,     0,     0,   111,    12,
     260,   263,   262,   144,   259,    12,    12,    53,    55,    12,
       0,   365,   370,   160,     0,   367,   159,     0,   404,     0,
     429,     0,     0,    78,     0,     0,   463,    46,   543,   542,
       0,    36,    29,    28,   417,     0,   445,     0,   409,     0,
       0,   421,     0,     0,   425,     0,     0,   491,   490,   174,
     170,     0,   177,    12,   178,   179,   203,   373,   153,   156,
       0,     0,    91,    86,    87,    58,     0,    93,    88,     0,
      81,    96,   302,   276,     0,   305,   307,   306,   303,   304,
     320,   322,     0,   338,   337,   335,   336,   129,   242,   255,
     144,     0,   251,     0,    45,    43,    42,   125,    96,   144,
     103,   265,     0,   264,   186,   189,   116,   115,   151,   119,
     118,   191,   152,   190,   142,   140,   271,   134,   138,     0,
     144,   139,     0,   181,   136,   137,     0,   227,     0,   144,
     272,   141,   114,   135,    56,    57,    50,   457,     0,   369,
     363,   368,   364,     0,   428,   427,     0,   465,   468,   467,
       0,   461,   214,     0,   416,   444,     0,     0,   415,     0,
     420,   419,     0,   423,   424,     0,     0,     0,   204,   158,
       0,     0,   155,    94,     0,    85,    96,     0,   292,   117,
     318,   116,   115,   118,   122,   300,   298,   299,     0,   302,
     296,   297,     0,   310,   114,     0,     0,     0,   243,   256,
     252,   257,   144,   104,   245,    44,   130,     0,     0,   225,
       0,   148,   147,   150,   149,   145,   146,   197,    12,   196,
     372,     0,   186,   185,   184,   188,   187,   191,   182,   183,
       0,     0,   194,   231,   230,   228,   229,   268,   270,   371,
       0,   426,   214,   464,    37,   433,     0,     0,   414,   418,
     422,   173,   173,   154,   157,     0,     0,    59,     0,    96,
     293,   295,   372,   316,   315,   314,   317,   312,   311,   313,
     301,     0,   254,   133,   131,   267,     0,     0,   224,   180,
     223,     0,   194,   234,   273,     0,     0,     0,   195,    12,
     466,     0,    38,   431,   432,     0,   171,   172,    94,    90,
      89,    97,   309,    12,   143,     0,    12,   192,     0,     0,
       0,   236,   235,     0,    12,   221,   222,   219,   226,     0,
      12,   430,    95,     0,   331,     0,   328,     0,   194,     0,
     214,     0,   173,     0,     0,   237,     0,   173,   214,     0,
     218,     0,     0,   339,   333,   329,     0,   330,   193,   207,
       0,   202,   209,   212,     0,   199,   174,     0,   242,   242,
     233,   174,     0,     0,   219,     0,     0,   332,     0,     0,
     203,   214,   208,    12,     0,     0,     0,     0,   232,   220,
       0,   213,   206,   205,   198,   209,   211,   242,     0,     0,
     242,     0,   210,     0,   240,   241,     0,     0,     0,     0,
      12,   238,   239,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,    12,     0,     0,     0,    12,     0,
       0,     0,     0,    12,     0,     0,     0,   399
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -670,  -670,   -37,  -670,     0,   -95,  -670,  -670,   -68,   -78,
     -38,    29,  -518,  -108,  -101,   194,   573,  -670,  -670,  -670,
    -414,   -66,   437,  -670,   566,  -670,  -670,  -670,  -573,  -304,
      15,   682,  -670,  -670,  -670,  -670,   542,  -670,  -670,   -33,
    -670,  -670,   176,  -670,   494,   493,   151,  -602,  -670,     2,
    -670,    -3,  -670,   -45,  -670,   974,  -670,  -459,   457,  -670,
    -670,  -366,  -670,  -588,  -580,  -506,  -670,  -670,   335,  -670,
    -572,  -670,  -670,  -669,   285,  -322,  -670,  -670,  -670,  -670,
    -584,  -670,  -670,  -670,  -670,   344,  -670,   266,  -483,   191,
     164,   157,   134,   103,  -670,  -670,  -670,    92,   107,   238,
    -229,  -670,  -670,   118,   144,   222,  -670,  -670,  -490,  -670,
    -670,   199,  -670,  -670,  -670,  -670,  -528,  -670,  -670,  -670,
    -670,   498,  -670,  -670,  -670,  -670,  -670,  -670,  -670,   487,
    -670,  -670,  -670,   360,  -670,  -670,    -8,  -670,  -670,  -670,
     980,  -670,  -670,  -670,  -670,   302,  -670,  -581,   514,  -670,
    -670,   300,  -670,  -670,  -670,   515,  -670,  -670,  -670,  -670,
     513,  -670,   169,     5,  -670,  -670,   812,  -670,  -670,   -55,
    -670,  -670,   736,  -670,  -670,  -670,   202,  -670,  -670,   364,
    -670,  -303,  -670,  -670,  -670,  -670,   225,  -670,  -670,   -73,
    -670,  -213,  -126,  -670,  -670,   -83,   116,  -670,  -141,  -670,
    -670,  -142,  -670,     3,  -233,  -670,   353,  -670,  -670,  -670,
    -670,  -670,  -670,  -670,   -58,  -670,   819,   815,   818,   820,
     821,   359,  -670,   223,   315,   352,    71,  -670,  -670,   600,
    -670,  -670,  -670,  -670
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   100,   101,   210,   102,   103,   104,   105,   106,   107,
     108,   330,   109,   110,   207,   571,   268,   532,   533,   636,
     313,   331,   281,   425,   282,   283,   547,   548,   606,   111,
     112,   192,    29,   114,    11,    12,    13,    14,    15,   153,
      16,    33,   396,   397,   603,   494,   796,   718,   495,   655,
      18,   771,   270,   159,   537,    19,    20,   163,   412,   271,
     160,   406,   538,   640,   741,   742,   657,   658,   659,   660,
     597,   598,   712,   599,   552,   759,   480,   481,   482,   483,
     590,   484,   485,   486,   661,   662,   663,   760,   827,   761,
     822,   870,   890,   709,   871,   909,   891,   912,   892,   893,
     894,   375,   828,   880,   857,   819,   664,   665,   743,   667,
     772,   824,   851,   876,   852,   875,   737,    21,   266,   528,
     408,   530,   409,   629,   740,   631,    22,   273,   416,   542,
     417,   418,   544,   668,   669,   670,   671,    48,   400,   503,
      49,    50,   401,   504,   613,   728,   729,   516,   517,   518,
     731,   732,   733,    51,   403,   519,   520,   521,   866,   885,
     522,   523,   867,    58,    24,   116,   117,   228,   118,   186,
     120,   309,   187,   306,    25,    26,   553,   554,   682,   555,
     679,   673,   377,   487,   378,   379,   121,   122,   123,   180,
     124,   125,   177,   178,   296,   126,   127,   128,   738,   129,
     130,   286,   287,   277,   196,   197,   565,   566,   690,   452,
     198,   199,   200,   328,   201,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   131,    17,   174,   119,    23,   215,   211,   217,    47,
     351,   193,   450,   635,   374,   176,    17,    17,   360,    37,
      37,   782,    52,    57,    28,    37,   191,   713,   276,   154,
     212,   730,   290,   501,   567,   131,   746,   656,   222,   221,
     233,   739,   735,   175,   172,   170,   213,   182,   300,   863,
     292,    65,   479,   666,   230,    52,   348,   190,    57,   747,
     349,    53,   492,   280,   115,   461,   162,   164,   873,    34,
     478,   285,   -12,   289,   545,    54,   230,   600,   211,   339,
     263,   173,  -462,    27,   601,     9,   193,   490,   491,   493,
     214,   546,   602,   539,    35,   780,    66,   195,   115,    55,
      39,   206,   874,   279,     9,    59,   193,   206,   222,   206,
     131,   478,   295,   274,   798,    57,   301,   303,   864,   171,
     264,   191,   259,   -12,     9,   170,     9,   171,   223,   224,
     170,   241,   242,   175,   234,   280,   421,   183,   793,   312,
     641,   193,   166,   167,   231,   431,   488,   334,   730,   193,
     337,   193,   190,   260,   344,   462,   347,   350,   262,   627,
       9,   267,   813,   656,   357,   359,   877,   202,   203,   204,
     205,   278,   284,   115,   284,   373,   291,   775,   816,   666,
     563,   -60,   -62,   211,   243,   429,   280,   596,   302,   434,
     206,   263,   195,   169,   193,   614,   171,   841,   872,   224,
     622,   170,   438,   758,     9,   175,     9,   836,   837,   863,
     194,     9,   -66,   478,   335,   372,   568,   564,   478,   340,
     745,     9,   838,   390,   439,   414,   279,   352,   419,   244,
     245,   413,   193,   341,   263,   361,   372,   363,   333,   850,
     587,   623,   689,   346,   926,   193,   342,   131,   376,   714,
     336,   220,   179,   -12,   171,   762,   175,   715,  -214,   171,
     478,     9,   624,   645,     9,   407,   763,   358,     9,   262,
     356,   349,   415,   758,   448,   576,   764,    60,   884,   477,
     343,   578,     9,   176,   372,   194,   206,   430,   897,   765,
     206,   766,   803,   902,   278,   559,   767,   720,   770,   -12,
     653,   561,    61,   804,   171,   194,   558,   -12,   856,   171,
     115,    30,   262,   805,   171,    62,   280,   171,   451,   575,
     477,     9,   387,   388,   389,   582,     9,   263,   806,   585,
       9,   453,   931,   807,    63,     9,   -26,   750,   171,   847,
     194,   171,   405,   193,   193,  -200,   171,   749,   194,   291,
     194,    64,   171,   193,   773,   478,   279,    31,   478,   193,
     615,   856,    68,   952,   774,    32,  -216,   525,   372,   161,
     915,   916,     9,   616,    69,   617,    57,   193,   967,   592,
     489,   594,   447,   193,   595,   888,   175,   193,  -216,    70,
    -200,     9,   714,   194,   515,   577,   579,     9,   795,   933,
     246,   247,   936,   -26,   514,   262,   312,   524,   589,   496,
     497,   267,     9,  -201,     9,   588,   307,   151,   248,     9,
     308,   686,   477,     9,   278,   239,   240,   477,   478,   550,
     556,   194,   291,   214,   -12,    40,   -60,   280,   280,   699,
     171,   280,   702,   152,   194,   705,    41,     9,   593,   -12,
     157,   489,   214,   634,   570,   312,    42,   820,   -60,   -62,
     249,   250,     9,   564,   370,   371,   155,   380,   381,   477,
     169,    43,   -60,   -62,   193,   156,    44,   674,   675,   193,
     206,   279,   206,   168,   169,   206,   572,   428,   573,   158,
      45,   433,    46,   175,   432,   708,   161,   193,   171,   820,
     193,   254,   255,   193,   311,     9,  -403,   175,   175,   860,
     751,   175,   515,   478,   179,     9,   213,   611,  -261,     9,
     752,   181,   514,   619,   216,   524,   648,   478,   626,   218,
     687,   633,   219,   753,   225,   754,   251,   252,   253,   642,
     226,   652,   194,   194,   227,   193,   232,   889,   672,   278,
     229,   638,   194,   831,   235,   786,    36,    38,   194,   236,
     550,   382,   383,   384,   477,   478,   237,   477,   391,   392,
     393,   394,   913,   499,   500,   238,   194,   395,   256,     9,
     258,  -352,   194,  -352,   257,  -352,   194,   261,  -352,     9,
     478,   706,   265,   707,   269,   193,   206,     1,   368,   369,
       1,   385,   386,   272,   727,   293,   294,   297,     2,   298,
     299,     2,   315,   193,   726,   171,   314,   734,     3,   305,
     304,     3,   329,   332,   716,   338,   345,   353,   193,   354,
     399,     4,   404,     5,     4,   672,     5,   477,     6,   398,
     214,     6,   402,   410,   672,   411,   835,   420,   423,   426,
     427,   435,     7,   424,     8,     7,   440,     8,   436,   351,
     441,   442,   -74,   437,   360,   756,   443,   445,   769,   449,
     446,   454,   776,   194,   672,   208,   455,     9,   194,   456,
       9,   556,   457,   459,   458,   209,   460,   463,   464,   465,
      84,   466,   467,   468,    85,   469,   194,   489,   168,   194,
     471,   470,   194,   859,   193,   472,    86,    87,   473,    88,
     170,   498,   405,   502,   556,   526,    90,   -26,   527,   529,
      91,   727,   477,   531,   535,   589,   589,   536,   540,   541,
     543,   726,   799,   557,   734,   432,   477,   591,   809,   596,
     905,   113,   865,   562,   194,   605,   580,   672,   263,   422,
     583,   474,   586,   113,   113,   609,   608,   589,   817,  -285,
     612,   475,   610,  -290,  -288,   193,    84,  -289,   620,   628,
      85,   630,   677,   639,   477,   113,   680,   678,   113,   113,
     113,   113,    86,    87,   570,    88,   681,   489,   855,   757,
     695,   683,    90,   693,   194,   696,    91,   692,   193,   477,
     684,   263,   691,   945,   697,   131,   896,   710,   883,   708,
     694,   901,   194,   700,   943,   193,   193,   703,   711,   961,
     339,   717,   949,   736,   744,   208,   633,   194,   955,   291,
     748,  -117,   959,   777,   781,   784,   787,   964,   788,   789,
     790,   855,  -117,   206,   193,   791,   869,   193,   792,   797,
     113,   195,  -117,   800,   869,  -117,   810,   811,   815,   812,
     882,   193,   814,   818,   821,  -117,  -286,  -117,   115,  -117,
     823,   940,  -117,   825,   826,   489,   829,   193,   833,   633,
     839,   948,   840,   489,   906,   844,  -117,   954,  -117,   843,
     846,   222,   854,  -117,   861,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,   194,  -474,  -474,  -474,   879,   881,   895,
     206,  -117,   887,   882,   898,   113,   489,   113,   113,   113,
     113,   113,   113,   113,   113,   899,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   900,   907,   908,   911,
     291,   910,   914,   917,   921,   918,   922,   920,   291,   923,
     927,   937,   934,   930,   291,   928,   929,   935,   291,   941,
     938,   939,   942,   291,   194,   944,   947,   953,   946,   950,
     958,   951,   956,   963,   957,    71,    72,   960,   832,   962,
     965,   223,   224,   966,   534,   604,   676,   113,   607,   862,
     549,   637,  -474,   113,    56,   755,   794,   194,   802,    73,
      74,    75,    76,    77,    78,    79,   165,   768,   845,   868,
      81,   878,   903,   924,   194,   194,    82,   932,   925,    83,
     830,    84,   919,   904,   842,    85,   858,   632,   643,   778,
      67,   801,   618,   808,   886,   621,   625,    86,    87,   355,
      88,   444,   779,   194,    89,   783,   194,    90,   853,   569,
     364,    91,   362,    92,   365,     0,     0,   366,     0,   367,
     194,  -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,     0,
    -475,  -475,  -475,     0,    71,    72,   194,     0,     0,   184,
       0,     0,    93,   185,     0,    94,     0,     9,     0,     0,
       0,    96,    97,     0,     0,     0,    98,    99,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,    81,
       0,     0,     0,     0,     0,    82,     0,     0,    83,     0,
      84,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,    86,    87,     0,    88,
       0,     0,     0,    89,     0,     0,    90,     0,    71,    72,
      91,     0,    92,     0,     0,   113,     0,     0,  -475,  -476,
    -476,  -476,  -476,  -476,  -476,  -476,  -476,     0,  -476,  -476,
    -476,     0,    73,    74,    75,    76,    77,    78,    79,   188,
       0,    93,     0,    81,    94,    95,     9,     0,     0,    82,
      96,    97,    83,     0,    84,    98,    99,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,    88,     0,     0,     0,    89,     0,     0,
      90,     0,     0,     0,    91,     0,    92,   316,   317,   318,
     319,   320,   321,   322,   323,     0,   324,   325,   326,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,     0,
       0,     0,   551,     0,     0,   427,  -476,     0,   189,     0,
       9,     0,     0,     0,    96,    97,     0,     0,     0,    98,
      99,    73,    74,    75,    76,    77,    78,    79,   165,     0,
       0,     0,    81,     0,     0,     0,   474,     0,    82,     0,
       0,    83,     0,    84,     0,     0,   475,    85,     0,     0,
       0,    84,     0,     0,     0,    85,     0,     0,     0,    86,
      87,     0,    88,     0,     0,     0,    89,    86,    87,    90,
      88,    71,    72,    91,   327,    92,     0,    90,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,    73,    74,    75,    76,    77,
      78,    79,   188,     0,    93,     0,    81,    94,     0,     9,
       0,     0,    82,    96,    97,    83,     0,    84,    98,    99,
       0,    85,     0,     0,    73,    74,    75,    76,    77,    78,
      79,   188,     0,    86,    87,    81,    88,     0,     0,     0,
      89,    82,     0,    90,    83,     0,    84,    91,     0,    92,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,    88,     0,     0,     0,    89,
      71,    72,    90,     0,     0,     0,    91,     0,    92,     0,
       0,   189,   275,     9,     0,     0,     0,    96,    97,     0,
       0,     0,    98,    99,    73,    74,    75,    76,    77,    78,
      79,   188,     0,     0,     0,    81,     0,     0,     0,   474,
     189,    82,     9,     0,    83,     0,    84,     0,     0,   475,
      85,    98,    99,     0,    84,     0,     0,     0,    85,     0,
       0,     0,    86,    87,     0,    88,     0,     0,     0,    89,
      86,    87,    90,    88,    71,    72,    91,     0,    92,     0,
      90,     0,     0,     0,    91,   849,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   688,     0,    73,    74,
      75,    76,    77,    78,    79,   188,     0,     0,     0,    81,
     189,   310,     9,     0,     0,    82,    96,    97,    83,     0,
      84,    98,    99,  -148,    85,   113,     0,     0,     0,     0,
       0,     0,  -185,  -148,     0,     0,    86,    87,  -148,    88,
       0,     0,  -148,    89,     0,     0,    90,     0,   208,     0,
      91,  -148,    92,     0,  -148,  -148,     0,  -148,   209,  -285,
       0,  -185,     0,    84,  -148,     0,  -148,    85,  -148,  -185,
       0,     0,     0,     0,   454,    71,    72,     0,     0,    86,
      87,     0,    88,     0,   189,     0,     9,     0,     0,    90,
      96,    97,     0,    91,  -185,    98,    99,     0,   474,    73,
      74,    75,    76,    77,    78,    79,   188,     0,   475,     0,
      81,     0,     0,    84,     0,     0,    82,    85,     0,    83,
       0,    84,     0,     0,     0,    85,     0,     0,     0,    86,
      87,     0,    88,     0,     0,     0,   757,    86,    87,    90,
      88,     0,     0,    91,    89,     0,     0,    90,     0,    71,
      72,    91,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   161,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
     188,     0,     0,     0,    81,   189,   560,     9,     0,     0,
      82,    96,    97,    83,     0,    84,    98,    99,  -338,    85,
       0,     0,     0,     0,     0,     0,     0,     0,  -338,     0,
       0,    86,    87,  -338,    88,     0,     0,  -338,    89,     0,
       0,    90,     0,    71,    72,    91,     0,    92,     0,  -338,
    -338,     0,  -338,     0,  -286,     0,     0,     0,     0,  -338,
       0,     0,     0,  -338,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,   188,     0,     0,     0,    81,   189,
     574,     9,     0,     0,    82,    96,    97,    83,     0,    84,
      98,    99,  -305,    85,     0,     0,     0,     0,     0,     0,
       0,     0,  -305,     0,     0,    86,    87,  -305,    88,     0,
       0,  -305,    89,     0,     0,    90,     0,    71,    72,    91,
       0,    92,     0,  -305,  -305,     0,  -305,     0,  -284,     0,
       0,     0,     0,  -305,     0,     0,     0,  -305,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,   188,     0,
       0,     0,    81,   189,   581,     9,     0,     0,    82,    96,
      97,    83,     0,    84,    98,    99,  -306,    85,     0,     0,
       0,     0,     0,     0,     0,     0,  -306,     0,     0,    86,
      87,  -306,    88,     0,     0,  -306,    89,     0,     0,    90,
       0,    71,    72,    91,     0,    92,     0,  -306,  -306,     0,
    -306,     0,  -287,     0,     0,     0,     0,  -306,     0,     0,
       0,  -306,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,   188,     0,     0,     0,    81,   189,   584,     9,
       0,     0,    82,    96,    97,    83,     0,    84,    98,    99,
    -304,    85,     0,     0,     0,     0,     0,     0,     0,     0,
    -304,     0,     0,    86,    87,  -304,    88,     0,     0,  -304,
      89,     0,     0,    90,     0,    71,    72,    91,     0,    92,
       0,  -304,  -304,     0,  -304,     0,  -283,     0,     0,     0,
       0,  -304,     0,     0,     0,  -304,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,   188,     0,     0,     0,
      81,   189,   685,     9,   288,     0,    82,    96,    97,    83,
       0,    84,    98,    99,   209,    85,     0,     0,     0,    84,
       0,     0,     0,    85,     0,     0,     0,    86,    87,     0,
      88,     0,     0,     0,    89,    86,    87,    90,    88,    71,
      72,    91,     0,    92,     0,    90,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
     188,     0,     0,     0,    81,   189,   698,     9,   474,     0,
      82,    96,    97,    83,     0,    84,    98,    99,   475,    85,
       0,     0,     0,    84,     0,     0,     0,    85,     0,     0,
       0,    86,    87,     0,    88,     0,     0,     0,    89,    86,
      87,    90,    88,    71,    72,    91,     0,    92,     0,    90,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,   188,     0,     0,     0,    81,   189,
     701,     9,  -307,     0,    82,    96,    97,    83,     0,    84,
      98,    99,  -307,    85,     0,     0,     0,  -307,     0,     0,
       0,  -307,     0,     0,     0,    86,    87,     0,    88,     0,
       0,     0,    89,  -307,  -307,    90,  -307,    71,    72,    91,
       0,    92,     0,  -307,     0,     0,     0,  -307,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,   188,     0,
       0,     0,    81,   189,   704,     9,     0,     0,    82,    96,
      97,    83,     0,    84,    98,    99,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,    88,     0,     0,     0,    89,     0,     0,    90,
       0,    71,    72,    91,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,   188,     0,   427,     0,    81,   189,     0,     9,
       0,     0,    82,    96,    97,    83,     0,    84,    98,    99,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,    88,     0,     0,     0,
      89,     0,     0,    90,     0,    71,    72,    91,     0,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,   188,     0,     0,     0,
      81,   189,   785,     9,     0,     0,    82,    96,    97,    83,
       0,    84,    98,    99,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
      88,     0,     0,     0,    89,     0,     0,    90,     0,    71,
      72,    91,     0,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
     165,     0,     0,     0,    81,   189,   834,     9,     0,     0,
      82,    96,    97,    83,     0,    84,    98,    99,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,    88,     0,     0,     0,    89,     0,
       0,    90,     0,    71,    72,    91,     0,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,   188,     0,     0,     0,    81,    94,
       0,     9,     0,     0,    82,    96,    97,    83,     0,    84,
      98,    99,     0,    85,     0,     0,    73,    74,    75,    76,
      77,    78,    79,   165,     0,    86,    87,    81,    88,     0,
       0,     0,    89,    82,     0,    90,    83,     0,    84,    91,
       0,    92,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,    88,     0,     0,
       0,    89,     0,     0,    90,     0,     0,     0,    91,     0,
      92,     0,     0,   189,     0,     9,     0,     0,     0,    96,
      97,     0,   644,     0,    98,    99,     0,     0,     0,     0,
     645,     0,     0,   646,   171,     0,     0,     0,     0,     0,
       0,     0,   848,   647,     9,     0,  -112,     0,     0,   648,
       0,     0,     0,     0,     0,     0,   649,  -281,   650,  -181,
    -112,     0,     0,   651,   652,     0,     0,   653,     0,     0,
     644,     0,     0,     0,     0,     0,     0,   511,   645,   512,
       0,   646,     0,     0,  -112,     0,     0,     0,     0,     0,
       0,   647,  -181,     0,  -112,     0,   654,   648,  -269,     0,
       0,     0,     9,     0,   649,  -281,   650,  -181,  -112,     0,
       0,   651,   652,     0,     0,   653,     0,   719,     0,     0,
       0,     0,   720,     0,     0,   511,     0,   512,   721,     0,
       0,     0,  -112,     0,     0,     0,     0,     0,   722,     0,
    -181,  -112,     0,     0,   654,     0,  -132,     0,     0,     0,
       9,   508,  -281,   723,  -308,  -112,     0,     0,   724,     0,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   506,   511,     0,   512,     0,     0,     0,     0,  -112,
       0,   507,     0,     0,  -112,     0,     0,  -308,     0,     1,
       0,   725,     0,  -294,   508,  -281,   509,     9,  -112,     0,
       2,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,  -112,     0,   511,     0,   512,     0,     0,
       0,  -122,  -112,     4,     0,     5,     0,  -112,     0,     0,
       6,     0,  -122,     0,   513,     0,  -321,     0,     0,     0,
       9,     0,  -122,     0,     7,  -122,     8,     0,     0,     0,
       0,  -112,     0,     0,   -74,  -122,  -290,  -122,     0,  -122,
       0,     0,  -122,     0,     0,     0,     0,     0,     0,     9,
       0,  -149,     0,     0,     0,     0,  -122,     0,  -122,     0,
    -187,  -149,     0,  -122,     0,     0,  -149,     0,     0,     0,
    -149,     0,     0,     0,     0,     0,     0,     0,     0,  -149,
       0,  -122,  -149,  -149,     0,  -149,     0,  -287,     0,  -187,
       0,     0,  -149,  -147,  -149,     0,  -149,  -187,     0,     0,
       0,     0,  -184,  -147,     0,     0,     0,     0,  -147,     0,
       0,     0,  -147,     0,     0,     0,     0,     0,     0,     0,
       0,  -147,  -187,     0,  -147,  -147,  -372,  -147,  -372,  -284,
       0,  -184,     0,     0,  -147,  -146,  -147,     0,  -147,  -184,
       0,     0,     0,     0,  -183,  -146,     0,     0,     0,     0,
    -146,     0,     0,     0,  -146,     0,     0,     0,     0,     0,
       0,     0,     0,  -146,  -184,     0,  -146,  -146,     0,  -146,
       0,  -283,     0,  -183,     0,     0,  -146,  -150,  -146,     0,
    -146,  -183,     0,     0,     0,     0,  -188,  -150,     0,     0,
       0,     0,  -150,     0,     0,     0,  -150,  -316,     0,     0,
       0,     0,     0,  -316,     0,  -150,  -183,  -316,  -150,  -150,
       0,  -150,  -316,     0,     0,  -188,  -316,     0,  -150,     0,
    -150,     0,  -150,  -188,  -315,     0,     0,     0,  -316,  -316,
    -315,  -316,     0,  -286,  -315,  -316,     0,     0,  -316,  -315,
       0,     0,  -316,  -315,  -305,     0,     0,     0,  -188,     0,
    -314,     0,     0,     0,  -305,  -315,  -315,     0,  -315,  -305,
    -285,     0,  -315,  -305,     0,  -315,     0,     0,  -316,  -315,
       0,  -306,     0,     0,     0,  -305,  -305,  -317,  -305,     0,
    -284,  -306,  -314,     0,     0,  -305,  -306,     0,     0,  -305,
    -306,  -312,     0,     0,     0,  -315,     0,  -312,     0,     0,
       0,  -312,  -306,  -306,     0,  -306,  -312,  -287,     0,  -317,
    -312,     0,  -306,     0,     0,  -314,  -306,     0,  -304,     0,
       0,     0,  -312,  -312,  -313,  -312,     0,  -290,  -304,  -312,
       0,     0,  -312,  -304,     0,     0,  -312,  -304,     0,     0,
       0,     0,  -317,     0,     0,     0,     0,     0,     0,  -304,
    -304,     0,  -304,     0,  -283,     0,  -313,     0,     0,  -304,
       0,     0,  -312,  -304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -313
};

static const yytype_int16 yycheck[] =
{
       0,    59,     0,    81,    59,     0,   107,   102,   109,    17,
     223,    94,   315,   531,   243,    81,    14,    15,   231,    14,
      15,   690,    17,    23,     9,    20,    94,   600,   169,    62,
     103,   612,   174,   399,   448,    93,   638,   543,    12,   112,
      15,   629,   614,    81,    81,    35,    12,    12,    35,    41,
     176,    71,   374,   543,    12,    50,    35,    94,    58,   639,
      39,    60,    72,   171,    59,    12,    69,    70,    48,     0,
     374,   172,   103,   174,    65,    74,    12,    95,   173,    35,
     158,    81,     3,    35,   102,   116,   169,   391,   392,    99,
     102,    82,   110,   415,   101,   683,   116,    94,    93,    98,
     101,   101,    82,   171,   116,   114,   189,   107,    12,   109,
     168,   415,   178,   168,   716,   115,   182,   183,   110,   106,
     158,   189,   155,    35,   116,    35,   116,   106,   102,   103,
      35,     8,     9,   171,   109,   243,   277,   102,   710,   105,
      35,   224,    71,    72,   102,   287,   375,   213,   729,   232,
     216,   234,   189,   156,   220,   102,   222,   223,   158,   525,
     116,   161,   742,   669,   230,   231,   102,    96,    97,    98,
      99,   171,   172,   168,   174,   243,   176,   667,   750,   669,
      35,   102,   103,   278,    61,   286,   294,    35,    35,   290,
     190,   269,   189,   114,   277,   517,   106,   799,   102,   103,
     522,    35,   107,   662,   116,   243,   116,   791,   792,    41,
      94,   116,   102,   517,   214,    70,   449,   446,   522,   219,
     634,   116,   795,   256,   297,   270,   294,   224,   273,   106,
     107,   269,   315,    35,   312,   232,    70,   234,    35,   823,
     473,    36,   564,    35,   913,   328,    48,   305,   243,   102,
      39,   102,   103,    43,   106,    36,   294,   110,    92,   106,
     564,   116,    57,    44,   116,   265,    47,    35,   116,   269,
      35,    39,   272,   732,   312,    35,    57,   102,   110,   374,
      82,    35,   116,   349,    70,   169,   286,   287,   872,    70,
     290,    72,    36,   877,   294,   436,    77,    41,    35,    89,
      81,   442,    35,    47,   106,   189,   432,    97,   826,   106,
     305,    43,   312,    57,   106,    35,   424,   106,   315,   460,
     415,   116,   251,   252,   253,   466,   116,   405,    72,   470,
     116,   328,   920,    77,    89,   116,   102,   659,   106,   822,
     224,   106,   108,   426,   427,    70,   106,   650,   232,   349,
     234,   110,   106,   436,    47,   659,   424,    89,   662,   442,
      57,   879,    35,   951,    57,    97,    70,   405,    70,   106,
     898,   899,   116,    70,    35,    72,   376,   460,   966,   480,
     375,   482,   311,   466,   485,   868,   424,   470,    92,    35,
     115,   116,   102,   277,   402,   461,   462,   116,   108,   927,
       6,     7,   930,   102,   402,   405,   105,   402,   474,   394,
     395,   411,   116,   115,   116,   473,   108,    35,    24,   116,
     112,   562,   517,   116,   424,    10,    11,   522,   732,   426,
     427,   315,   432,   102,   103,    36,   102,   545,   546,   580,
     106,   549,   583,   102,   328,   586,    47,   116,   102,   103,
      71,   446,   102,   531,   454,   105,    57,   760,   102,   103,
     120,   121,   116,   692,   241,   242,    35,   244,   245,   564,
     114,    72,   102,   103,   557,    35,    77,   545,   546,   562,
     480,   549,   482,   113,   114,   485,   457,   285,   459,    51,
      91,   289,    93,   531,   102,   596,   106,   580,   106,   802,
     583,     4,     5,   586,   115,   116,   114,   545,   546,   831,
      47,   549,   520,   817,   103,   116,    12,   502,   115,   116,
      57,   102,   520,   518,    12,   520,    63,   831,   523,    12,
     563,   531,   102,    70,   102,    72,   122,   123,   124,   539,
     115,    78,   426,   427,   108,   628,   103,   869,   543,   549,
     115,   536,   436,   782,    14,   696,    14,    15,   442,   118,
     557,   246,   247,   248,   659,   869,   119,   662,    85,    86,
      87,    88,   894,   397,   398,   105,   460,    94,    35,   116,
     111,   108,   466,   110,   110,   112,   470,    35,   115,   116,
     894,   591,   111,   593,    65,   678,   596,    36,   239,   240,
      36,   249,   250,   114,   612,   114,   106,   104,    47,   102,
      74,    47,     3,   696,   612,   106,   115,   612,    57,   108,
     112,    57,   103,   102,   609,    39,   102,    35,   711,    35,
      65,    70,    35,    72,    70,   630,    72,   732,    77,   111,
     102,    77,   111,    35,   639,   108,   787,   115,   107,   103,
     111,    35,    91,   108,    93,    91,    74,    93,   114,   872,
      35,   114,   101,   115,   877,   660,    35,   112,   663,   115,
     114,   104,   667,   557,   669,    35,    74,   116,   562,    35,
     116,   678,    35,    35,    39,    45,   114,    35,    74,    35,
      50,   114,    35,   104,    54,    35,   580,   692,   113,   583,
      35,   114,   586,   829,   787,   104,    66,    67,   117,    69,
      35,   112,   108,    90,   711,    35,    76,   102,   108,   108,
      80,   729,   817,    65,   107,   791,   792,    90,   115,   108,
     111,   729,   717,   103,   729,   102,   831,   102,   733,    35,
     881,    59,   843,   114,   628,    35,   114,   742,   826,   109,
     114,    35,   114,    71,    72,    96,   110,   823,   758,    71,
     111,    45,   112,    71,    71,   848,    50,    71,   112,   114,
      54,   110,   104,   111,   869,    93,   112,   108,    96,    97,
      98,    99,    66,    67,   784,    69,   108,   782,   826,    73,
      35,   115,    76,   103,   678,   114,    80,   108,   881,   894,
     115,   879,   115,   944,    35,   863,   872,   108,   863,   910,
     115,   877,   696,   115,   940,   898,   899,   115,   113,   960,
      35,   108,   948,    35,   112,    35,   826,   711,   954,   829,
      13,    36,   958,   112,   115,   104,   114,   963,   115,   115,
     115,   879,    47,   843,   927,    35,   846,   930,    35,    35,
     168,   848,    57,   112,   854,    60,   110,   114,    35,   115,
     860,   944,   112,   110,    35,    70,    71,    72,   863,    74,
     111,   937,    77,    35,    58,   870,    39,   960,   115,   879,
     110,   947,   110,   878,    13,   110,    91,   953,    93,   115,
     114,    12,   114,    98,   115,    16,    17,    18,    19,    20,
      21,    22,    23,   787,    25,    26,    27,   108,   114,   108,
     910,   116,   110,   913,   114,   233,   911,   235,   236,   237,
     238,   239,   240,   241,   242,   114,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   112,   110,    35,   108,
     940,   115,    82,    82,    35,   115,   102,   115,   948,    48,
     114,    39,   110,   114,   954,   115,   115,   110,   958,   110,
     115,   115,   110,   963,   848,   114,    39,    39,   115,   114,
      39,   115,   114,    39,   115,     4,     5,   114,   784,   115,
     114,   102,   103,   115,   411,   491,   549,   305,   495,   838,
     424,   534,   113,   311,    20,   660,   711,   881,   732,    28,
      29,    30,    31,    32,    33,    34,    35,   663,   817,   845,
      39,   854,   878,   910,   898,   899,    45,   925,   911,    48,
     782,    50,   904,   879,   802,    54,   827,   529,   541,   669,
      50,   729,   518,   733,   865,   520,   523,    66,    67,   227,
      69,   305,   678,   927,    73,   692,   930,    76,   823,   449,
     235,    80,   233,    82,   236,    -1,    -1,   237,    -1,   238,
     944,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    -1,     4,     5,   960,    -1,    -1,   108,
      -1,    -1,   111,   112,    -1,   114,    -1,   116,    -1,    -1,
      -1,   120,   121,    -1,    -1,    -1,   125,   126,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,    -1,    -1,    -1,    66,    67,    -1,    69,
      -1,    -1,    -1,    73,    -1,    -1,    76,    -1,     4,     5,
      80,    -1,    82,    -1,    -1,   473,    -1,    -1,   113,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,   111,    -1,    39,   114,   115,   116,    -1,    -1,    45,
     120,   121,    48,    -1,    50,   125,   126,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,
      76,    -1,    -1,    -1,    80,    -1,    82,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,    -1,   108,    -1,    -1,   111,   113,    -1,   114,    -1,
     116,    -1,    -1,    -1,   120,   121,    -1,    -1,    -1,   125,
     126,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    35,    -1,    45,    -1,
      -1,    48,    -1,    50,    -1,    -1,    45,    54,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    73,    66,    67,    76,
      69,     4,     5,    80,   113,    82,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   111,    -1,    39,   114,    -1,   116,
      -1,    -1,    45,   120,   121,    48,    -1,    50,   125,   126,
      -1,    54,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    66,    67,    39,    69,    -1,    -1,    -1,
      73,    45,    -1,    76,    48,    -1,    50,    80,    -1,    82,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,    73,
       4,     5,    76,    -1,    -1,    -1,    80,    -1,    82,    -1,
      -1,   114,   115,   116,    -1,    -1,    -1,   120,   121,    -1,
      -1,    -1,   125,   126,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    35,
     114,    45,   116,    -1,    48,    -1,    50,    -1,    -1,    45,
      54,   125,   126,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,    73,
      66,    67,    76,    69,     4,     5,    80,    -1,    82,    -1,
      76,    -1,    -1,    -1,    80,   823,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
     114,   115,   116,    -1,    -1,    45,   120,   121,    48,    -1,
      50,   125,   126,    35,    54,   863,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    66,    67,    50,    69,
      -1,    -1,    54,    73,    -1,    -1,    76,    -1,    35,    -1,
      80,    63,    82,    -1,    66,    67,    -1,    69,    45,    71,
      -1,    73,    -1,    50,    76,    -1,    78,    54,    80,    81,
      -1,    -1,    -1,    -1,   104,     4,     5,    -1,    -1,    66,
      67,    -1,    69,    -1,   114,    -1,   116,    -1,    -1,    76,
     120,   121,    -1,    80,   106,   125,   126,    -1,    35,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    45,    -1,
      39,    -1,    -1,    50,    -1,    -1,    45,    54,    -1,    48,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    73,    66,    67,    76,
      69,    -1,    -1,    80,    73,    -1,    -1,    76,    -1,     4,
       5,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    39,   114,   115,   116,    -1,    -1,
      45,   120,   121,    48,    -1,    50,   125,   126,    35,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    66,    67,    50,    69,    -1,    -1,    54,    73,    -1,
      -1,    76,    -1,     4,     5,    80,    -1,    82,    -1,    66,
      67,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    39,   114,
     115,   116,    -1,    -1,    45,   120,   121,    48,    -1,    50,
     125,   126,    35,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    66,    67,    50,    69,    -1,
      -1,    54,    73,    -1,    -1,    76,    -1,     4,     5,    80,
      -1,    82,    -1,    66,    67,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    39,   114,   115,   116,    -1,    -1,    45,   120,
     121,    48,    -1,    50,   125,   126,    35,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    66,
      67,    50,    69,    -1,    -1,    54,    73,    -1,    -1,    76,
      -1,     4,     5,    80,    -1,    82,    -1,    66,    67,    -1,
      69,    -1,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    39,   114,   115,   116,
      -1,    -1,    45,   120,   121,    48,    -1,    50,   125,   126,
      35,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    66,    67,    50,    69,    -1,    -1,    54,
      73,    -1,    -1,    76,    -1,     4,     5,    80,    -1,    82,
      -1,    66,    67,    -1,    69,    -1,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    80,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      39,   114,   115,   116,    35,    -1,    45,   120,   121,    48,
      -1,    50,   125,   126,    45,    54,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    66,    67,    -1,
      69,    -1,    -1,    -1,    73,    66,    67,    76,    69,     4,
       5,    80,    -1,    82,    -1,    76,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    39,   114,   115,   116,    35,    -1,
      45,   120,   121,    48,    -1,    50,   125,   126,    45,    54,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    73,    66,
      67,    76,    69,     4,     5,    80,    -1,    82,    -1,    76,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    39,   114,
     115,   116,    35,    -1,    45,   120,   121,    48,    -1,    50,
     125,   126,    45,    54,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    66,    67,    -1,    69,    -1,
      -1,    -1,    73,    66,    67,    76,    69,     4,     5,    80,
      -1,    82,    -1,    76,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    39,   114,   115,   116,    -1,    -1,    45,   120,
     121,    48,    -1,    50,   125,   126,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    73,    -1,    -1,    76,
      -1,     4,     5,    80,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,   111,    -1,    39,   114,    -1,   116,
      -1,    -1,    45,   120,   121,    48,    -1,    50,   125,   126,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,
      73,    -1,    -1,    76,    -1,     4,     5,    80,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      39,   114,   115,   116,    -1,    -1,    45,   120,   121,    48,
      -1,    50,   125,   126,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      69,    -1,    -1,    -1,    73,    -1,    -1,    76,    -1,     4,
       5,    80,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    39,   114,   115,   116,    -1,    -1,
      45,   120,   121,    48,    -1,    50,   125,   126,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    73,    -1,
      -1,    76,    -1,     4,     5,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    39,   114,
      -1,   116,    -1,    -1,    45,   120,   121,    48,    -1,    50,
     125,   126,    -1,    54,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    66,    67,    39,    69,    -1,
      -1,    -1,    73,    45,    -1,    76,    48,    -1,    50,    80,
      -1,    82,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    69,    -1,    -1,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,   114,    -1,   116,    -1,    -1,    -1,   120,
     121,    -1,    36,    -1,   125,   126,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    57,   116,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    91,    44,    93,
      -1,    47,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    57,   106,    -1,    60,    -1,   110,    63,   112,    -1,
      -1,    -1,   116,    -1,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    81,    -1,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    91,    -1,    93,    47,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    57,    -1,
     106,    60,    -1,    -1,   110,    -1,   112,    -1,    -1,    -1,
     116,    70,    71,    72,    73,    74,    -1,    -1,    77,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    91,    -1,    93,    -1,    -1,    -1,    -1,    98,
      -1,    57,    -1,    -1,    60,    -1,    -1,   106,    -1,    36,
      -1,   110,    -1,   112,    70,    71,    72,   116,    74,    -1,
      47,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    91,    -1,    93,    -1,    -1,
      -1,    36,    98,    70,    -1,    72,    -1,    74,    -1,    -1,
      77,    -1,    47,    -1,   110,    -1,   112,    -1,    -1,    -1,
     116,    -1,    57,    -1,    91,    60,    93,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,    70,    71,    72,    -1,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    35,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,
      44,    45,    -1,    98,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,   116,    66,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    -1,    76,    35,    78,    -1,    80,    81,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,   106,    -1,    66,    67,   110,    69,   112,    71,
      -1,    73,    -1,    -1,    76,    35,    78,    -1,    80,    81,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,   106,    -1,    66,    67,    -1,    69,
      -1,    71,    -1,    73,    -1,    -1,    76,    35,    78,    -1,
      80,    81,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    35,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    63,   106,    45,    66,    67,
      -1,    69,    50,    -1,    -1,    73,    54,    -1,    76,    -1,
      78,    -1,    80,    81,    35,    -1,    -1,    -1,    66,    67,
      41,    69,    -1,    71,    45,    73,    -1,    -1,    76,    50,
      -1,    -1,    80,    54,    35,    -1,    -1,    -1,   106,    -1,
      41,    -1,    -1,    -1,    45,    66,    67,    -1,    69,    50,
      71,    -1,    73,    54,    -1,    76,    -1,    -1,   106,    80,
      -1,    35,    -1,    -1,    -1,    66,    67,    41,    69,    -1,
      71,    45,    73,    -1,    -1,    76,    50,    -1,    -1,    80,
      54,    35,    -1,    -1,    -1,   106,    -1,    41,    -1,    -1,
      -1,    45,    66,    67,    -1,    69,    50,    71,    -1,    73,
      54,    -1,    76,    -1,    -1,   106,    80,    -1,    35,    -1,
      -1,    -1,    66,    67,    41,    69,    -1,    71,    45,    73,
      -1,    -1,    76,    50,    -1,    -1,    80,    54,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    69,    -1,    71,    -1,    73,    -1,    -1,    76,
      -1,    -1,   106,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    36,    47,    57,    70,    72,    77,    91,    93,   116,
     131,   161,   162,   163,   164,   165,   167,   176,   177,   182,
     183,   244,   253,   290,   291,   301,   302,    35,   157,   159,
      43,    89,    97,   168,     0,   101,   163,   290,   163,   101,
      36,    47,    57,    72,    77,    91,    93,   263,   264,   267,
     268,   280,   290,    60,    74,    98,   182,   131,   290,   114,
     102,    35,    35,    89,   110,    71,   116,   267,    35,    35,
      35,     4,     5,    28,    29,    30,    31,    32,    33,    34,
      35,    39,    45,    48,    50,    54,    66,    67,    69,    73,
      76,    80,    82,   111,   114,   115,   120,   121,   125,   126,
     128,   129,   131,   132,   133,   134,   135,   136,   137,   139,
     140,   156,   157,   158,   160,   290,   292,   293,   295,   296,
     297,   313,   314,   315,   317,   318,   322,   323,   324,   326,
     327,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,    35,   102,   166,   166,    35,    35,    71,    51,   180,
     187,   106,   178,   184,   178,    35,   353,   353,   113,   114,
      35,   106,   129,   131,   136,   137,   148,   319,   320,   103,
     316,   102,    12,   102,   108,   112,   296,   299,    35,   114,
     129,   135,   158,   322,   323,   330,   331,   332,   337,   338,
     339,   341,   353,   353,   353,   353,   131,   141,    35,    45,
     130,   132,   316,    12,   102,   141,    12,   141,    12,   102,
     102,   316,    12,   102,   103,   102,   115,   108,   294,   115,
      12,   102,   103,    15,   109,    14,   118,   119,   105,    10,
      11,     8,     9,    61,   106,   107,     6,     7,    24,   120,
     121,   122,   123,   124,     4,     5,    35,   110,   111,   166,
     178,    35,   131,   136,   137,   111,   245,   131,   143,    65,
     179,   186,   114,   254,   296,   115,   325,   330,   131,   135,
     140,   149,   151,   152,   131,   141,   328,   329,    35,   141,
     328,   131,   319,   114,   106,   148,   321,   104,   102,    74,
      35,   148,    35,   148,   112,   108,   300,   108,   112,   298,
     115,   115,   105,   147,   115,     3,    16,    17,    18,    19,
      20,    21,    22,    23,    25,    26,    27,   113,   340,   103,
     138,   148,   102,    35,   148,   131,    39,   148,    39,    35,
     131,    35,    48,    82,   148,   102,    35,   148,    35,    39,
     148,   318,   330,    35,    35,   293,    35,   148,    35,   148,
     318,   330,   343,   330,   344,   345,   346,   347,   348,   348,
     350,   350,    70,   135,   227,   228,   290,   309,   311,   312,
     350,   350,   351,   351,   351,   352,   352,   353,   353,   353,
     166,    85,    86,    87,    88,    94,   169,   170,   111,    65,
     265,   269,   111,   281,    35,   108,   188,   131,   247,   249,
      35,   108,   185,   137,   180,   131,   255,   257,   258,   180,
     115,   325,   109,   107,   108,   150,   103,   111,   303,   141,
     131,   328,   102,   303,   141,    35,   114,   115,   107,   316,
      74,    35,   114,    35,   299,   112,   114,   353,   137,   115,
     308,   330,   336,   330,   104,    74,    35,    35,    39,    35,
     114,    12,   102,    35,    74,    35,   114,    35,   104,    35,
     114,    35,   104,   117,    35,    45,    92,   132,   156,   202,
     203,   204,   205,   206,   208,   209,   210,   310,   227,   290,
     156,   156,    72,    99,   172,   175,   157,   157,   112,   169,
     169,   188,    90,   266,   270,    36,    47,    57,    70,    72,
      77,    91,    93,   110,   176,   263,   274,   275,   276,   282,
     283,   284,   287,   288,   290,   137,    35,   108,   246,   108,
     248,    65,   144,   145,   143,   107,    90,   181,   189,   202,
     115,   108,   256,   111,   259,    65,    82,   153,   154,   151,
     330,   108,   201,   303,   304,   306,   330,   103,   319,   325,
     115,   325,   114,    35,   227,   333,   334,   147,   331,   356,
     131,   142,   138,   138,   115,   325,    35,   148,    35,   148,
     114,   115,   325,   114,   115,   325,   114,   331,   341,   148,
     207,   102,   141,   102,   141,   141,    35,   197,   198,   200,
      95,   102,   110,   171,   171,    35,   155,   172,   110,    96,
     112,   157,   111,   271,   202,    57,    70,    72,   275,   290,
     112,   282,   202,    36,    57,   287,   290,   188,   114,   250,
     110,   252,   248,   131,   136,   139,   146,   185,   157,   111,
     190,    35,   131,   256,    36,    44,    47,    57,    63,    70,
      72,    77,    78,    81,   110,   176,   192,   193,   194,   195,
     196,   211,   212,   213,   233,   234,   235,   236,   260,   261,
     262,   263,   290,   308,   135,   135,   149,   104,   108,   307,
     112,   108,   305,   115,   115,   115,   325,   166,    92,   202,
     335,   115,   108,   103,   115,    35,   114,    35,   115,   325,
     115,   115,   325,   115,   115,   325,   131,   131,   141,   220,
     108,   113,   199,   155,   102,   110,   157,   108,   174,    36,
      41,    47,    57,    72,    77,   110,   176,   263,   272,   273,
     274,   277,   278,   279,   290,   197,    35,   243,   325,   190,
     251,   191,   192,   235,   112,   147,   174,   191,    13,   308,
     202,    47,    57,    70,    72,   195,   290,    73,   184,   202,
     214,   216,    36,    47,    57,    70,    72,    77,   212,   290,
      35,   178,   237,    47,    57,   235,   290,   112,   260,   306,
     190,   115,   200,   333,   104,   115,   325,   114,   115,   115,
     115,    35,    35,   197,   201,   108,   173,    35,   174,   157,
     112,   272,   214,    36,    47,    57,    72,    77,   278,   290,
     110,   114,   115,   191,   112,    35,   197,   131,   110,   232,
     308,    35,   217,   111,   238,    35,    58,   215,   229,    39,
     226,   227,   142,   115,   115,   325,   207,   207,   155,   110,
     110,   174,   232,   115,   110,   216,   114,   215,   114,   158,
     207,   239,   241,   313,   114,   137,   139,   231,   238,   319,
     202,   115,   173,    41,   110,   141,   285,   289,   217,   131,
     218,   221,   102,    48,    82,   242,   240,   102,   218,   108,
     230,   114,   131,   296,   110,   286,   289,   110,   215,   202,
     219,   223,   225,   226,   227,   108,   148,   207,   114,   114,
     112,   148,   207,   219,   231,   325,    13,   110,    35,   222,
     115,   108,   224,   202,    82,   243,   243,    82,   115,   230,
     115,    35,   102,    48,   220,   225,   200,   114,   115,   115,
     114,   190,   224,   243,   110,   110,   243,    39,   115,   115,
     148,   110,   110,   319,   114,   325,   115,    39,   148,   319,
     114,   115,   190,    39,   148,   319,   114,   115,    39,   319,
     114,   325,   115,    39,   319,   114,   115,   190
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   127,   128,   128,   128,   128,   128,   128,   128,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   133,
     133,   134,   134,   135,   135,   135,   136,   137,   137,   137,
     138,   138,   139,   140,   140,   140,   141,   142,   142,   143,
     144,   144,   145,   146,   146,   147,   147,   148,   149,   150,
     150,   151,   151,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   165,   166,   166,
     167,   168,   168,   169,   169,   170,   170,   170,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   175,   175,
     176,   176,   176,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   184,   185,   185,   186,   187,   188,   188,
     189,   190,   191,   191,   192,   192,   192,   192,   193,   193,
     193,   193,   193,   194,   195,   195,   196,   196,   196,   196,
     196,   196,   196,   197,   197,   198,   199,   199,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   204,   205,   205,
     206,   206,   206,   207,   207,   208,   209,   210,   210,   210,
     211,   212,   212,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   218,
     218,   219,   219,   220,   220,   221,   222,   222,   223,   224,
     224,   225,   225,   226,   227,   227,   228,   228,   229,   230,
     230,   231,   231,   232,   232,   233,   234,   235,   235,   236,
     236,   236,   237,   238,   239,   239,   240,   241,   241,   241,
     242,   242,   243,   243,   244,   245,   246,   246,   247,   247,
     248,   248,   249,   250,   250,   251,   251,   252,   252,   253,
     254,   255,   255,   256,   256,   257,   257,   258,   259,   260,
     260,   261,   261,   262,   263,   263,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   268,   268,   268,   268,   268,
     268,   269,   270,   271,   272,   272,   273,   273,   273,   273,
     273,   274,   275,   275,   276,   276,   276,   276,   277,   277,
     278,   278,   279,   279,   279,   279,   279,   279,   279,   280,
     281,   282,   282,   283,   283,   283,   283,   283,   284,   285,
     285,   285,   286,   286,   287,   287,   288,   288,   288,   289,
     290,   290,   290,   291,   292,   292,   293,   294,   294,   295,
     296,   296,   296,   297,   297,   297,   298,   298,   299,   300,
     300,   301,   302,   303,   304,   304,   304,   305,   305,   306,
     307,   307,   308,   309,   310,   310,   311,   312,   313,   313,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     315,   315,   315,   315,   316,   316,   317,   317,   317,   318,
     318,   319,   319,   320,   320,   321,   321,   322,   322,   322,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   325,   325,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   327,
     327,   327,   327,   327,   327,   328,   328,   329,   330,   330,
     331,   332,   332,   333,   333,   333,   334,   335,   335,   336,
     336,   337,   337,   338,   339,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   341,
     341,   341,   342,   342,   343,   343,   344,   344,   345,   345,
     346,   346,   347,   347,   347,   348,   348,   348,   348,   348,
     348,   349,   349,   350,   350,   350,   350,   351,   351,   351,
     352,   352,   352,   352,   353,   353,   353,   353,   353,   354,
     355,   356,   356,   356,   356,   357,   357,   357,   357,   358,
     359,   360,   360,   360
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     5,
       0,     1,     2,     2,     2,     2,     4,     0,     4,     3,
       0,     1,     2,     1,     2,     0,     3,     3,     2,     0,
       3,     1,     1,     3,     0,     1,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       2,     2,     2,     1,     0,     2,     3,     5,     0,     3,
       2,     7,     6,     0,     2,     4,     3,     3,     3,     6,
       4,     1,     0,     2,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     8,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     3,     2,     3,     0,     3,
       3,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     5,     5,     0,     1,     1,     1,     2,     2,     2,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     0,     1,     1,     1,     6,     2,
       0,     0,     1,     0,     1,     4,     2,     0,     2,     0,
       3,     3,     1,     5,     0,     2,     1,     1,     3,     0,
       3,     1,     1,     1,     1,     2,     4,     0,     2,     1,
       1,     1,     6,     4,     0,     1,     0,     2,     8,     8,
       5,     5,     0,     1,     5,     5,     0,     1,     0,     2,
       0,     2,     4,     0,     3,     0,     1,     2,     0,     7,
       3,     0,     2,     0,     2,     3,     1,     5,     3,     0,
       2,     1,     1,     3,     1,     1,     7,     0,     1,     0,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     0,     2,     1,     1,     1,     1,
       1,     4,     0,     2,     1,     1,     1,     1,     0,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     0,     2,     1,     1,     1,     1,     1,     6,     2,
       2,     1,     2,     1,     0,     2,     1,     1,     1,     2,
       1,     1,     1,     4,     2,     1,     2,     0,     2,     3,
       1,     1,     1,     3,     3,     2,     2,     1,     2,     0,
       2,     2,     5,     3,     2,     1,     0,     0,     1,     2,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       4,     4,     4,     3,     0,     3,     1,     3,     3,    40,
       4,     2,     1,     2,     4,     1,     2,     3,     3,     5,
       4,     4,     4,     3,     7,     6,     6,     5,     7,     6,
       6,     5,     7,     6,     6,     5,     7,     6,     6,     5,
       9,     8,     8,     7,     1,     2,     4,     3,     4,     3,
       4,     3,     4,     3,     6,     5,     4,     3,     3,     4,
       3,     3,     4,     4,     4,     1,     2,     4,     1,     1,
       3,     5,     1,     1,     3,     2,     4,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     5,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 42 "parser.y++"
                     {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2661 "parser.tab.c++"
    break;

  case 3:
#line 43 "parser.y++"
                           {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2667 "parser.tab.c++"
    break;

  case 4:
#line 44 "parser.y++"
                     {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2673 "parser.tab.c++"
    break;

  case 5:
#line 45 "parser.y++"
                       {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2679 "parser.tab.c++"
    break;

  case 6:
#line 46 "parser.y++"
                    {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2685 "parser.tab.c++"
    break;

  case 7:
#line 47 "parser.y++"
                {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2691 "parser.tab.c++"
    break;

  case 8:
#line 48 "parser.y++"
                  {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 2697 "parser.tab.c++"
    break;

  case 9:
#line 57 "parser.y++"
                                 {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Primtive_type", v);
    }
#line 2708 "parser.tab.c++"
    break;

  case 10:
#line 66 "parser.y++"
                  {(yyval.str) = (yyvsp[0].str);}
#line 2714 "parser.tab.c++"
    break;

  case 11:
#line 67 "parser.y++"
              {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2720 "parser.tab.c++"
    break;

  case 13:
#line 72 "parser.y++"
                            {
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Annotations", v);
    }
#line 2730 "parser.tab.c++"
    break;

  case 14:
#line 80 "parser.y++"
                   {
        (yyval.str) = (yyvsp[0].str);
    }
#line 2738 "parser.tab.c++"
    break;

  case 15:
#line 83 "parser.y++"
                        {
        (yyval.str) = (yyvsp[0].str) ;
    }
#line 2746 "parser.tab.c++"
    break;

  case 16:
#line 89 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2752 "parser.tab.c++"
    break;

  case 17:
#line 90 "parser.y++"
            {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2758 "parser.tab.c++"
    break;

  case 18:
#line 91 "parser.y++"
          {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2764 "parser.tab.c++"
    break;

  case 19:
#line 92 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2770 "parser.tab.c++"
    break;

  case 20:
#line 93 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2776 "parser.tab.c++"
    break;

  case 21:
#line 97 "parser.y++"
            {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2782 "parser.tab.c++"
    break;

  case 22:
#line 98 "parser.y++"
             {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 2788 "parser.tab.c++"
    break;

  case 23:
#line 101 "parser.y++"
                           {(yyval.str) = (yyvsp[0].str);}
#line 2794 "parser.tab.c++"
    break;

  case 24:
#line 102 "parser.y++"
                   {(yyval.str) = (yyvsp[0].str);}
#line 2800 "parser.tab.c++"
    break;

  case 25:
#line 103 "parser.y++"
                {(yyval.str) = (yyvsp[0].str);}
#line 2806 "parser.tab.c++"
    break;

  case 26:
#line 107 "parser.y++"
               {(yyval.str) = (yyvsp[0].str)}
#line 2812 "parser.tab.c++"
    break;

  case 27:
#line 111 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[-1].str)) , "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
		(yyval.str) = makenode("Class_type", v);
    }
#line 2824 "parser.tab.c++"
    break;

  case 28:
#line 118 "parser.y++"
                                                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-4].str), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-2].str) , "" , 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "" , 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Class_type", v);
    }
#line 2838 "parser.tab.c++"
    break;

  case 29:
#line 127 "parser.y++"
                                                                {
        vector<data>v;
        insertAttr(v, (yyvsp[-4].str), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-2].str), "" , 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "" , 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Class_type", v);
    }
#line 2852 "parser.tab.c++"
    break;

  case 31:
#line 140 "parser.y++"
                    {(yyval.str) = (yyvsp[0].str);}
#line 2858 "parser.tab.c++"
    break;

  case 32:
#line 144 "parser.y++"
                           {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v,makeleaf((yyvsp[0].str)), "" , 1);
		(yyval.str) = makenode("TypeVariable", v);
    }
#line 2869 "parser.tab.c++"
    break;

  case 33:
#line 153 "parser.y++"
                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Arraytype", v);
    }
#line 2880 "parser.tab.c++"
    break;

  case 34:
#line 159 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Array type", v);
    }
#line 2891 "parser.tab.c++"
    break;

  case 35:
#line 165 "parser.y++"
                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Array type", v);
    }
#line 2902 "parser.tab.c++"
    break;

  case 36:
#line 174 "parser.y++"
                                {
        vector<data> v;
        insertAttr(v, (yyvsp[-3].str), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Dims", v);
    }
#line 2915 "parser.tab.c++"
    break;

  case 38:
#line 186 "parser.y++"
                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].str), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Dims", v);
    }
#line 2928 "parser.tab.c++"
    break;

  case 39:
#line 197 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Typeparameter", v);
    }
#line 2940 "parser.tab.c++"
    break;

  case 41:
#line 208 "parser.y++"
                {(yyval.str)=(yyvsp[0].str);}
#line 2946 "parser.tab.c++"
    break;

  case 42:
#line 212 "parser.y++"
                       {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Type_bound", v);
    }
#line 2957 "parser.tab.c++"
    break;

  case 43:
#line 221 "parser.y++"
                 {
        (yyval.str) = (yyvsp[0].str);
    }
#line 2965 "parser.tab.c++"
    break;

  case 44:
#line 224 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Typebound", v);
    }
#line 2976 "parser.tab.c++"
    break;

  case 46:
#line 234 "parser.y++"
                                   {
        vector<data>v;
        insertAttr(v, NULL, "&", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("Additional_bound", v);
    }
#line 2988 "parser.tab.c++"
    break;

  case 47:
#line 244 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ">", 0);
		(yyval.str) = makenode("TypeArguments", v);
    }
#line 3000 "parser.tab.c++"
    break;

  case 48:
#line 254 "parser.y++"
                                    {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("TypeArgumentList", v);
    }
#line 3011 "parser.tab.c++"
    break;

  case 50:
#line 264 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
		(yyval.str) = makenode("TypeArgumentList", v);
    }
#line 3022 "parser.tab.c++"
    break;

  case 51:
#line 273 "parser.y++"
                   {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3030 "parser.tab.c++"
    break;

  case 52:
#line 276 "parser.y++"
              {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3038 "parser.tab.c++"
    break;

  case 53:
#line 282 "parser.y++"
                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, NULL, "?", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("WildCard", v);
    }
#line 3050 "parser.tab.c++"
    break;

  case 55:
#line 293 "parser.y++"
                   {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3058 "parser.tab.c++"
    break;

  case 56:
#line 299 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("WildcardBounds", v);
    }
#line 3069 "parser.tab.c++"
    break;

  case 57:
#line 305 "parser.y++"
                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("WildcardBounds", v);
    }
#line 3080 "parser.tab.c++"
    break;

  case 58:
#line 315 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3086 "parser.tab.c++"
    break;

  case 59:
#line 316 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("Module_name", v);
    }
#line 3098 "parser.tab.c++"
    break;

  case 60:
#line 326 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3104 "parser.tab.c++"
    break;

  case 61:
#line 327 "parser.y++"
                                 {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("Package_name", v);
    }
#line 3116 "parser.tab.c++"
    break;

  case 62:
#line 337 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3122 "parser.tab.c++"
    break;

  case 63:
#line 338 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("type_name", v);
    }
#line 3134 "parser.tab.c++"
    break;

  case 64:
#line 348 "parser.y++"
                 {(yyval.str) =makeleaf((yyvsp[0].str));}
#line 3140 "parser.tab.c++"
    break;

  case 65:
#line 349 "parser.y++"
                                   {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("Expression_name", v);
    }
#line 3152 "parser.tab.c++"
    break;

  case 66:
#line 359 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3158 "parser.tab.c++"
    break;

  case 67:
#line 360 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("package_or_tpye_name", v);
    }
#line 3170 "parser.tab.c++"
    break;

  case 68:
#line 370 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3176 "parser.tab.c++"
    break;

  case 69:
#line 371 "parser.y++"
                                   {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.str) = makenode("ambiguous_name", v);
    }
#line 3188 "parser.tab.c++"
    break;

  case 70:
#line 382 "parser.y++"
                                  {
        vector<data> v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
        (yyval.str) = makenode("CompilationUnit",v);
    }
#line 3199 "parser.tab.c++"
    break;

  case 71:
#line 388 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
        (yyval.str) = makenode("Compilation_Unit",v);
    }
#line 3210 "parser.tab.c++"
    break;

  case 72:
#line 397 "parser.y++"
                                                              {
        vector<data> v;
		insertAttr(v,(yyvsp[-1].str),"",1);
		insertAttr(v,(yyvsp[0].str),"",1);
		(yyval.str) = makenode("Ordinary_Compilation_Unit",v);
    }
#line 3221 "parser.tab.c++"
    break;

  case 73:
#line 403 "parser.y++"
                                           {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3229 "parser.tab.c++"
    break;

  case 75:
#line 410 "parser.y++"
                                                                               {
        vector<data> v;
		insertAttr(v,(yyvsp[-1].str),"",1);
		insertAttr(v,(yyvsp[0].str),"",1);
		(yyval.str) = makenode("Top_level_class_or_interface_declarations",v);
    }
#line 3240 "parser.tab.c++"
    break;

  case 76:
#line 419 "parser.y++"
                                                {
        vector<data> v;
		insertAttr(v,(yyvsp[-2].str),"",1);
		insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
		(yyval.str) = makenode("Top_level_class_or_interface_declaration",v);
    }
#line 3252 "parser.tab.c++"
    break;

  case 77:
#line 429 "parser.y++"
                                                     {
        vector<data> v;
		insertAttr(v,(yyvsp[-4].str),"",1);
		insertAttr(v,makeleaf((yyvsp[-3].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
		(yyval.str) = makenode("Package_declaration",v);
    }
#line 3266 "parser.tab.c++"
    break;

  case 79:
#line 442 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v,NULL,".",0);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Identifiers",v);
    }
#line 3278 "parser.tab.c++"
    break;

  case 80:
#line 452 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Modular_Compilation_Unit",v);
    }
#line 3289 "parser.tab.c++"
    break;

  case 81:
#line 461 "parser.y++"
                                                                  {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-6].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Module_declaration",v);
    }
#line 3305 "parser.tab.c++"
    break;

  case 82:
#line 472 "parser.y++"
                                                             {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Module_declaration",v);
    }
#line 3320 "parser.tab.c++"
    break;

  case 84:
#line 486 "parser.y++"
                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Module_Directives",v);
    }
#line 3331 "parser.tab.c++"
    break;

  case 85:
#line 495 "parser.y++"
                                                {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-3].str)),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("Module_Directive",v);
    }
#line 3344 "parser.tab.c++"
    break;

  case 86:
#line 503 "parser.y++"
                                           {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Module_Directive",v);
    }
#line 3356 "parser.tab.c++"
    break;

  case 87:
#line 510 "parser.y++"
                                         {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Module_Directive",v);
    }
#line 3368 "parser.tab.c++"
    break;

  case 88:
#line 517 "parser.y++"
                        {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("Module_Directive",v);
    }
#line 3380 "parser.tab.c++"
    break;

  case 89:
#line 524 "parser.y++"
                                                    {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-3].str)),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("Module_Directive",v);
    }
#line 3395 "parser.tab.c++"
    break;

  case 90:
#line 537 "parser.y++"
                                    {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-3].str)),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("Module_Directive2",v);
    }
#line 3408 "parser.tab.c++"
    break;

  case 93:
#line 550 "parser.y++"
                                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Require_modifiers",v);
    }
#line 3419 "parser.tab.c++"
    break;

  case 95:
#line 560 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v,NULL,",",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Module_Names",v);
    }
#line 3431 "parser.tab.c++"
    break;

  case 97:
#line 571 "parser.y++"
                             {
        vector<data> v;
        insertAttr(v,NULL,",",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Module_Names",v);
    }
#line 3443 "parser.tab.c++"
    break;

  case 98:
#line 581 "parser.y++"
                 {
        (yyval.str) = makeleaf((yyvsp[0].str));
    }
#line 3451 "parser.tab.c++"
    break;

  case 99:
#line 584 "parser.y++"
             {
        (yyval.str) = makeleaf((yyvsp[0].str));
    }
#line 3459 "parser.tab.c++"
    break;

  case 100:
#line 593 "parser.y++"
                             {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3467 "parser.tab.c++"
    break;

  case 101:
#line 596 "parser.y++"
                      {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3475 "parser.tab.c++"
    break;

  case 102:
#line 599 "parser.y++"
                        {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3483 "parser.tab.c++"
    break;

  case 103:
#line 605 "parser.y++"
                                                                                                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-7].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-6].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Normal_Class_Declaration",v);
    }
#line 3500 "parser.tab.c++"
    break;

  case 105:
#line 621 "parser.y++"
                     {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3508 "parser.tab.c++"
    break;

  case 107:
#line 628 "parser.y++"
                   {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3516 "parser.tab.c++"
    break;

  case 109:
#line 635 "parser.y++"
                      {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3524 "parser.tab.c++"
    break;

  case 111:
#line 642 "parser.y++"
                   {
        (yyval.str) = (yyvsp[0].str);
    }
#line 3532 "parser.tab.c++"
    break;

  case 113:
#line 649 "parser.y++"
                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Class_modifier",v);
    }
#line 3543 "parser.tab.c++"
    break;

  case 114:
#line 658 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 3549 "parser.tab.c++"
    break;

  case 115:
#line 659 "parser.y++"
             {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3555 "parser.tab.c++"
    break;

  case 116:
#line 660 "parser.y++"
              {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3561 "parser.tab.c++"
    break;

  case 117:
#line 661 "parser.y++"
               {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3567 "parser.tab.c++"
    break;

  case 118:
#line 662 "parser.y++"
             {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3573 "parser.tab.c++"
    break;

  case 119:
#line 663 "parser.y++"
            {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3579 "parser.tab.c++"
    break;

  case 120:
#line 664 "parser.y++"
             {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3585 "parser.tab.c++"
    break;

  case 121:
#line 665 "parser.y++"
                 {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3591 "parser.tab.c++"
    break;

  case 122:
#line 666 "parser.y++"
               {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 3597 "parser.tab.c++"
    break;

  case 123:
#line 670 "parser.y++"
                                              {
        vector<data> v;
        insertAttr(v,NULL,"<",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,">",0);
        (yyval.str) = makenode("Type_Parameters",v);
    }
#line 3610 "parser.tab.c++"
    break;

  case 125:
#line 682 "parser.y++"
                                           {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Type_ParameterList",v);
    }
#line 3622 "parser.tab.c++"
    break;

  case 126:
#line 692 "parser.y++"
                        {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Class_Extends",v);
    }
#line 3633 "parser.tab.c++"
    break;

  case 127:
#line 701 "parser.y++"
                                             {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Class_Implements",v);
    }
#line 3645 "parser.tab.c++"
    break;

  case 129:
#line 712 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Interface_Type_List",v);
    }
#line 3657 "parser.tab.c++"
    break;

  case 130:
#line 722 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Class_Permits",v);
    }
#line 3669 "parser.tab.c++"
    break;

  case 131:
#line 732 "parser.y++"
                                  {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Class_Body",v);
    }
#line 3681 "parser.tab.c++"
    break;

  case 133:
#line 743 "parser.y++"
                                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Class_Body_Declarations",v);
    }
#line 3692 "parser.tab.c++"
    break;

  case 134:
#line 752 "parser.y++"
                             {(yyval.str)=(yyvsp[0].str);}
#line 3698 "parser.tab.c++"
    break;

  case 135:
#line 753 "parser.y++"
            {(yyval.str)=(yyvsp[0].str);}
#line 3704 "parser.tab.c++"
    break;

  case 136:
#line 754 "parser.y++"
                        {(yyval.str)=(yyvsp[0].str);}
#line 3710 "parser.tab.c++"
    break;

  case 137:
#line 755 "parser.y++"
                             {(yyval.str)=(yyvsp[0].str);}
#line 3716 "parser.tab.c++"
    break;

  case 138:
#line 759 "parser.y++"
                       {(yyval.str)=(yyvsp[0].str);}
#line 3722 "parser.tab.c++"
    break;

  case 139:
#line 760 "parser.y++"
                        {(yyval.str)=(yyvsp[0].str);}
#line 3728 "parser.tab.c++"
    break;

  case 140:
#line 761 "parser.y++"
                       {(yyval.str)=(yyvsp[0].str);}
#line 3734 "parser.tab.c++"
    break;

  case 141:
#line 762 "parser.y++"
                           {(yyval.str)=(yyvsp[0].str);}
#line 3740 "parser.tab.c++"
    break;

  case 143:
#line 767 "parser.y++"
                                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("Field_Declaration",v);
    }
#line 3753 "parser.tab.c++"
    break;

  case 145:
#line 779 "parser.y++"
                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Field_Modifiers",v);
    }
#line 3764 "parser.tab.c++"
    break;

  case 146:
#line 788 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 3770 "parser.tab.c++"
    break;

  case 147:
#line 789 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3776 "parser.tab.c++"
    break;

  case 148:
#line 790 "parser.y++"
              {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3782 "parser.tab.c++"
    break;

  case 149:
#line 791 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3788 "parser.tab.c++"
    break;

  case 150:
#line 792 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3794 "parser.tab.c++"
    break;

  case 151:
#line 793 "parser.y++"
                {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3800 "parser.tab.c++"
    break;

  case 152:
#line 794 "parser.y++"
               {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3806 "parser.tab.c++"
    break;

  case 153:
#line 798 "parser.y++"
                         {(yyval.str)=(yyvsp[0].str);}
#line 3812 "parser.tab.c++"
    break;

  case 154:
#line 799 "parser.y++"
                                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Variable_Declarator_List",v);
    }
#line 3824 "parser.tab.c++"
    break;

  case 155:
#line 809 "parser.y++"
                                               {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Variable_Declarator",v);
    }
#line 3835 "parser.tab.c++"
    break;

  case 157:
#line 819 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,"=",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Variable_Declarator",v);
    }
#line 3846 "parser.tab.c++"
    break;

  case 158:
#line 827 "parser.y++"
                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Variable_Declarator_Id",v);
    }
#line 3857 "parser.tab.c++"
    break;

  case 159:
#line 836 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 3863 "parser.tab.c++"
    break;

  case 160:
#line 837 "parser.y++"
                       {(yyval.str)=(yyvsp[0].str);}
#line 3869 "parser.tab.c++"
    break;

  case 161:
#line 841 "parser.y++"
                         {(yyval.str)=(yyvsp[0].str);}
#line 3875 "parser.tab.c++"
    break;

  case 162:
#line 842 "parser.y++"
                         {(yyval.str)=(yyvsp[0].str);}
#line 3881 "parser.tab.c++"
    break;

  case 163:
#line 846 "parser.y++"
                  {(yyval.str)=(yyvsp[0].str);}
#line 3887 "parser.tab.c++"
    break;

  case 164:
#line 847 "parser.y++"
              {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3893 "parser.tab.c++"
    break;

  case 165:
#line 851 "parser.y++"
                                {(yyval.str)=(yyvsp[0].str);}
#line 3899 "parser.tab.c++"
    break;

  case 166:
#line 852 "parser.y++"
                        {(yyval.str)=(yyvsp[0].str);}
#line 3905 "parser.tab.c++"
    break;

  case 167:
#line 853 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 3911 "parser.tab.c++"
    break;

  case 168:
#line 857 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 3917 "parser.tab.c++"
    break;

  case 169:
#line 858 "parser.y++"
                         {(yyval.str)=(yyvsp[0].str);}
#line 3923 "parser.tab.c++"
    break;

  case 170:
#line 862 "parser.y++"
                                {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Class_Type",v);
    }
#line 3934 "parser.tab.c++"
    break;

  case 171:
#line 868 "parser.y++"
                                                            {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,NULL,".",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Class_Type",v);
    }
#line 3948 "parser.tab.c++"
    break;

  case 172:
#line 877 "parser.y++"
                                                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,NULL,".",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Class_Type",v);
    }
#line 3962 "parser.tab.c++"
    break;

  case 174:
#line 890 "parser.y++"
                    {(yyval.str)=(yyvsp[0].str);}
#line 3968 "parser.tab.c++"
    break;

  case 175:
#line 894 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 3974 "parser.tab.c++"
    break;

  case 176:
#line 898 "parser.y++"
                 {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 3980 "parser.tab.c++"
    break;

  case 177:
#line 902 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Array_Type",v);
    }
#line 3991 "parser.tab.c++"
    break;

  case 178:
#line 908 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Array_Type",v);
    }
#line 4002 "parser.tab.c++"
    break;

  case 179:
#line 914 "parser.y++"
                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Unn_Array_Type",v);
    }
#line 4013 "parser.tab.c++"
    break;

  case 180:
#line 923 "parser.y++"
                                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Method_declaration",v);
    }
#line 4025 "parser.tab.c++"
    break;

  case 182:
#line 934 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Method_modifiers",v);
    }
#line 4036 "parser.tab.c++"
    break;

  case 183:
#line 943 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 4042 "parser.tab.c++"
    break;

  case 184:
#line 944 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4048 "parser.tab.c++"
    break;

  case 185:
#line 945 "parser.y++"
              {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4054 "parser.tab.c++"
    break;

  case 186:
#line 946 "parser.y++"
               {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4060 "parser.tab.c++"
    break;

  case 187:
#line 947 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4066 "parser.tab.c++"
    break;

  case 188:
#line 948 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4072 "parser.tab.c++"
    break;

  case 189:
#line 949 "parser.y++"
                   {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4078 "parser.tab.c++"
    break;

  case 190:
#line 950 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4084 "parser.tab.c++"
    break;

  case 191:
#line 951 "parser.y++"
               {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4090 "parser.tab.c++"
    break;

  case 192:
#line 955 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Method_header",v);
    }
#line 4102 "parser.tab.c++"
    break;

  case 193:
#line 962 "parser.y++"
                                                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Methdod_header",v);
    }
#line 4116 "parser.tab.c++"
    break;

  case 195:
#line 975 "parser.y++"
             {(yyval.str)=(yyvsp[0].str);}
#line 4122 "parser.tab.c++"
    break;

  case 196:
#line 979 "parser.y++"
                {(yyval.str)=(yyvsp[0].str);}
#line 4128 "parser.tab.c++"
    break;

  case 197:
#line 980 "parser.y++"
           {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4134 "parser.tab.c++"
    break;

  case 198:
#line 984 "parser.y++"
                                                                       {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Methdod_declarator",v);
    }
#line 4149 "parser.tab.c++"
    break;

  case 199:
#line 997 "parser.y++"
                            {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,",",0);
        (yyval.str) = makenode("ReceiverParameter",v);
    }
#line 4160 "parser.tab.c++"
    break;

  case 202:
#line 1008 "parser.y++"
                          {(yyval.str)=(yyvsp[0].str);}
#line 4166 "parser.tab.c++"
    break;

  case 204:
#line 1013 "parser.y++"
           {(yyval.str)=(yyvsp[0].str);}
#line 4172 "parser.tab.c++"
    break;

  case 205:
#line 1017 "parser.y++"
                                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,makeleaf((yyvsp[0].str)),"",1);
        (yyval.str) = makenode("Identifiery",v);
    }
#line 4185 "parser.tab.c++"
    break;

  case 206:
#line 1028 "parser.y++"
                     {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,".",0);
        (yyval.str) = makenode("Identifiery",v);
    }
#line 4196 "parser.tab.c++"
    break;

  case 208:
#line 1038 "parser.y++"
                                           {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Formal_Parameter_list",v);
    }
#line 4207 "parser.tab.c++"
    break;

  case 210:
#line 1048 "parser.y++"
                                               {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Formal_Parameter_list",v);
    }
#line 4219 "parser.tab.c++"
    break;

  case 211:
#line 1058 "parser.y++"
                                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Formal_Parameter",v);
    }
#line 4231 "parser.tab.c++"
    break;

  case 212:
#line 1065 "parser.y++"
                             {(yyval.str)=(yyvsp[0].str);}
#line 4237 "parser.tab.c++"
    break;

  case 213:
#line 1069 "parser.y++"
                                                                  {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[0].str)),"",1);
        (yyval.str) = makenode("Variable_arity_Parameter",v);
    }
#line 4251 "parser.tab.c++"
    break;

  case 215:
#line 1082 "parser.y++"
                                         {
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Variable_modifier",v);
    }
#line 4261 "parser.tab.c++"
    break;

  case 216:
#line 1090 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 4267 "parser.tab.c++"
    break;

  case 217:
#line 1091 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4273 "parser.tab.c++"
    break;

  case 218:
#line 1095 "parser.y++"
                                             {
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        (yyval.str) = makenode("Throws",v);
    }
#line 4283 "parser.tab.c++"
    break;

  case 220:
#line 1104 "parser.y++"
                                          {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("ExceptionTypeList",v);
    }
#line 4295 "parser.tab.c++"
    break;

  case 221:
#line 1114 "parser.y++"
                {(yyval.str)=(yyvsp[0].str);}
#line 4301 "parser.tab.c++"
    break;

  case 222:
#line 1115 "parser.y++"
                   {(yyval.str)=(yyvsp[0].str);}
#line 4307 "parser.tab.c++"
    break;

  case 223:
#line 1119 "parser.y++"
            {(yyval.str)=(yyvsp[0].str);}
#line 4313 "parser.tab.c++"
    break;

  case 224:
#line 1120 "parser.y++"
          {(yyval.str)=makeleaf(";")}
#line 4319 "parser.tab.c++"
    break;

  case 225:
#line 1124 "parser.y++"
                   {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("StaticInitilizer",v);
    }
#line 4330 "parser.tab.c++"
    break;

  case 226:
#line 1133 "parser.y++"
                                                                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Constructor_declaration",v);
    }
#line 4343 "parser.tab.c++"
    break;

  case 228:
#line 1145 "parser.y++"
                                               {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Constructor_modifier",v);
    }
#line 4354 "parser.tab.c++"
    break;

  case 229:
#line 1154 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 4360 "parser.tab.c++"
    break;

  case 230:
#line 1155 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4366 "parser.tab.c++"
    break;

  case 231:
#line 1156 "parser.y++"
              {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4372 "parser.tab.c++"
    break;

  case 232:
#line 1160 "parser.y++"
                                                                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-5].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.str) = makenode("Constructor_declarator",v);
    }
#line 4387 "parser.tab.c++"
    break;

  case 233:
#line 1173 "parser.y++"
                                                              {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Constructor_body",v);
    }
#line 4400 "parser.tab.c++"
    break;

  case 235:
#line 1185 "parser.y++"
                                    {(yyval.str)=(yyvsp[0].str);}
#line 4406 "parser.tab.c++"
    break;

  case 237:
#line 1194 "parser.y++"
                                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("ExplicitConstructorInvocation",v);
    }
#line 4417 "parser.tab.c++"
    break;

  case 238:
#line 1200 "parser.y++"
                                                                        {
        vector<data> v;
        insertAttr(v,(yyvsp[-7].str),"",1);
        insertAttr(v,NULL,".",0);
        insertAttr(v,(yyvsp[-5].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("ExplicitConstructorInvocation",v);
    }
#line 4434 "parser.tab.c++"
    break;

  case 239:
#line 1212 "parser.y++"
                                                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-7].str),"",1);
        insertAttr(v,NULL,".",0);
        insertAttr(v,(yyvsp[-5].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("ExplicitConstructorInvocation",v);
    }
#line 4451 "parser.tab.c++"
    break;

  case 240:
#line 1227 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("ExplicitConstructorInvocation",v);
    }
#line 4465 "parser.tab.c++"
    break;

  case 241:
#line 1236 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.str) = makenode("ExplicitConstructorInvocation",v);
    }
#line 4479 "parser.tab.c++"
    break;

  case 243:
#line 1249 "parser.y++"
                   {(yyval.str)=(yyvsp[0].str);}
#line 4485 "parser.tab.c++"
    break;

  case 244:
#line 1253 "parser.y++"
                                                               {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-3].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Enum_declaration",v);
    }
#line 4499 "parser.tab.c++"
    break;

  case 245:
#line 1265 "parser.y++"
                                                            {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Enum_body",v);
    }
#line 4513 "parser.tab.c++"
    break;

  case 247:
#line 1278 "parser.y++"
          {(yyval.str)=makeleaf(",")}
#line 4519 "parser.tab.c++"
    break;

  case 249:
#line 1283 "parser.y++"
                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Enum_constant_list",v);
    }
#line 4530 "parser.tab.c++"
    break;

  case 251:
#line 1293 "parser.y++"
                           {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Enum_constant_list",v);
    }
#line 4541 "parser.tab.c++"
    break;

  case 252:
#line 1302 "parser.y++"
                                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Enum_constant",v);
    }
#line 4554 "parser.tab.c++"
    break;

  case 254:
#line 1314 "parser.y++"
                            {
        vector<data> v;
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.str) = makenode("Argumentlist",v);
    }
#line 4566 "parser.tab.c++"
    break;

  case 256:
#line 1325 "parser.y++"
                {(yyval.str)=(yyvsp[0].str);}
#line 4572 "parser.tab.c++"
    break;

  case 257:
#line 1329 "parser.y++"
                                {
        vector<data> v;
        insertAttr(v,NULL,";",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("EnumBodyDeclarations",v);
    }
#line 4583 "parser.tab.c++"
    break;

  case 259:
#line 1339 "parser.y++"
                                                                                                {
        vector<data> v;
        insertAttr(v,(yyvsp[-6].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-5].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Record_declaration",v);
    }
#line 4599 "parser.tab.c++"
    break;

  case 260:
#line 1353 "parser.y++"
                                   {
        vector<data> v;
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.str) = makenode("Record_header",v);
    }
#line 4611 "parser.tab.c++"
    break;

  case 262:
#line 1364 "parser.y++"
                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("RecordComponentList",v);
    }
#line 4622 "parser.tab.c++"
    break;

  case 264:
#line 1374 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Record_Component_List",v);
    }
#line 4633 "parser.tab.c++"
    break;

  case 265:
#line 1383 "parser.y++"
                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,makeleaf((yyvsp[0].str)),"",1);
        (yyval.str) = makenode("RecordComponent",v);
    }
#line 4645 "parser.tab.c++"
    break;

  case 266:
#line 1390 "parser.y++"
                                   {(yyval.str)=(yyvsp[0].str);}
#line 4651 "parser.tab.c++"
    break;

  case 267:
#line 1394 "parser.y++"
                                                            {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].str),"",1);
        insertAttr(v,(yyvsp[-3].str),"",1);
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,makeleaf((yyvsp[0].str)),"",1);
        (yyval.str) = makenode("Variable_Arity_RecordComponent",v);
    }
#line 4665 "parser.tab.c++"
    break;

  case 268:
#line 1406 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.str) = makenode("Record_body",v);
    }
#line 4677 "parser.tab.c++"
    break;

  case 270:
#line 1417 "parser.y++"
                                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].str),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("Record_body_declarations",v);
    }
#line 4688 "parser.tab.c++"
    break;

  case 271:
#line 1426 "parser.y++"
                           {(yyval.str)=(yyvsp[0].str);}
#line 4694 "parser.tab.c++"
    break;

  case 272:
#line 1427 "parser.y++"
                                    {(yyval.str)=(yyvsp[0].str);}
#line 4700 "parser.tab.c++"
    break;

  case 273:
#line 1431 "parser.y++"
                                                      {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].str),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].str),"",1);
        (yyval.str) = makenode("compact_body",v);
    }
#line 4712 "parser.tab.c++"
    break;

  case 274:
#line 1444 "parser.y++"
                               {(yyval.str)=(yyvsp[0].str);}
#line 4718 "parser.tab.c++"
    break;

  case 275:
#line 1445 "parser.y++"
                                   {(yyval.str)=(yyvsp[0].str);}
#line 4724 "parser.tab.c++"
    break;

  case 276:
#line 1449 "parser.y++"
                                                                                                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-6].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, (yyvsp[-3].str), "", 1);
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("NormalInterfaceDeclaration", v);   
}
#line 4740 "parser.tab.c++"
    break;

  case 278:
#line 1464 "parser.y++"
                       {(yyval.str)=(yyvsp[0].str);}
#line 4746 "parser.tab.c++"
    break;

  case 280:
#line 1469 "parser.y++"
                       {(yyval.str)=(yyvsp[0].str);}
#line 4752 "parser.tab.c++"
    break;

  case 282:
#line 1474 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfaceModifiers", v);
    }
#line 4763 "parser.tab.c++"
    break;

  case 283:
#line 1483 "parser.y++"
                {(yyval.str)=(yyvsp[0].str);}
#line 4769 "parser.tab.c++"
    break;

  case 284:
#line 1484 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4775 "parser.tab.c++"
    break;

  case 285:
#line 1485 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4781 "parser.tab.c++"
    break;

  case 286:
#line 1486 "parser.y++"
               {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4787 "parser.tab.c++"
    break;

  case 287:
#line 1487 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4793 "parser.tab.c++"
    break;

  case 288:
#line 1488 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4799 "parser.tab.c++"
    break;

  case 289:
#line 1489 "parser.y++"
                {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4805 "parser.tab.c++"
    break;

  case 290:
#line 1490 "parser.y++"
              {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4811 "parser.tab.c++"
    break;

  case 291:
#line 1494 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfaceExtends", v);  
    }
#line 4822 "parser.tab.c++"
    break;

  case 292:
#line 1503 "parser.y++"
                               {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfacePermits", v);  
    }
#line 4834 "parser.tab.c++"
    break;

  case 293:
#line 1513 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("InterfaceBody", v);  
    }
#line 4846 "parser.tab.c++"
    break;

  case 295:
#line 1524 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfaceMemberDeclaration", v);  
    }
#line 4857 "parser.tab.c++"
    break;

  case 296:
#line 1533 "parser.y++"
                        {(yyval.str)=(yyvsp[0].str);}
#line 4863 "parser.tab.c++"
    break;

  case 297:
#line 1534 "parser.y++"
                               {(yyval.str)=(yyvsp[0].str);}
#line 4869 "parser.tab.c++"
    break;

  case 298:
#line 1535 "parser.y++"
                     {(yyval.str) = (yyvsp[0].str) ;}
#line 4875 "parser.tab.c++"
    break;

  case 299:
#line 1536 "parser.y++"
                          {(yyval.str) = (yyvsp[0].str) ;}
#line 4881 "parser.tab.c++"
    break;

  case 300:
#line 1537 "parser.y++"
         {(yyval.str) = makeleaf(";");}
#line 4887 "parser.tab.c++"
    break;

  case 301:
#line 1541 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].str), "", 1);
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.str) = makenode("ConstantDeclaration", v);  
    }
#line 4900 "parser.tab.c++"
    break;

  case 303:
#line 1553 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ConstantModifiers", v);  
    }
#line 4911 "parser.tab.c++"
    break;

  case 304:
#line 1562 "parser.y++"
               {(yyval.str)=(yyvsp[0].str);}
#line 4917 "parser.tab.c++"
    break;

  case 305:
#line 1563 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 4923 "parser.tab.c++"
    break;

  case 306:
#line 1564 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 4929 "parser.tab.c++"
    break;

  case 307:
#line 1565 "parser.y++"
          {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 4935 "parser.tab.c++"
    break;

  case 309:
#line 1570 "parser.y++"
                                                     {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfaceMethodDeclaration", v);  
    }
#line 4947 "parser.tab.c++"
    break;

  case 311:
#line 1581 "parser.y++"
                                                     {
            vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("InterfaceMethod", v);  
    }
#line 4958 "parser.tab.c++"
    break;

  case 312:
#line 1589 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4964 "parser.tab.c++"
    break;

  case 313:
#line 1590 "parser.y++"
               {(yyval.str) = (yyvsp[0].str);}
#line 4970 "parser.tab.c++"
    break;

  case 314:
#line 1591 "parser.y++"
           {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4976 "parser.tab.c++"
    break;

  case 315:
#line 1592 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4982 "parser.tab.c++"
    break;

  case 316:
#line 1593 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4988 "parser.tab.c++"
    break;

  case 317:
#line 1594 "parser.y++"
           {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 4994 "parser.tab.c++"
    break;

  case 318:
#line 1595 "parser.y++"
            {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 5000 "parser.tab.c++"
    break;

  case 319:
#line 1599 "parser.y++"
                                                                        {
        vector<data>v;
        insertAttr(v, (yyvsp[-4].str), "", 1);
        insertAttr(v, NULL, "@", 0);
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
		(yyval.str) = makenode("AnnotationInterfaceDeclaration", v); 
    }
#line 5013 "parser.tab.c++"
    break;

  case 320:
#line 1609 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("AnnotationInterfaceBody", v); 
    }
#line 5025 "parser.tab.c++"
    break;

  case 322:
#line 1619 "parser.y++"
                                                                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("AnnotationInterMemberDeclarations", v); 
    }
#line 5036 "parser.tab.c++"
    break;

  case 323:
#line 1627 "parser.y++"
                                          {(yyval.str)=(yyvsp[0].str);}
#line 5042 "parser.tab.c++"
    break;

  case 324:
#line 1628 "parser.y++"
                        {(yyval.str)=(yyvsp[0].str);}
#line 5048 "parser.tab.c++"
    break;

  case 325:
#line 1629 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 5054 "parser.tab.c++"
    break;

  case 326:
#line 1630 "parser.y++"
                         {(yyval.str)=(yyvsp[0].str);}
#line 5060 "parser.tab.c++"
    break;

  case 327:
#line 1631 "parser.y++"
        {(yyval.str) = makeleaf(";");}
#line 5066 "parser.tab.c++"
    break;

  case 328:
#line 1634 "parser.y++"
                                                                                                            {
        vector<data>v;
        insertAttr(v, (yyvsp[-5].str), "", 1);
        insertAttr(v, (yyvsp[-4].str), "", 1);
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("AnnotationInterfaceBody", v); 
    }
#line 5081 "parser.tab.c++"
    break;

  case 329:
#line 1646 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("AnnotationInterfaceElementDeclaration2", v);
    }
#line 5092 "parser.tab.c++"
    break;

  case 330:
#line 1652 "parser.y++"
                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ";", 1);
		(yyval.str) = makenode("AnnotationInterfaceElementDeclaration2", v);
    }
#line 5103 "parser.tab.c++"
    break;

  case 331:
#line 1658 "parser.y++"
         {(yyval.str) = makeleaf(";");}
#line 5109 "parser.tab.c++"
    break;

  case 332:
#line 1662 "parser.y++"
                     {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ";", 1);
		(yyval.str) = makenode("AnnotationInterfaceElementDeclaration2", v);
    }
#line 5120 "parser.tab.c++"
    break;

  case 333:
#line 1668 "parser.y++"
        {(yyval.str) = makeleaf(";");}
#line 5126 "parser.tab.c++"
    break;

  case 335:
#line 1674 "parser.y++"
                                                                           {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("AnnotationInterfaceElementModifiers", v);
    }
#line 5137 "parser.tab.c++"
    break;

  case 336:
#line 1682 "parser.y++"
               {(yyval.str)=(yyvsp[0].str);}
#line 5143 "parser.tab.c++"
    break;

  case 337:
#line 1683 "parser.y++"
           {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 5149 "parser.tab.c++"
    break;

  case 338:
#line 1684 "parser.y++"
             {(yyval.str)=makeleaf((yyvsp[0].str));}
#line 5155 "parser.tab.c++"
    break;

  case 339:
#line 1687 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("DefaultValue", v);
    }
#line 5166 "parser.tab.c++"
    break;

  case 340:
#line 1695 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 5172 "parser.tab.c++"
    break;

  case 341:
#line 1696 "parser.y++"
                     {(yyval.str)=(yyvsp[0].str);}
#line 5178 "parser.tab.c++"
    break;

  case 342:
#line 1697 "parser.y++"
                            {(yyval.str)=(yyvsp[0].str);}
#line 5184 "parser.tab.c++"
    break;

  case 343:
#line 1700 "parser.y++"
                                       {
        vector<data>v;
        insertAttr(v, NULL, "@", 0);
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("NormalAnnotation", v);
    }
#line 5197 "parser.tab.c++"
    break;

  case 344:
#line 1710 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.str) = makenode("NormalAnnotation", v);
    }
#line 5208 "parser.tab.c++"
    break;

  case 345:
#line 1716 "parser.y++"
        {(yyval.str)=makeleaf(")");}
#line 5214 "parser.tab.c++"
    break;

  case 346:
#line 1721 "parser.y++"
                                           {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValuePairList", v);
    }
#line 5225 "parser.tab.c++"
    break;

  case 348:
#line 1731 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValuePairList2", v);
    }
#line 5236 "parser.tab.c++"
    break;

  case 349:
#line 1741 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v,makeleaf((yyvsp[-2].str)) , "", 1);
        insertAttr(v, NULL, "=", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValuePair", v);
    }
#line 5248 "parser.tab.c++"
    break;

  case 350:
#line 1750 "parser.y++"
                          {(yyval.str)=(yyvsp[0].str);}
#line 5254 "parser.tab.c++"
    break;

  case 351:
#line 1751 "parser.y++"
                                 {(yyval.str)=(yyvsp[0].str);}
#line 5260 "parser.tab.c++"
    break;

  case 352:
#line 1752 "parser.y++"
               {(yyval.str)=(yyvsp[0].str);}
#line 5266 "parser.tab.c++"
    break;

  case 353:
#line 1755 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValueArrayInitializer", v);
    }
#line 5278 "parser.tab.c++"
    break;

  case 354:
#line 1762 "parser.y++"
                {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("ElementValueArrayInitializer", v);
    }
#line 5290 "parser.tab.c++"
    break;

  case 355:
#line 1769 "parser.y++"
            {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("ElementValueArrayInitializer", v);
    }
#line 5301 "parser.tab.c++"
    break;

  case 356:
#line 1778 "parser.y++"
            {
        vector<data>v;
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("ElementValueArrayInitializer2", v);
    }
#line 5312 "parser.tab.c++"
    break;

  case 357:
#line 1784 "parser.y++"
        {(yyval.str)=makeleaf("}");}
#line 5318 "parser.tab.c++"
    break;

  case 358:
#line 1789 "parser.y++"
                                   {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValueList", v);
    }
#line 5329 "parser.tab.c++"
    break;

  case 360:
#line 1799 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ElementValueList2", v);
    }
#line 5340 "parser.tab.c++"
    break;

  case 361:
#line 1809 "parser.y++"
                 {
        Vector<data>v;
        insertAttr(v, NULL, "@", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("MarkerAnnotation", v);
    }
#line 5351 "parser.tab.c++"
    break;

  case 362:
#line 1817 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, NULL, "@", 0);
        insertAttr(v, (yyvsp[-3].str), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.str) = makenode("SingleElementAnnotation", v);
    }
#line 5365 "parser.tab.c++"
    break;

  case 363:
#line 1832 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.str) = makenode("ArrayInitializer", v);
    }
#line 5377 "parser.tab.c++"
    break;

  case 364:
#line 1842 "parser.y++"
                                              {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("ArrayInitializer2", v);
    }
#line 5388 "parser.tab.c++"
    break;

  case 365:
#line 1848 "parser.y++"
        {(yyval.str) = makeleaf(",");}
#line 5394 "parser.tab.c++"
    break;

  case 368:
#line 1854 "parser.y++"
        {(yyval.str)=makeleaf(",");}
#line 5400 "parser.tab.c++"
    break;

  case 369:
#line 1858 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("VariableInitializerList", v);
    }
#line 5411 "parser.tab.c++"
    break;

  case 371:
#line 1868 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("VariableInitializerList2", v);
    }
#line 5422 "parser.tab.c++"
    break;

  case 373:
#line 1917 "parser.y++"
                                                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].str), "", 1);
        insertAttr(v, (yyvsp[-1].str), "", 1);
        insertAttr(v, (yyvsp[0].str), "", 1);
		(yyval.str) = makenode("LocalVariableDeclaration", v);
    }
#line 5434 "parser.tab.c++"
    break;

  case 374:
#line 1927 "parser.y++"
              {(yyval.str)=(yyvsp[0].str);}
#line 5440 "parser.tab.c++"
    break;

  case 375:
#line 1928 "parser.y++"
        {(yyval.str) = makeleaf((yyvsp[0].str));}
#line 5446 "parser.tab.c++"
    break;

  case 376:
#line 2292 "parser.y++"
                 {(yyval.str)=(yyvsp[0].str);}
#line 5452 "parser.tab.c++"
    break;

  case 377:
#line 2296 "parser.y++"
                              {(yyval.str)=(yyvsp[0].str);}
#line 5458 "parser.tab.c++"
    break;


#line 5462 "parser.tab.c++"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2565 "parser.y++"


int main(){
    yyparse();
    return 0;
}

int yyerror(const char* s){
    cout << "Error: " << s << "in Line no: " << lineno << endl;
    return -1;
}

