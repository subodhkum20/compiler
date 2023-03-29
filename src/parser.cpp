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
    extern vector<quad> code;

    extern void yyerror(char const*);
    extern void print3AC();
    int yylex (void); 

    FILE* dotfile;
    stack<int> block_stack;

    bool fn_decl = 0;
    int func_flag = 0;
    int dump_tac = 0;
    int dump_sym_table = 0;
    int only_lexer = 0;
    int block_count = 0;
    int Anon_StructCounter=0;
    int if_found = 0;
    int previous_if_found = 0;
    int stop_compiler = 0;		// shows error while parsing
    int isArray = 0;			// true when array is declared
    int type_delim = 0;	

    string funcName = "";
    string className = "";
    string funcType = "";
    string classTemp ="";
    string type = "";
    string storage_class = "";
    vector<string> funcArgs;
    vector<string> idList;
    vector<vector<string> > currArgs(1,vector<string>() );
    vector<qid> initializer_list_values;
    vector<int> array_dims;
    map<string, vector<int>> gotolablelist;
    map<string, int> gotolabel;
    map<string, int> func_usage_map;
    map<string, vector<qid>> global_array_init_map;
    void set_int_type(int);
    void set_real_type();
    int char_int(string str);
    #define YYDEBUG 1
    #define YYERROR_VERBOSE


#line 124 "parser.cpp"

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
    integerLiteral = 278,
    stringLiteral = 279,
    nullLiteral = 280,
    characterLiteral = 281,
    textBlock = 282,
    booleanLiteral = 283,
    FloatingPointLiteral = 284,
    Identifier = 285,
    CONTINUE = 286,
    FOR = 287,
    NEW = 288,
    IF = 289,
    PACKAGE = 290,
    SYNCHRONIZED = 291,
    BOOLEAN = 292,
    PRIVATE = 293,
    THIS = 294,
    BREAK = 295,
    DOUBLE = 296,
    THROW = 297,
    BYTE = 298,
    ELSE = 299,
    PUBLIC = 300,
    RETURN = 301,
    INT = 302,
    SHORT = 303,
    CHAR = 304,
    FINAL = 305,
    STATIC = 306,
    VOID = 307,
    CLASS = 308,
    LONG = 309,
    FLOAT = 310,
    SUPER = 311,
    WHILE = 312,
    _ = 313,
    YIELD = 314,
    eof = 315,
    INC_OP = 316,
    DEC_OP = 317,
    NEXT_QUAD = 318,
    S = 319,
    G = 320,
    A = 321,
    ChangeTable = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 55 "parser.y++"
 
    char* str;
    treeNode* ptr;
    constants* num;
    int ind;

#line 251 "parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  470

#define YYUNDEFTOK  2
#define YYMAXUTOK   322


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
       2,     2,     2,    23,     2,     2,     2,    14,    15,     2,
       3,     4,    12,    10,    18,    11,     9,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,    19,
      20,    26,    21,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     7,     2,     8,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,    16,     6,    22,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    88,    95,   104,   111,   118,   124,   134,
     137,   148,   151,   157,   166,   174,   182,   190,   201,   209,
     220,   231,   252,   253,   256,   299,   340,   357,   370,   376,
     377,   392,   393,   399,   419,   443,   468,   469,   486,   490,
     494,   498,   505,   511,   512,   524,   525,   526,   527,   531,
     546,   564,   567,   580,   589,   608,   624,   654,   665,   678,
     690,   703,   718,   729,   787,   832,   852,   853,   857,   858,
     862,   865,   884,   916,   917,   921,   932,   948,   956,   966,
     977,   991,   992,   997,   998,  1002,  1003,  1009,  1017,  1027,
    1028,  1041,  1057,  1058,  1084,  1085,  1089,  1090,  1094,  1107,
    1108,  1109,  1110,  1111,  1112,  1116,  1117,  1118,  1119,  1120,
    1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1136,
    1165,  1175,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1194,
    1194,  1209,  1230,  1254,  1278,  1300,  1322,  1336,  1353,  1368,
    1385,  1408,  1428,  1429,  1433,  1434,  1438,  1439,  1443,  1444,
    1448,  1452,  1455,  1466,  1477,  1487,  1499,  1511,  1525,  1539,
    1548,  1561,  1576,  1576,  1608,  1619,  1620,  1623,  1624,  1625,
    1626,  1627,  1628,  1629,  1634,  1635,  1642,  1652,  1665,  1675,
    1676,  1680,  1681,  1691,  1700,  1707,  1717,  1725,  1737,  1745,
    1755,  1768,  1783,  1806,  1814,  1825,  1826,  1836,  1846,  1851,
    1852,  1856,  1856,  1898,  1899,  1900,  1904,  1906,  1909,  1912,
    1915,  1918,  1921,  1924,  1927,  1930,  1933,  1936,  1942,  1992,
    1996,  2014,  2022,  2057,  2061,  2078,  2112,  2116,  2133,  2174,
    2177,  2218,  2222,  2263,  2267,  2306,  2347,  2351,  2397,  2441,
    2475,  2508,  2513,  2551,  2590,  2600,  2604,  2663,  2722,  2727,
    2794,  2859,  2898,  2903,  2904,  2905,  2940,  2974,  2978,  3014,
    3048,  3050,  3083,  3115,  3119,  3120,  3121,  3122,  3126,  3163,
    3201
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "','",
  "';'", "'<'", "'>'", "'~'", "'!'", "'?'", "':'", "'='", "RIGHT_OP",
  "LEFT_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "UNSIGNED_RIGHT", "UNSIGNED_RIGHT_ASSIGN", "integerLiteral",
  "stringLiteral", "nullLiteral", "characterLiteral", "textBlock",
  "booleanLiteral", "FloatingPointLiteral", "Identifier", "CONTINUE",
  "FOR", "NEW", "IF", "PACKAGE", "SYNCHRONIZED", "BOOLEAN", "PRIVATE",
  "THIS", "BREAK", "DOUBLE", "THROW", "BYTE", "ELSE", "PUBLIC", "RETURN",
  "INT", "SHORT", "CHAR", "FINAL", "STATIC", "VOID", "CLASS", "LONG",
  "FLOAT", "SUPER", "WHILE", "_", "YIELD", "eof", "INC_OP", "DEC_OP",
  "NEXT_QUAD", "S", "G", "A", "ChangeTable", "$accept", "Literal",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "Dims", "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclarations",
  "TopLevelClassOrInterfaceDeclaration", "PackageDeclaration",
  "ClassDeclaration", "Modifiers", "Modifier", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration", "FieldDeclaration",
  "VariableDeclaratorList", "VariableDeclarator", "Declarator",
  "MethodDeclaration", "MethodHeader", "VOID2", "MethodorConstrDeclarator",
  "SimpleName2", "VariableInitializer", "Dimsy", "FormalParameterList",
  "FormalParameter", "MethodBody", "StaticInitializer",
  "ConclassorDeclaration", "ConclassorBody",
  "ExplicitConclassorInvocation", "ArgumentListy", "comay", "ClassBodyy",
  "ArrayInitializer", "VariableInitializerList", "Block",
  "BlockStatements", "BlockStatement", "Declaration_list",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "LabeledStatement",
  "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IF_CODE", "$@1", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForHeader", "EnhancedForHeader", "ForInity", "Expressiony",
  "ForUpdatey", "ForInit", "ForUpdate", "StatementExpressionList",
  "BreakStatement", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement",
  "EXPR_CODE", "$@2", "N", "Primary", "PrimaryNoNewArray",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression",
  "ClassOrInterfaceTypeToInstantiate", "TypeArgumentsOrDiamondy",
  "ClassOrInterfaceTypeToInstant", "TypeArgumentsOrDiamond", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Expression",
  "AssignmentExpression", "Assignment", "$@4", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "GOTO_COND", "WRITE_GOTO",
  "ConditionalOrExpression", "GOTO_OR", "ConditionalAndExpression",
  "GOTO_AND", "InclusiveOrExpression", "ExclusiveOrExpression",
  "AndExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    40,    41,   123,   125,    91,    93,    46,
      43,    45,    42,    47,    37,    38,   124,    94,    44,    59,
      60,    62,   126,    33,    63,    58,    61,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322
};
# endif

#define YYPACT_NINF (-402)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-268)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,  -402,   -21,  -402,  -402,  -402,  -402,   -51,    42,   -40,
    -402,    17,    17,  -402,    -1,   166,  -402,   101,  -402,  -402,
      36,  -402,  -402,  -402,  -402,     0,  -402,   -21,  -402,   121,
      45,  -402,  -402,  -402,   121,   969,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,   138,  -402,  -402,  -402,   139,  -402,
    -402,  -402,   892,  -402,  -402,  -402,    29,   147,  -402,  -402,
      61,  -402,   228,   103,  -402,    30,  -402,   230,  -402,   139,
     147,   232,  -402,  -402,  -402,  -402,  -402,   185,  -402,   236,
    1301,   168,   111,  -402,  -402,   -35,  -402,     9,  -402,  -402,
    -402,  1010,  1246,  1374,  1374,  1374,  1374,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,   737,  -402,   262,  1374,  1374,  -402,
    1427,  -402,  -402,   264,   268,  -402,  -402,  1102,  1244,  -402,
    -402,  -402,  -402,  -402,  1372,  -402,   189,    50,   191,   250,
     195,   267,   273,   269,   118,    98,    72,   213,   127,  -402,
    -402,  -402,  -402,   157,  -402,  -402,  -402,   276,  -402,   282,
     288,  -402,    18,  -402,   931,   289,   291,  -402,  -402,   286,
     278,    32,  -402,  -402,  -402,  -402,  -402,  -402,   290,   295,
     296,   -21,  -402,  -402,  1374,  1374,    24,    24,  1374,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  1374,  -402,  -402,  1374,  -402,  1374,  1374,  1374,
    1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,  1374,
    1374,  1374,  1374,  1374,  1374,  -402,  -402,   293,   147,   105,
    -402,  1374,  1374,    19,  -402,  1374,  -402,     1,   302,  -402,
     304,    13,  1374,  1374,   308,  1374,   185,   292,  -402,  -402,
    -402,  -402,   279,  -402,  -402,  -402,  -402,   294,   227,  -402,
    -402,  -402,  -402,  1050,  1050,  -402,  -402,  -402,  -402,  -402,
    -402,    69,    89,  -402,  -402,  -402,   157,   171,   175,  1374,
    -402,  -402,  1301,   309,  1319,   311,   290,  -402,   -21,   299,
    1374,   319,   321,   306,  -402,   323,   -21,  -402,   324,  -402,
     325,  1374,  -402,   250,   267,   273,   269,   118,    98,    98,
      72,    72,    72,    72,   213,   213,   213,   127,   127,  -402,
    -402,  -402,   326,  -402,  -402,   293,   249,   252,   334,   336,
    -402,  -402,   327,  1187,   339,  1374,  -402,   331,   333,   337,
     266,   338,   341,   281,  -402,  -402,  1106,  -402,  -402,  -402,
    -402,  -402,   293,   352,  -402,  -402,  -402,   295,   350,  -402,
    -402,   369,  1374,  -402,  1374,  -402,  1374,  -402,  -402,   349,
    -402,  -402,  1007,   356,   357,  -402,   353,   362,   363,  -402,
    -402,  1374,   377,  -402,  -402,  -402,  -402,  -402,  1050,   380,
     361,  -402,  -402,   322,  -402,   301,  -402,  -402,  -402,  1106,
    1106,  -402,  -402,  -402,  -402,   121,   385,  -402,   387,   305,
    -402,  -402,  -402,  1374,  1392,  1374,   389,   138,   390,  1392,
    -402,   313,   875,   328,  1106,  -402,  -402,  -402,  -402,  -402,
    -402,  1374,   391,  -402,   379,  -402,  -402,  -402,   314,  -402,
    -402,   399,   378,  -402,  -402,   317,  1146,  1146,   318,  -402,
    -402,  -402,  1392,  1050,   402,   330,  1146,  1146,  1050,   343,
     403,  -402,  -402,  -402,   335,  -402,  -402,  -402,   340,  -402,
    1106,   409,   346,  1106,  -402,   348,   358,  -402,  1146,  1146
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      29,    32,     0,    39,    38,    41,    40,     0,     0,     0,
      28,    29,    29,    31,     0,    36,    24,     0,    22,    23,
       0,     1,    26,    30,    27,     0,    37,     0,    33,     0,
       0,    25,    43,    35,     0,     0,    34,    42,    10,    19,
      13,    15,    14,    17,    40,    62,    16,    18,     0,     9,
      11,    12,     0,    44,    45,    46,     0,     0,    47,    48,
       0,    75,    55,     0,    51,    53,    59,     0,    65,     0,
       0,     0,    74,    57,    73,    61,    92,     0,    50,     0,
       0,     0,     0,    58,    60,    92,    76,     0,    55,    52,
      56,     0,    83,     0,     0,     0,     0,     2,     6,     8,
       5,     7,     4,     3,     0,   168,     0,     0,     0,   167,
     265,    54,    67,   264,   165,   170,   174,   171,   172,   173,
     166,    66,   198,   199,     0,   200,     0,   219,     0,   223,
       0,   226,   229,   231,   233,   236,   241,   245,   248,   252,
     253,   254,   257,   260,   266,   267,   263,     0,    49,     0,
       0,    92,     0,    91,     0,     0,     0,    84,    89,     0,
      83,   265,   171,   172,   255,   256,   261,   262,     0,   181,
       0,     0,   258,   259,    81,     0,     0,     0,     0,   206,
     210,   211,   208,   207,   209,   212,   213,   215,   216,   217,
     214,   201,     0,   220,   224,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   269,    68,     0,     0,
      70,    81,    81,     0,    78,     0,   111,     0,     0,   129,
       0,     0,     0,   159,     0,     0,     0,    22,    97,   110,
      93,    94,     0,    95,    99,   100,   112,     0,     0,   101,
     102,   103,   104,     0,     0,   113,   118,   114,   115,   117,
     116,   170,   173,   122,   123,   124,     0,   125,   126,     0,
     169,    88,    84,     0,     0,     0,    68,   195,     0,   179,
      81,   185,     0,    82,   191,     0,     0,   175,   184,   176,
       0,     0,   221,   222,   225,   228,   230,   232,   234,   235,
     237,   238,   240,   239,   243,   242,   244,   246,   247,   249,
     250,   251,     0,    69,    64,    68,     0,     0,     0,     0,
      77,   157,     0,   142,     0,     0,   154,     0,     0,     0,
       0,     0,    98,     0,    96,   121,     0,   136,   137,   270,
      90,    87,    20,     0,   194,   193,   196,   181,     0,   178,
     180,     0,    81,   188,     0,   186,    81,   187,   202,     0,
      72,    63,     0,     0,     0,   156,   149,   151,     0,   143,
     148,     0,     0,   153,   160,   158,   162,   155,     0,     0,
      22,   131,   164,    99,   106,     0,   107,   108,   109,     0,
       0,    21,   197,   182,   183,    85,     0,   192,     0,     0,
      71,    79,    80,     0,     0,   144,     0,     0,     0,     0,
     119,     0,     0,     0,     0,   138,   139,    86,   177,   190,
     189,     0,     0,   152,     0,   145,   130,   161,     0,   163,
     162,     0,    22,   120,   105,     0,     0,     0,     0,   164,
     218,   141,   146,     0,     0,     0,     0,     0,     0,     0,
       0,   147,   150,   134,     0,   162,   164,   132,     0,   140,
       0,     0,     0,     0,   135,     0,     0,   133,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,  -402,   -29,  -402,  -402,  -402,  -147,     8,   -27,  -402,
    -402,  -402,   251,  -402,  -402,   261,    12,  -402,   -30,  -402,
    -402,  -402,   -64,   347,  -402,  -402,  -402,   366,    28,   205,
     -81,  -250,  -402,    66,  -402,  -402,  -402,  -402,  -402,  -214,
     270,  -402,   162,  -402,   -43,   -83,  -402,  -402,   117,    48,
    -102,  -142,  -402,  -402,  -402,  -314,  -140,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,   450,   458,  -402,  -402,  -402,
    -402,  -402,  -382,  -402,  -402,  -402,  -402,  -402,  -402,  -401,
    -402,  -399,  -402,  -402,    76,    88,  -402,  -402,    96,  -402,
     -44,   -24,   116,  -402,  -402,  -402,   170,    54,   153,   178,
    -402,  -402,  -402,    26,  -402,  -402,  -402,  -402,   253,  -402,
     254,   255,   256,   258,    65,    49,   -10,    58,   -77,   218,
     280,  -402,   320,   383,   423,  -402
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   218,    49,    50,    51,   313,   110,    18,    19,
       8,     9,    10,    11,    12,    13,    14,    15,    33,    35,
      53,    54,    63,    64,    65,    55,    56,    57,    66,    67,
     111,   314,   219,   220,    73,    58,    59,    86,   151,   282,
     159,   418,   112,   160,   239,    87,   240,   241,   242,   337,
     415,   434,   245,   384,   246,   247,   435,   324,   249,   250,
     386,   251,   387,   252,   388,   436,   437,   368,   424,   450,
     369,   451,   370,   255,   256,   257,   258,   259,   260,   408,
     409,   413,   113,   114,   115,   116,   170,   349,   279,   350,
     117,   118,   119,   283,   120,   276,   277,   284,   122,   123,
     291,   124,   191,   125,   126,   359,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    61,   152,     1,    36,    82,    48,   318,   319,   367,
      17,   158,   244,    74,   248,   153,   164,   165,   166,   167,
     321,   275,   423,    69,   224,   320,   345,    26,   149,   444,
     172,   173,   326,    16,    60,   174,     1,    79,    20,   175,
     449,   176,    21,     2,    22,   150,     3,    52,    72,   162,
     162,   162,   162,     4,   461,    16,    80,   462,     5,     6,
     452,     7,   155,   162,   162,   360,   351,    16,   223,   163,
     163,   163,   163,  -128,   193,   168,    25,   169,    16,     3,
      71,   286,   194,   163,   163,    75,     4,  -128,  -128,    30,
     367,     5,     6,  -127,     7,   429,   154,    83,    84,   207,
     208,   161,   161,   161,   161,   154,   154,  -127,  -127,   316,
      27,   244,   244,   248,   248,   161,   161,   209,   203,   204,
      28,    77,    78,   317,    29,   236,    32,   237,   367,    77,
     148,   205,   206,    34,   121,   309,   310,   311,   396,   212,
     213,   214,   398,    60,   281,   156,   121,   201,   202,    31,
     288,   162,    76,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   163,   332,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   340,   339,    62,   383,   391,   385,   304,   305,   306,
     322,    68,   243,   161,   327,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   210,   211,   162,   237,   237,     3,   285,
     261,   -65,   290,    81,   382,     4,   244,    85,   248,    88,
       5,     6,   215,   216,    90,   163,   292,   383,   383,   385,
     385,   347,   300,   301,   302,   303,  -266,  -266,   147,   169,
    -267,  -267,    23,    24,   287,   289,   298,   299,   307,   308,
     262,   171,   383,   177,   385,   178,   192,   161,   195,   156,
     217,   196,   197,   198,   200,   221,   328,   329,   416,   331,
     199,   222,   271,   269,   236,   270,   272,   274,   334,   280,
     312,   244,   338,   248,   278,   323,   244,   325,   248,   380,
     433,   330,   439,   335,   336,   341,    92,   333,   383,   348,
     385,   383,   352,   385,   354,   353,   121,   356,   343,   261,
     261,   355,   263,   357,   342,   416,   361,    38,   363,   362,
     364,    39,   371,    40,   433,   456,   365,    41,    42,    43,
     373,   237,   374,   376,    46,    47,   375,   377,   464,    77,
     392,   467,   380,   380,   427,   417,   464,   467,   378,   262,
     262,   394,   264,   395,   399,   401,   402,   162,   403,   372,
     404,   407,   405,   411,   381,   432,   412,   380,   414,   419,
    -105,   420,   421,   426,   428,   441,   438,   163,   442,   261,
     430,   443,   445,   446,   447,   448,   454,   459,   397,   432,
     432,   458,   261,   465,   466,   238,   237,   455,    70,   432,
     432,   237,   460,   315,    89,   406,   410,   463,   400,   161,
     273,   263,   263,   380,   265,   468,   380,   344,   338,   262,
     366,   432,   432,   393,   358,   469,   346,   440,   293,     0,
       0,   294,   262,   295,   261,   296,     0,   422,   297,   425,
       0,     0,   381,     0,     0,   261,   261,     0,     0,     0,
       0,   264,   264,     0,   266,     0,     0,     0,     0,     0,
     261,     0,     0,     0,     0,   261,     0,     0,   261,     0,
     261,   453,     0,     0,   262,     0,   457,     0,     0,     0,
       0,   263,     0,     0,     0,   262,   262,     0,   453,     0,
       0,   457,   261,   261,   263,     0,     0,     0,   261,   261,
     262,     0,   261,   261,   261,   262,     0,     0,   262,     0,
     262,     0,     0,   265,   265,     0,   261,   267,     0,   261,
       0,   264,     0,     0,   261,   261,     0,     0,     0,     0,
       0,     0,   262,   262,   264,     0,   263,     0,   262,   262,
       0,     0,   262,   262,   262,     0,     0,   263,   263,     0,
       0,     0,     0,   266,   266,     0,   262,   268,     0,   262,
       0,     0,   263,     0,   262,   262,     0,   263,     0,     0,
     263,     0,   263,     0,     0,     0,   264,     0,     0,     0,
       0,     0,     0,   265,   253,     0,     0,   264,   264,     0,
       0,     0,   254,     0,   263,   263,   265,     0,     0,     0,
     263,   263,   264,     0,   263,   263,   263,   264,     0,     0,
     264,     0,   264,     0,     0,     0,   267,   267,   263,     0,
       0,   263,     0,   266,     0,     0,   263,   263,     0,     0,
       0,     0,     0,     0,   264,   264,   266,     0,   265,     0,
     264,   264,     0,     0,   264,   264,   264,     0,     0,   265,
     265,     0,     0,     0,     0,     0,   268,   268,   264,     0,
       0,   264,     0,     0,   265,     0,   264,   264,     0,   265,
       0,     0,   265,     0,   265,     0,     0,     0,   266,     0,
       0,     0,     0,   253,   253,     0,   267,     0,     0,   266,
     266,   254,   254,     0,     0,     0,   265,   265,     0,   267,
       0,     0,   265,   265,   266,     0,   265,   265,   265,   266,
       0,     0,   266,     0,   266,     0,     0,     0,     0,     0,
     265,     0,     0,   265,     0,     0,   268,     0,   265,   265,
       0,     0,     0,     0,     0,     0,   266,   266,     0,   268,
       0,   267,   266,   266,     0,     0,   266,   266,   266,     0,
       0,     0,   267,   267,     0,     0,     0,     0,     0,     0,
     266,     0,     0,   266,     0,     0,   389,   267,   266,   266,
       0,    16,   267,     0,   390,   267,     0,   267,    38,     0,
       0,   268,    39,     0,    40,     0,     0,     0,    41,    42,
      43,     0,   268,   268,     0,    46,    47,     0,     0,   267,
     267,     0,     0,     0,     0,   267,   267,   268,   253,   267,
     267,   267,   268,     0,     0,   268,   254,   268,     0,   389,
     389,     0,     0,   267,     0,     0,   267,   390,   390,     0,
       0,   267,   267,     0,     0,     0,     0,     0,     0,   268,
     268,     0,     0,     0,   389,   268,   268,     0,     0,   268,
     268,   268,   390,     0,     0,     0,     0,     0,   225,     0,
      60,     0,     0,   268,     0,     0,   268,     0,     0,     0,
       0,   268,   268,   253,   226,     0,     0,     0,   253,     0,
       0,   254,     0,     0,     0,     0,   254,     0,     0,     0,
     389,     0,     0,   389,     0,     0,     0,     0,   390,     0,
       0,   390,    97,    98,    99,   100,   101,   102,   103,    16,
     227,   228,   104,   229,   225,   230,    60,     0,   105,   231,
       0,   232,     0,     0,     0,   233,    68,     0,     0,     0,
     226,     0,     0,    38,     0,   106,   431,    39,   235,    40,
     107,   108,   378,    41,    42,    43,     0,     0,    45,     0,
      46,    47,     0,     0,     0,    37,     0,     0,    97,    98,
      99,   100,   101,   102,   103,    16,   227,   228,   104,   229,
       0,   230,    38,     3,   105,   231,    39,   232,    40,     0,
       4,   233,    41,    42,    43,     5,     6,     0,     7,    46,
      47,   106,   234,    91,   235,     0,   107,   108,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     3,    95,    96,    39,     0,    40,     0,     4,     0,
      41,    42,    43,     5,    44,    45,     0,    46,    47,     0,
       0,     0,     0,   225,     0,    60,     0,    97,    98,    99,
     100,   101,   102,   103,    16,     0,     0,   104,    38,   226,
       0,    38,    39,   105,    40,    39,     0,    40,    41,    42,
      43,    41,    42,    43,     0,    46,    47,     0,    46,    47,
     106,     0,     0,     0,     0,   107,   108,    97,    98,    99,
     100,   101,   102,   103,    16,   227,   228,   104,   229,   225,
     230,    60,     0,   105,   231,     0,   232,     0,     0,     0,
     233,     0,     0,     0,     0,   226,     0,     0,  -204,     0,
     106,   234,     0,   235,     0,   107,   108,  -204,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,     0,  -204,   225,
       0,    60,     0,    97,    98,    99,   100,   101,   102,   103,
      16,   227,   228,   104,   229,   226,   230,     0,     0,   105,
     231,     0,   232,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   379,     0,   235,
     225,   107,   108,    97,    98,    99,   100,   101,   102,   103,
      16,   227,   228,   104,   229,     0,   230,     0,     0,   105,
     231,     0,   232,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   431,     0,   235,
       0,   107,   108,     0,    97,    98,    99,   100,   101,   102,
     103,    16,     0,     0,   104,     0,     0,     0,    38,    91,
     105,    92,    39,     0,    40,     0,    93,    94,    41,    42,
      43,     0,     0,     0,   157,    46,    47,   106,    95,    96,
    -205,     0,   107,   108,     0,     0,     0,     0,     0,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,     0,
    -205,     0,     0,    97,    98,    99,   100,   101,   102,   103,
      16,     0,     0,   104,    91,     0,    92,     0,     0,   105,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    95,    96,     0,   106,   342,     0,    93,
      94,   107,   108,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,     0,     0,     0,    97,    98,
      99,   100,   101,   102,   103,    16,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,    97,    98,    99,   100,
     101,   102,   103,    16,     0,     0,   104,    91,     0,     0,
       0,   106,   105,     0,    93,    94,   107,   108,     0,     0,
       0,     0,     0,     0,     0,   225,    95,    96,   179,   106,
       0,     0,     0,     0,   107,   108,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     0,   190,     0,
       0,    97,    98,    99,   100,   101,   102,   103,    16,     0,
     174,   104,     0,     0,   175,     0,   176,   105,     0,    97,
      98,    99,   100,   101,   102,   103,    16,     0,     0,   104,
       0,     0,     0,  -203,   106,   105,     0,     0,     0,   107,
     108,     0,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,   106,  -203,     0,     0,     0,   107,   108
};

static const yytype_int16 yycheck[] =
{
      27,    44,    85,    19,    34,    69,    35,   221,   222,   323,
       2,    92,   154,    56,   154,     6,    93,    94,    95,    96,
      19,   168,   404,    52,     6,     6,   276,    15,    63,   430,
     107,   108,    19,    54,     5,     3,    19,     7,    89,     7,
     439,     9,     0,    59,    84,    80,    62,    35,    19,    93,
      94,    95,    96,    69,   455,    54,    26,   456,    74,    75,
     442,    77,    91,   107,   108,   315,   280,    54,   151,    93,
      94,    95,    96,     4,    24,   104,    77,   104,    54,    62,
      52,    57,    32,   107,   108,    57,    69,    18,    19,    89,
     404,    74,    75,     4,    77,   409,    87,    69,    70,    27,
      28,    93,    94,    95,    96,    87,    87,    18,    19,     4,
       9,   253,   254,   253,   254,   107,   108,    45,    20,    21,
      19,    18,    19,    18,    88,   154,     5,   154,   442,    18,
      19,    33,    34,    88,    80,   212,   213,   214,   352,    12,
      13,    14,   356,     5,   171,    91,    92,    29,    30,   176,
     177,   195,    91,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   195,   236,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   272,   269,    54,   336,   342,   336,   207,   208,   209,
     227,    54,   154,   195,   231,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    10,    11,   269,   253,   254,    62,   175,
     154,     3,   178,     3,   336,    69,   378,     5,   378,    54,
      74,    75,    85,    86,     8,   269,   192,   389,   390,   389,
     390,   278,   203,   204,   205,   206,    85,    86,    90,   286,
      85,    86,    11,    12,   176,   177,   201,   202,   210,   211,
     154,     9,   414,     9,   414,     7,    87,   269,    87,   225,
       4,    31,    87,    16,    15,     3,   232,   233,   390,   235,
      17,     3,     6,     4,   323,     4,    18,     7,    19,     3,
       7,   443,   254,   443,     9,     3,   448,     3,   448,   336,
     412,     3,   414,    19,    87,     6,     5,    25,   460,    20,
     460,   463,     3,   463,    18,     4,   272,     3,   274,   253,
     254,     8,   154,     8,     8,   437,    87,    61,     4,    87,
       4,    65,     3,    67,   446,   447,    19,    71,    72,    73,
      19,   378,    19,    87,    78,    79,    19,    19,   460,    18,
       8,   463,   389,   390,   407,   395,   468,   469,    87,   253,
     254,    21,   154,     4,    25,    19,    19,   421,    25,   325,
      18,     4,    19,     3,   336,   412,    25,   414,    87,     4,
      68,     4,    87,     4,     4,     4,    68,   421,    19,   323,
      87,    87,     3,    25,    87,    87,     4,     4,   354,   436,
     437,    68,   336,     4,    68,   154,   443,    87,    52,   446,
     447,   448,    87,   218,    77,   371,   378,    87,   362,   421,
     160,   253,   254,   460,   154,    87,   463,   275,   390,   323,
     323,   468,   469,   347,   291,    87,   276,   421,   195,    -1,
      -1,   197,   336,   198,   378,   199,    -1,   403,   200,   405,
      -1,    -1,   414,    -1,    -1,   389,   390,    -1,    -1,    -1,
      -1,   253,   254,    -1,   154,    -1,    -1,    -1,    -1,    -1,
     404,    -1,    -1,    -1,    -1,   409,    -1,    -1,   412,    -1,
     414,   443,    -1,    -1,   378,    -1,   448,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,   389,   390,    -1,   460,    -1,
      -1,   463,   436,   437,   336,    -1,    -1,    -1,   442,   443,
     404,    -1,   446,   447,   448,   409,    -1,    -1,   412,    -1,
     414,    -1,    -1,   253,   254,    -1,   460,   154,    -1,   463,
      -1,   323,    -1,    -1,   468,   469,    -1,    -1,    -1,    -1,
      -1,    -1,   436,   437,   336,    -1,   378,    -1,   442,   443,
      -1,    -1,   446,   447,   448,    -1,    -1,   389,   390,    -1,
      -1,    -1,    -1,   253,   254,    -1,   460,   154,    -1,   463,
      -1,    -1,   404,    -1,   468,   469,    -1,   409,    -1,    -1,
     412,    -1,   414,    -1,    -1,    -1,   378,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   154,    -1,    -1,   389,   390,    -1,
      -1,    -1,   154,    -1,   436,   437,   336,    -1,    -1,    -1,
     442,   443,   404,    -1,   446,   447,   448,   409,    -1,    -1,
     412,    -1,   414,    -1,    -1,    -1,   253,   254,   460,    -1,
      -1,   463,    -1,   323,    -1,    -1,   468,   469,    -1,    -1,
      -1,    -1,    -1,    -1,   436,   437,   336,    -1,   378,    -1,
     442,   443,    -1,    -1,   446,   447,   448,    -1,    -1,   389,
     390,    -1,    -1,    -1,    -1,    -1,   253,   254,   460,    -1,
      -1,   463,    -1,    -1,   404,    -1,   468,   469,    -1,   409,
      -1,    -1,   412,    -1,   414,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,   253,   254,    -1,   323,    -1,    -1,   389,
     390,   253,   254,    -1,    -1,    -1,   436,   437,    -1,   336,
      -1,    -1,   442,   443,   404,    -1,   446,   447,   448,   409,
      -1,    -1,   412,    -1,   414,    -1,    -1,    -1,    -1,    -1,
     460,    -1,    -1,   463,    -1,    -1,   323,    -1,   468,   469,
      -1,    -1,    -1,    -1,    -1,    -1,   436,   437,    -1,   336,
      -1,   378,   442,   443,    -1,    -1,   446,   447,   448,    -1,
      -1,    -1,   389,   390,    -1,    -1,    -1,    -1,    -1,    -1,
     460,    -1,    -1,   463,    -1,    -1,   336,   404,   468,   469,
      -1,    54,   409,    -1,   336,   412,    -1,   414,    61,    -1,
      -1,   378,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    -1,   389,   390,    -1,    78,    79,    -1,    -1,   436,
     437,    -1,    -1,    -1,    -1,   442,   443,   404,   378,   446,
     447,   448,   409,    -1,    -1,   412,   378,   414,    -1,   389,
     390,    -1,    -1,   460,    -1,    -1,   463,   389,   390,    -1,
      -1,   468,   469,    -1,    -1,    -1,    -1,    -1,    -1,   436,
     437,    -1,    -1,    -1,   414,   442,   443,    -1,    -1,   446,
     447,   448,   414,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,   460,    -1,    -1,   463,    -1,    -1,    -1,
      -1,   468,   469,   443,    19,    -1,    -1,    -1,   448,    -1,
      -1,   443,    -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,
     460,    -1,    -1,   463,    -1,    -1,    -1,    -1,   460,    -1,
      -1,   463,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     3,    60,     5,    -1,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    54,    -1,    -1,    -1,
      19,    -1,    -1,    61,    -1,    80,    81,    65,    83,    67,
      85,    86,    87,    71,    72,    73,    -1,    -1,    76,    -1,
      78,    79,    -1,    -1,    -1,     6,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,     3,    83,    -1,    85,    86,    -1,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    22,    23,    65,    -1,    67,    -1,    69,    -1,
      71,    72,    73,    74,    75,    76,    -1,    78,    79,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    61,    19,
      -1,    61,    65,    63,    67,    65,    -1,    67,    71,    72,
      73,    71,    72,    73,    -1,    78,    79,    -1,    78,    79,
      80,    -1,    -1,    -1,    -1,    85,    86,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
      60,     5,    -1,    63,    64,    -1,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    19,    -1,    -1,    26,    -1,
      80,    81,    -1,    83,    -1,    85,    86,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,     3,
      -1,     5,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    19,    60,    -1,    -1,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
       3,    85,    86,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    -1,    -1,    63,
      64,    -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    83,
      -1,    85,    86,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    61,     3,
      63,     5,    65,    -1,    67,    -1,    10,    11,    71,    72,
      73,    -1,    -1,    -1,    18,    78,    79,    80,    22,    23,
      26,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,     3,    -1,     5,    -1,    -1,    63,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    22,    23,    -1,    80,     8,    -1,    10,
      11,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,     3,    -1,    -1,
      -1,    80,    63,    -1,    10,    11,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    22,    23,    26,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
       3,    57,    -1,    -1,     7,    -1,     9,    63,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    57,
      -1,    -1,    -1,    26,    80,    63,    -1,    -1,    -1,    85,
      86,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    80,    46,    -1,    -1,    -1,    85,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    59,    62,    69,    74,    75,    77,   102,   103,
     104,   105,   106,   107,   108,   109,    54,    99,   100,   101,
      89,     0,    84,   104,   104,    77,   108,     9,    19,    88,
      89,   100,     5,   110,    88,   111,   110,     6,    61,    65,
      67,    71,    72,    73,    75,    76,    78,    79,    94,    95,
      96,    97,   108,   112,   113,   117,   118,   119,   127,   128,
       5,   136,    54,   114,   115,   116,   120,   121,    54,    94,
     119,   120,    19,   126,   136,   120,    91,    18,    19,     7,
      26,     3,   114,   120,   120,     5,   129,   137,    54,   115,
       8,     3,     5,    10,    11,    22,    23,    47,    48,    49,
      50,    51,    52,    53,    57,    63,    80,    85,    86,    93,
      99,   122,   134,   174,   175,   176,   177,   182,   183,   184,
     186,   189,   190,   191,   193,   195,   196,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,    90,    19,    63,
      80,   130,   137,     6,    87,    94,   189,    18,   122,   132,
     135,    99,   182,   183,   210,   210,   210,   210,    94,   100,
     178,     9,   210,   210,     3,     7,     9,     9,     7,    26,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      46,   194,    87,    24,    32,    87,    31,    87,    16,    17,
      15,    29,    30,    20,    21,    33,    34,    27,    28,    45,
      10,    11,    12,    13,    14,    85,    86,     4,    94,   124,
     125,     3,     3,   137,     6,     3,    19,    55,    56,    58,
      60,    64,    66,    70,    81,    83,    94,   100,   107,   136,
     138,   139,   140,   141,   143,   144,   146,   147,   148,   150,
     151,   153,   155,   157,   158,   165,   166,   167,   168,   169,
     170,   176,   184,   191,   211,   212,   214,   215,   216,     4,
       4,     6,    18,   132,     7,    98,   187,   188,     9,   180,
       3,   100,   131,   185,   189,   189,    57,   177,   100,   177,
     189,   192,   189,   200,   202,   203,   204,   205,   206,   206,
     207,   207,   207,   207,   208,   208,   208,   209,   209,   210,
     210,   210,     7,    98,   123,   121,     4,    18,   131,   131,
       6,    19,   100,     3,   149,     3,    19,   100,   189,   189,
       3,   189,   114,    25,    19,    19,    87,   141,   141,   210,
     122,     6,     8,   189,   134,   123,   188,   100,    20,   179,
     181,   131,     3,     4,    18,     8,     3,     8,   190,   197,
     123,    87,    87,     4,     4,    19,   140,   147,   159,   162,
     164,     3,   189,    19,    19,    19,    87,    19,    87,    81,
     100,   141,   142,   143,   145,   148,   152,   154,   156,   157,
     158,    98,     8,   180,    21,     4,   131,   189,   131,    25,
     125,    19,    19,    25,    18,    19,   189,     4,   171,   172,
     141,     3,    25,   173,    87,   142,   142,   110,   133,     4,
       4,    87,   189,   164,   160,   189,     4,   136,     4,   147,
      87,    81,   100,   142,   143,   148,   157,   158,    68,   142,
     195,     4,    19,    87,   171,     3,    25,    87,    87,   173,
     161,   163,   164,   141,     4,    87,   142,   141,    68,     4,
      87,   171,   173,    87,   142,     4,    68,   142,    87,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   101,   102,   103,   103,   104,
     104,   105,   105,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   110,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   118,
     118,   118,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   126,   126,   127,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   138,   139,   139,   140,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     145,   146,   147,   147,   147,   147,   147,   147,   147,   149,
     148,   150,   151,   152,   153,   154,   155,   155,   156,   156,
     157,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   164,   164,   165,   165,   166,   167,   167,   168,   168,
     169,   170,   172,   171,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   176,   177,   178,   179,
     179,   180,   180,   181,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   189,   190,
     190,   192,   191,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   195,   195,
     196,   197,   198,   198,   199,   200,   200,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   205,   206,   206,   206,
     206,   206,   207,   207,   207,   207,   208,   208,   208,   209,
     209,   209,   209,   210,   210,   210,   210,   210,   211,   212,
     213,   213,   213,   213,   214,   214,   214,   214,   215,   216,
     217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     3,     2,     2,     1,     0,
       2,     1,     1,     3,     5,     4,     1,     2,     1,     1,
       1,     1,     3,     0,     2,     1,     1,     1,     1,     4,
       3,     1,     3,     1,     3,     1,     3,     2,     3,     2,
       3,     2,     1,     6,     5,     1,     1,     1,     0,     1,
       1,     4,     3,     1,     1,     2,     3,     4,     3,     5,
       5,     0,     1,     0,     1,     0,     1,     4,     3,     1,
       3,     4,     0,     3,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     7,     7,     7,     7,     2,     2,     2,     2,
       8,     6,     0,     1,     0,     1,     0,     1,     1,     1,
       1,     1,     3,     3,     2,     3,     3,     2,     3,     1,
       3,     5,     0,     2,     0,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     3,     6,     3,     0,
       1,     0,     3,     2,     3,     3,     4,     4,     4,     6,
       6,     1,     3,     4,     4,     1,     2,     3,     1,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     1,
       2,     0,     3,     1,     2,     3,     1,     2,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       4
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
#line 81 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("int");
        (yyval.ptr)->intVal = stoi(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2024 "parser.cpp"
    break;

  case 3:
#line 88 "parser.y++"
                           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("float");
        (yyval.ptr)->realVal = stod(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2036 "parser.cpp"
    break;

  case 4:
#line 95 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("boolean");
        if(string((yyvsp[0].str)) == "true") (yyval.ptr)->intVal = 1;
        else (yyval.ptr)->intVal = 0;
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2050 "parser.cpp"
    break;

  case 5:
#line 104 "parser.y++"
                       {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("char");
        (yyval.ptr)->intVal = char_int(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2062 "parser.cpp"
    break;

  case 6:
#line 111 "parser.y++"
                    {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("string");
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2074 "parser.cpp"
    break;

  case 7:
#line 118 "parser.y++"
                {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("textblock");
        (yyval.ptr)->tbval = (yyvsp[0].str);
        (yyval.ptr)->expType = 4;
    }
#line 2085 "parser.cpp"
    break;

  case 8:
#line 124 "parser.y++"
                  {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("null");
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 2096 "parser.cpp"
    break;

  case 9:
#line 134 "parser.y++"
                  {
        type = (yyvsp[0].ptr)->type;
        (yyval.ptr) = (yyvsp[0].ptr);}
#line 2104 "parser.cpp"
    break;

  case 10:
#line 137 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type = (yyvsp[0].str);
        (yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2116 "parser.cpp"
    break;

  case 11:
#line 148 "parser.y++"
                   {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2124 "parser.cpp"
    break;

  case 12:
#line 151 "parser.y++"
                        {
        (yyval.ptr) = (yyvsp[0].ptr) ;
    }
#line 2132 "parser.cpp"
    break;

  case 13:
#line 157 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);

    }
#line 2146 "parser.cpp"
    break;

  case 14:
#line 166 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2159 "parser.cpp"
    break;

  case 15:
#line 174 "parser.y++"
          {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2172 "parser.cpp"
    break;

  case 16:
#line 182 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2185 "parser.cpp"
    break;

  case 17:
#line 190 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2198 "parser.cpp"
    break;

  case 18:
#line 201 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2211 "parser.cpp"
    break;

  case 19:
#line 209 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2224 "parser.cpp"
    break;

  case 20:
#line 220 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
		(yyval.ptr)->expType = 2;
        (yyval.ptr)->type = "*";

    }
#line 2240 "parser.cpp"
    break;

  case 21:
#line 231 "parser.y++"
                 {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
        if(!(yyvsp[0].ptr)->is_error){
            (yyval.ptr)->expType = 2;
            (yyval.ptr)->type = (yyvsp[0].ptr)->type + "*";
        }
        else {
            (yyval.ptr)->is_error = 1;
        }
    }
#line 2261 "parser.cpp"
    break;

  case 22:
#line 252 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2267 "parser.cpp"
    break;

  case 23:
#line 253 "parser.y++"
                  {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2273 "parser.cpp"
    break;

  case 24:
#line 256 "parser.y++"
               {
        (yyval.ptr)=makeleaf((yyvsp[0].str));

        // Semantics
		string temp = primaryExpression(string((yyvsp[0].str)));  
		// if type is there in the symbol table then this means the variable is already declared
		if(temp == ""){
			yyerror(("Undeclared Identifier " + string((yyvsp[0].str))).c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			if(temp.substr(0, 5) == "FUNC_"){
				(yyval.ptr)->expType = 3;
			}
			else if(temp.back() == '*'){
				(yyval.ptr)->expType = 2; 
			}
			else (yyval.ptr)->expType = 1;

			if(temp.substr(0,5)=="FUNC_" && temp.back() == '#'){
				temp.pop_back();
				(yyval.ptr)->type = temp;
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 

                // --3AC 
				(yyval.ptr)->nextlist.clear();
			}
			else{

				(yyval.ptr)->type = temp;
				(yyval.ptr)->isInit = lookup(string((yyvsp[0].str)))->init;
				(yyval.ptr)->size = getSize(temp);
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 
				
				//--3AC
				(yyval.ptr)->place = qid(string((yyvsp[0].str)), lookup(string((yyvsp[0].str))));
				(yyval.ptr)->nextlist.clear();

			}
		}
    }
#line 2319 "parser.cpp"
    break;

  case 25:
#line 299 "parser.y++"
                        {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Name.id", v);

        //Semantics
		if(!(yyvsp[-2].ptr)->is_error && (yyvsp[-2].ptr)->expType!=4){
			string temp = string((yyvsp[0].ptr)->tempName);
			int ret = findTypeAttr((yyvsp[-2].ptr)->type,temp);
			if(ret == -1){
				yyerror(("Class " + (yyvsp[-2].ptr)->node_name + " not defined").c_str());
				(yyval.ptr)->is_error = 1;
			}
			else if (ret == 0){
				yyerror(("Class " + (yyvsp[-2].ptr)->type.substr(6, (yyvsp[-2].ptr)->type.length()-6) + " has no member " + string((yyvsp[0].ptr)->tempName)).c_str());
				(yyval.ptr)->is_error = 1;
			}
			else{
				(yyval.ptr)->type = StructAttrType((yyvsp[-2].ptr)->type, temp);
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + "." + temp;
				
				qid temp_var = newtemp((yyval.ptr)->type);
				sym_entry* attr_sym = retTypeAttrEntry((yyvsp[-2].ptr)->type, string((yyvsp[0].ptr)->tempName), (yyvsp[-2].ptr)->tempName);
				emit(qid("member_access", NULL), (yyvsp[-2].ptr)->place, qid(string((yyvsp[0].ptr)->tempName), attr_sym), temp_var, -1);
				temp_var.second->array_dims = attr_sym->array_dims;
				(yyval.ptr)->place = temp_var;
			}
		}
		else{
			if((yyvsp[-2].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 2361 "parser.cpp"
    break;

  case 26:
#line 340 "parser.y++"
                                  {
        cout << "in compile unit\n";
        vector<data> v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
        (yyval.ptr) = makenode("CompilationUnit",v);

        //  Semantics
        if(((yyvsp[-1].ptr)->is_error )){
            (yyval.ptr)->is_error = 1;
        }

        // ...
    }
#line 2380 "parser.cpp"
    break;

  case 27:
#line 357 "parser.y++"
                                                              {
        vector<data> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Ordinary_Compilation_Unit",v);

        //  Semantics
        if(((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
            (yyval.ptr)->is_error = 1;
        }

        //  ...
    }
#line 2398 "parser.cpp"
    break;

  case 28:
#line 370 "parser.y++"
                                           {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2406 "parser.cpp"
    break;

  case 29:
#line 376 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2412 "parser.cpp"
    break;

  case 30:
#line 377 "parser.y++"
                                                                               {
        cout << "TopLevelClassOrInterfaceDeclarations\n";
        vector<data> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Top_level_class_or_interface_declarations",v);

        //  Semantics
		if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 2429 "parser.cpp"
    break;

  case 31:
#line 392 "parser.y++"
                       { (yyval.ptr) = (yyvsp[0].ptr);}
#line 2435 "parser.cpp"
    break;

  case 32:
#line 393 "parser.y++"
         {
        (yyval.ptr) = makeleaf(";");
    }
#line 2443 "parser.cpp"
    break;

  case 33:
#line 399 "parser.y++"
                       {
        vector<data> v;
		insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
		(yyval.ptr) = makenode("Package_declaration",v);

        // Semantics
        if(!(yyvsp[-1].ptr)->is_error){
            insertSymbol(*curr_table, (yyvsp[-2].str), (yyvsp[-1].ptr)->tempName, 0, 0, NULL);
        }
        else{
            (yyval.ptr)->is_error = 1;
        }
    }
#line 2463 "parser.cpp"
    break;

  case 34:
#line 419 "parser.y++"
                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error) {
			if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
				printStructTable("class_" + string((yyvsp[-2].ptr)->tempName));
				type = "class_" + string((yyvsp[-2].ptr)->tempName);
				(yyval.ptr)->type = type;
			}
			else {
				yyerror(("redefinition of " + string((yyvsp[-2].ptr)->tempName)).c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 2492 "parser.cpp"
    break;

  case 35:
#line 443 "parser.y++"
                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error) {
			if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
				printStructTable("class_" + string((yyvsp[-2].ptr)->type));
				type = string("class_" + string((yyvsp[-2].ptr)->tempName));
				(yyval.ptr)->type = type;
			}
			else {
				yyerror(("redefinition of " + string((yyvsp[-2].ptr)->tempName)).c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 2519 "parser.cpp"
    break;

  case 36:
#line 468 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2525 "parser.cpp"
    break;

  case 37:
#line 469 "parser.y++"
                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("modifier",v);

        //  Semantics
		if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
        else{
            (yyval.ptr)->type = string((yyvsp[-1].ptr)->type + "_" + (yyvsp[0].ptr)->type);
        }
    }
#line 2544 "parser.cpp"
    break;

  case 38:
#line 486 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "public";
    }
#line 2553 "parser.cpp"
    break;

  case 39:
#line 490 "parser.y++"
            {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "private";
    }
#line 2562 "parser.cpp"
    break;

  case 40:
#line 494 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "static";
    }
#line 2571 "parser.cpp"
    break;

  case 41:
#line 498 "parser.y++"
          {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "final";
    }
#line 2580 "parser.cpp"
    break;

  case 42:
#line 505 "parser.y++"
                                    {
        (yyval.ptr) = (yyvsp[-1].ptr);
    }
#line 2588 "parser.cpp"
    break;

  case 43:
#line 511 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2594 "parser.cpp"
    break;

  case 44:
#line 512 "parser.y++"
                                                {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Class_Body_Declarations",v);

        // Semantics
        (yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2608 "parser.cpp"
    break;

  case 45:
#line 524 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2614 "parser.cpp"
    break;

  case 46:
#line 525 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2620 "parser.cpp"
    break;

  case 47:
#line 526 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2626 "parser.cpp"
    break;

  case 48:
#line 527 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2632 "parser.cpp"
    break;

  case 49:
#line 531 "parser.y++"
                                                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
		type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-3].ptr)->is_error || (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error;

    }
#line 2652 "parser.cpp"
    break;

  case 50:
#line 546 "parser.y++"
                                               {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
        type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error;
		
    }
#line 2671 "parser.cpp"
    break;

  case 51:
#line 564 "parser.y++"
                         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2679 "parser.cpp"
    break;

  case 52:
#line 567 "parser.y++"
                                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator_List",v);

        //  Semantics
        (yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error; 
    }
#line 2694 "parser.cpp"
    break;

  case 53:
#line 580 "parser.y++"
                 {
        (yyval.ptr) = (yyvsp[0].ptr);

		// Semantics
		if (insertStructAttr((yyvsp[0].ptr)->tempName, (yyvsp[0].ptr)->type, (yyvsp[0].ptr)->size, 0) != 1){
			yyerror(("The Attribute " + string((yyvsp[0].ptr)->tempName) + " is already declared in the same class").c_str());
			(yyval.ptr)->is_error = 1;
		} 
    }
#line 2708 "parser.cpp"
    break;

  case 54:
#line 589 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr)=makenode("=",v);

        // Semantics
        if(assignExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,"=") == ""){
            yyerror("Incorrect type assignment\n");
            (yyval.ptr)->is_error = 1;
        }
		if (insertStructAttr((yyvsp[-2].ptr)->tempName, (yyvsp[-2].ptr)->type, (yyvsp[-2].ptr)->size, 1) != 1){
			yyerror(("The Attribute " + string((yyvsp[-2].ptr)->tempName) + " is already declared in the same class").c_str());
			(yyval.ptr)->is_error = 1;
		} 
    }
#line 2729 "parser.cpp"
    break;

  case 55:
#line 608 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

		// Semantics
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Unspecified type of the identifier\n");
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
    }
#line 2750 "parser.cpp"
    break;

  case 56:
#line 624 "parser.y++"
                         {
        vector<data> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, NULL, "[ ]", 0);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
		if(!(yyvsp[-2].ptr)->is_error){
			if((yyvsp[-2].ptr)->expType <=2 ) {
				(yyval.ptr)->expType = 2;
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type + "*";
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName;
				(yyval.ptr)->size = 4;	
				(yyval.ptr)->intVal = 8;

				//3AC
				(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
				array_dims.push_back(0);
				isArray = 1;
			}
			else {
				yyerror(( (yyvsp[-2].ptr)->tempName + " declared as function returning an array").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else (yyval.ptr)->is_error = 1;
    }
#line 2782 "parser.cpp"
    break;

  case 57:
#line 654 "parser.y++"
                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_declaration",v);

        // Semantics
        (yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2796 "parser.cpp"
    break;

  case 58:
#line 665 "parser.y++"
                                                     {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2814 "parser.cpp"
    break;

  case 59:
#line 678 "parser.y++"
                                           {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2831 "parser.cpp"
    break;

  case 60:
#line 690 "parser.y++"
                                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2849 "parser.cpp"
    break;

  case 61:
#line 703 "parser.y++"
                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2866 "parser.cpp"
    break;

  case 62:
#line 718 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2879 "parser.cpp"
    break;

  case 63:
#line 729 "parser.y++"
                                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-5].ptr),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.ptr) = makenode("Methdod_declarator",v);

		// Semantics
		if(!(yyvsp[-5].ptr)->is_error && !(yyvsp[-2].ptr)->is_error){
			if((yyvsp[-5].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-5].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = (yyvsp[-5].ptr)->type;
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-5].ptr)->tempName);
				if(temp.size() == 1 && temp[0] == "#NO_FUNC"){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					funcArgs.clear();
					funcName = string((yyvsp[-5].ptr)->tempName);
					funcType = (yyvsp[-5].ptr)->type;

					//3AC
					(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
					backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
					emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
				}
				else{
					// Check if temp is correct
					if(temp == funcArgs){
						funcArgs.clear();
						funcName = string((yyvsp[-5].ptr)->tempName);
						funcType = (yyvsp[-5].ptr)->type;

						//3AC
						(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
						backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
						emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
					}
					else {
						yyerror(("Conflicting types for function " + (yyvsp[-5].ptr)->tempName).c_str());
						(yyval.ptr)->is_error = 1;
					}
				}
			}
			else {
				if((yyvsp[-5].ptr)->expType == 2){
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as function of function").c_str());
				}
				(yyval.ptr)->is_error = 1;
			}
		}
		else (yyval.ptr)->is_error =1;
	}
#line 2942 "parser.cpp"
    break;

  case 64:
#line 787 "parser.y++"
                                      {
		vector<data> v;
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, NULL, "( )", 0);
        if((yyvsp[0].ptr) != NULL) insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
		if(!(yyvsp[-4].ptr)->is_error){
			if((yyvsp[-4].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-4].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = (yyvsp[-4].ptr)->type;
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-4].ptr)->tempName);
				if((temp.size() == 1 && temp[0] == "#NO_FUNC") || funcArgs == temp){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					funcArgs.clear();
					funcName = string((yyvsp[-4].ptr)->tempName);
					funcType = (yyvsp[-4].ptr)->type;
				}
				else {
					yyerror(("Conflicting types for function " + (yyvsp[-4].ptr)->tempName).c_str());
					(yyval.ptr)->is_error = 1;
				}
				//3AC
				(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
				emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
			}
			else {
				if((yyvsp[-4].ptr)->expType == 2){
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as function of function").c_str());
				}
				(yyval.ptr)->is_error = 1;
			}
		}
		else (yyval.ptr)->is_error = 1;
	}
#line 2989 "parser.cpp"
    break;

  case 65:
#line 832 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Undeclared Type\n");
            (yyval.ptr)->is_error = 1;
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
    }
#line 3011 "parser.cpp"
    break;

  case 66:
#line 852 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3017 "parser.cpp"
    break;

  case 67:
#line 853 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3023 "parser.cpp"
    break;

  case 68:
#line 857 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3029 "parser.cpp"
    break;

  case 69:
#line 858 "parser.y++"
           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3035 "parser.cpp"
    break;

  case 70:
#line 862 "parser.y++"
                      {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3043 "parser.cpp"
    break;

  case 71:
#line 865 "parser.y++"
                                                        {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter_list",v);

        // Semantics
        if(!(yyvsp[-3].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			// 3AC
			backpatch((yyvsp[-3].ptr)->nextlist, (yyvsp[-1].ind));
			(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		}
		else (yyval.ptr)->is_error = 1;;
    }
#line 3063 "parser.cpp"
    break;

  case 72:
#line 884 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter",v);

        // Semantics
        if((yyvsp[0].ptr) != NULL){
            (yyvsp[-1].ptr)->type = string((yyvsp[-1].ptr)->type + (yyvsp[0].ptr)->type );
            (yyvsp[-1].ptr)->expType = 2;
        }
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[-1].ptr)->is_error){
			type_delim = 0;
			type = "";
			if((yyvsp[-1].ptr)->expType == 1 || (yyvsp[-1].ptr)->expType == 2) {
				if(currLookup((yyvsp[-1].ptr)->tempName)) {
					yyerror(("Redeclaration of Parameter " + (yyvsp[-1].ptr)->tempName).c_str());
					(yyval.ptr)->is_error = 1;
				}
				else {
					paramInsert(*curr_table, (yyvsp[-1].ptr)->tempName, (yyvsp[-1].ptr)->type, (yyvsp[-1].ptr)->size, true, NULL);
				}
				funcArgs.push_back((yyvsp[-1].ptr)->type);
			}
		}
		else (yyval.ptr)->is_error = 1;
    }
#line 3096 "parser.cpp"
    break;

  case 73:
#line 916 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3102 "parser.cpp"
    break;

  case 74:
#line 917 "parser.y++"
          {(yyval.ptr)=makeleaf(";");}
#line 3108 "parser.cpp"
    break;

  case 75:
#line 921 "parser.y++"
                   {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("StaticInitilizer",v);

        (yyval.ptr)->is_error = (yyvsp[0].ptr)->is_error;
    }
#line 3121 "parser.cpp"
    break;

  case 76:
#line 932 "parser.y++"
                                                        {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Conclassor_declaration",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 3139 "parser.cpp"
    break;

  case 77:
#line 948 "parser.y++"
                                                           {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Conclassor_body",v);
    }
#line 3152 "parser.cpp"
    break;

  case 78:
#line 956 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Conclassor_body",v);
    }
#line 3164 "parser.cpp"
    break;

  case 79:
#line 966 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConclassorInvocation",v);


    }
#line 3180 "parser.cpp"
    break;

  case 80:
#line 977 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConclassorInvocation",v);


    }
#line 3196 "parser.cpp"
    break;

  case 81:
#line 991 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3202 "parser.cpp"
    break;

  case 82:
#line 992 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3208 "parser.cpp"
    break;

  case 83:
#line 997 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3214 "parser.cpp"
    break;

  case 84:
#line 998 "parser.y++"
          {(yyval.ptr)=makeleaf(",");}
#line 3220 "parser.cpp"
    break;

  case 85:
#line 1002 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3226 "parser.cpp"
    break;

  case 86:
#line 1003 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3232 "parser.cpp"
    break;

  case 87:
#line 1009 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 3245 "parser.cpp"
    break;

  case 88:
#line 1017 "parser.y++"
                  {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 3257 "parser.cpp"
    break;

  case 89:
#line 1027 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3263 "parser.cpp"
    break;

  case 90:
#line 1028 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("VariableInitializerList", v);
    }
#line 3275 "parser.cpp"
    break;

  case 91:
#line 1041 "parser.y++"
                                        {
        (yyval.ptr) =(yyvsp[-1].ptr);
        
        if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
			func_flag--;
		}
    }
#line 3293 "parser.cpp"
    break;

  case 92:
#line 1057 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3299 "parser.cpp"
    break;

  case 93:
#line 1058 "parser.y++"
                                               {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("BlockStatements", v);

        if((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-2].ptr)->nextlist, (yyvsp[-1].ind));
        (yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;

        backpatch((yyvsp[-2].ptr)->nextlist, (yyvsp[-1].ind));
        (yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyvsp[-2].ptr)->caselist.insert((yyvsp[-2].ptr)->caselist.end(), (yyvsp[0].ptr)->caselist.begin(), (yyvsp[0].ptr)->caselist.end());
        (yyval.ptr)->caselist = (yyvsp[-2].ptr)->caselist;
		(yyvsp[-2].ptr)->continuelist.insert((yyvsp[-2].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyvsp[-2].ptr)->breaklist.insert((yyvsp[-2].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        (yyval.ptr)->continuelist = (yyvsp[-2].ptr)->continuelist;
        (yyval.ptr)->breaklist = (yyvsp[-2].ptr)->breaklist;

    }
#line 3327 "parser.cpp"
    break;

  case 94:
#line 1084 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3333 "parser.cpp"
    break;

  case 95:
#line 1085 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3339 "parser.cpp"
    break;

  case 96:
#line 1089 "parser.y++"
                                   {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3345 "parser.cpp"
    break;

  case 97:
#line 1090 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3351 "parser.cpp"
    break;

  case 98:
#line 1094 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LocalVariableDeclaration", v);

        // Semantics
        (yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 3365 "parser.cpp"
    break;

  case 99:
#line 1107 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3371 "parser.cpp"
    break;

  case 100:
#line 1108 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3377 "parser.cpp"
    break;

  case 101:
#line 1109 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3383 "parser.cpp"
    break;

  case 102:
#line 1110 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3389 "parser.cpp"
    break;

  case 103:
#line 1111 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3395 "parser.cpp"
    break;

  case 104:
#line 1112 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3401 "parser.cpp"
    break;

  case 105:
#line 1116 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3407 "parser.cpp"
    break;

  case 106:
#line 1117 "parser.y++"
                              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3413 "parser.cpp"
    break;

  case 107:
#line 1118 "parser.y++"
                                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3419 "parser.cpp"
    break;

  case 108:
#line 1119 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3425 "parser.cpp"
    break;

  case 109:
#line 1120 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3431 "parser.cpp"
    break;

  case 110:
#line 1124 "parser.y++"
          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3437 "parser.cpp"
    break;

  case 111:
#line 1125 "parser.y++"
        {(yyval.ptr)=makeleaf(";");}
#line 3443 "parser.cpp"
    break;

  case 112:
#line 1126 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3449 "parser.cpp"
    break;

  case 113:
#line 1127 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3455 "parser.cpp"
    break;

  case 114:
#line 1128 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3461 "parser.cpp"
    break;

  case 115:
#line 1129 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3467 "parser.cpp"
    break;

  case 116:
#line 1130 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3473 "parser.cpp"
    break;

  case 117:
#line 1131 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3479 "parser.cpp"
    break;

  case 118:
#line 1132 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3485 "parser.cpp"
    break;

  case 119:
#line 1136 "parser.y++"
                                        {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatement", v);


        //semantic
        if((yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

		if(gotolabel.find((yyvsp[-3].ptr)->tempName) != gotolabel.end()){
			yyerror(string("duplicate label \'" + string((yyvsp[-3].ptr)->tempName) + "\'").c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			gotolabel.insert({string((yyvsp[-3].ptr)->tempName), (yyvsp[-1].ind)});
		}
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyval.ptr)->caselist = (yyvsp[0].ptr)->caselist;
		(yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
		(yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;

    }
#line 3516 "parser.cpp"
    break;

  case 120:
#line 1165 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatementNoShortIf", v);
    }
#line 3528 "parser.cpp"
    break;

  case 121:
#line 1175 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ExpressionStatement", v);
    }
#line 3539 "parser.cpp"
    break;

  case 122:
#line 1184 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3545 "parser.cpp"
    break;

  case 123:
#line 1185 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3551 "parser.cpp"
    break;

  case 124:
#line 1186 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3557 "parser.cpp"
    break;

  case 125:
#line 1187 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3563 "parser.cpp"
    break;

  case 126:
#line 1188 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3569 "parser.cpp"
    break;

  case 127:
#line 1189 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3575 "parser.cpp"
    break;

  case 128:
#line 1190 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3581 "parser.cpp"
    break;

  case 129:
#line 1194 "parser.y++"
         {if_found = 1;}
#line 3587 "parser.cpp"
    break;

  case 130:
#line 1194 "parser.y++"
                                            {
        if((yyvsp[-1].ptr)->truelist.empty() && (yyvsp[-1].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[-1].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[-1].ptr)->truelist.push_back(a);
            (yyvsp[-1].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[-1].ptr);
		if_found = 0;
    }
#line 3605 "parser.cpp"
    break;

  case 131:
#line 1209 "parser.y++"
                                {
        vector<data> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if", v);

        // Semantics
		if((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        // 3AC
        backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[-2].ptr)->falselist.begin(), (yyvsp[-2].ptr)->falselist.end());
        (yyval.ptr)->nextlist= (yyvsp[0].ptr)->nextlist;
        (yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
        (yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;
    }
#line 3628 "parser.cpp"
    break;

  case 132:
#line 1230 "parser.y++"
                                                                    {
        vector<data> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3654 "parser.cpp"
    break;

  case 133:
#line 1254 "parser.y++"
                                                                              {
        vector<data> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3680 "parser.cpp"
    break;

  case 134:
#line 1278 "parser.y++"
                                                           {
        vector<data> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3704 "parser.cpp"
    break;

  case 135:
#line 1300 "parser.y++"
                                                                     {
        vector<data> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3728 "parser.cpp"
    break;

  case 136:
#line 1322 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3747 "parser.cpp"
    break;

  case 137:
#line 1336 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3766 "parser.cpp"
    break;

  case 138:
#line 1353 "parser.y++"
                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac

    }
#line 3786 "parser.cpp"
    break;

  case 139:
#line 1368 "parser.y++"
                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error) {
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3805 "parser.cpp"
    break;

  case 140:
#line 1385 "parser.y++"
                                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-7].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Basic_For_Header", v);

        //semantic 

        if((yyvsp[-5].ptr)->is_error || (yyvsp[-3].ptr)->is_error || (yyvsp[-1].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac

    }
#line 3831 "parser.cpp"
    break;

  case 141:
#line 1408 "parser.y++"
                                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Enhanced_For_Header", v);

        //semantic 

        if((yyvsp[-3].ptr)->is_error || (yyvsp[-1].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3854 "parser.cpp"
    break;

  case 142:
#line 1428 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3860 "parser.cpp"
    break;

  case 143:
#line 1429 "parser.y++"
              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3866 "parser.cpp"
    break;

  case 144:
#line 1433 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3872 "parser.cpp"
    break;

  case 145:
#line 1434 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3878 "parser.cpp"
    break;

  case 146:
#line 1438 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3884 "parser.cpp"
    break;

  case 147:
#line 1439 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3890 "parser.cpp"
    break;

  case 148:
#line 1443 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3896 "parser.cpp"
    break;

  case 149:
#line 1444 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3902 "parser.cpp"
    break;

  case 150:
#line 1448 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3908 "parser.cpp"
    break;

  case 151:
#line 1452 "parser.y++"
                        {
		(yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3916 "parser.cpp"
    break;

  case 152:
#line 1455 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("StatementExpressionList2", v);
    }
#line 3928 "parser.cpp"
    break;

  case 153:
#line 1466 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BreakStatement", v);

        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3944 "parser.cpp"
    break;

  case 154:
#line 1477 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));
        
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3956 "parser.cpp"
    break;

  case 155:
#line 1487 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("YieldStatement", v);

        // semantics
    }
#line 3970 "parser.cpp"
    break;

  case 156:
#line 1499 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 3987 "parser.cpp"
    break;

  case 157:
#line 1511 "parser.y++"
                 {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 4003 "parser.cpp"
    break;

  case 158:
#line 1525 "parser.y++"
                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ReturnStatement", v);

        // Semantics
        if((yyvsp[-1].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
		backpatch((yyvsp[-1].ptr)->nextlist,code.size());
        emit(qid("RETURN", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), qid("", NULL), -1);
    }
#line 4022 "parser.cpp"
    break;

  case 159:
#line 1539 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        emit(qid("RETURN", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
    }
#line 4033 "parser.cpp"
    break;

  case 160:
#line 1548 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ThrowStatement", v);

        // Semantics
        yyerror("Not implemented yet\n");        
    }
#line 4048 "parser.cpp"
    break;

  case 161:
#line 1561 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("SynchronizedStatement", v);

        // Semantics
        yyerror("Not implemented yet\n"); 
    }
#line 4065 "parser.cpp"
    break;

  case 162:
#line 1576 "parser.y++"
      {if_found = 1;}
#line 4071 "parser.cpp"
    break;

  case 163:
#line 1576 "parser.y++"
                                          {
        if((yyvsp[0].ptr)->truelist.empty() && (yyvsp[0].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[0].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[0].ptr)->truelist.push_back(a);
            (yyvsp[0].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[0].ptr);
		if_found = 0;
    }
#line 4089 "parser.cpp"
    break;

  case 164:
#line 1608 "parser.y++"
             {
        int a = code.size();
		(yyval.ptr) = new treeNode;
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->nextlist.push_back(a);
    }
#line 4100 "parser.cpp"
    break;

  case 165:
#line 1619 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4106 "parser.cpp"
    break;

  case 166:
#line 1620 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4112 "parser.cpp"
    break;

  case 167:
#line 1623 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4118 "parser.cpp"
    break;

  case 168:
#line 1624 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 4124 "parser.cpp"
    break;

  case 169:
#line 1625 "parser.y++"
                       {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 4130 "parser.cpp"
    break;

  case 170:
#line 1626 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4136 "parser.cpp"
    break;

  case 171:
#line 1627 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr) ;}
#line 4142 "parser.cpp"
    break;

  case 172:
#line 1628 "parser.y++"
                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4148 "parser.cpp"
    break;

  case 173:
#line 1629 "parser.y++"
                      {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4154 "parser.cpp"
    break;

  case 174:
#line 1634 "parser.y++"
                                                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4160 "parser.cpp"
    break;

  case 175:
#line 1635 "parser.y++"
                                                        {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4172 "parser.cpp"
    break;

  case 176:
#line 1642 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4184 "parser.cpp"
    break;

  case 177:
#line 1652 "parser.y++"
                                                                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, (yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "(", 1);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnqualifiedClassInstanceCreationExpression", v);
    }
#line 4199 "parser.cpp"
    break;

  case 178:
#line 1665 "parser.y++"
                                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstantiate", v);
    }
#line 4211 "parser.cpp"
    break;

  case 179:
#line 1675 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4217 "parser.cpp"
    break;

  case 180:
#line 1676 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4223 "parser.cpp"
    break;

  case 181:
#line 1680 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4229 "parser.cpp"
    break;

  case 182:
#line 1681 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstant", v);
    }
#line 4241 "parser.cpp"
    break;

  case 183:
#line 1691 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, NULL, ">", 0);
		(yyval.ptr) = makenode("TypeArgumentsOrDiamond", v);
    }
#line 4252 "parser.cpp"
    break;

  case 184:
#line 1700 "parser.y++"
                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 4264 "parser.cpp"
    break;

  case 185:
#line 1707 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 4276 "parser.cpp"
    break;

  case 186:
#line 1717 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 4289 "parser.cpp"
    break;

  case 187:
#line 1725 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 4302 "parser.cpp"
    break;

  case 188:
#line 1737 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4315 "parser.cpp"
    break;

  case 189:
#line 1745 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v, (yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4330 "parser.cpp"
    break;

  case 190:
#line 1755 "parser.y++"
                                                {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4345 "parser.cpp"
    break;

  case 191:
#line 1768 "parser.y++"
                 {
        (yyval.ptr)=(yyvsp[0].ptr);

        if(!(yyvsp[0].ptr)->is_error){
			//Semantic
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			currArgs.back().push_back((yyvsp[0].ptr)->type);
			(yyval.ptr)->type = "void";

			//--3AC
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4365 "parser.cpp"
    break;

  case 192:
#line 1783 "parser.y++"
                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArgumentList", v);

        //semantic
        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			string temp = argExp((yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, 2);

			if((yyvsp[-2].ptr)->isInit && (yyvsp[0].ptr)->isInit) (yyval.ptr)->isInit=1;
			currArgs.back().push_back((yyvsp[0].ptr)->type);
			(yyval.ptr)->type = "void";

			//--3AC
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4391 "parser.cpp"
    break;

  case 193:
#line 1806 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4404 "parser.cpp"
    break;

  case 194:
#line 1814 "parser.y++"
                                             {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4417 "parser.cpp"
    break;

  case 195:
#line 1825 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4423 "parser.cpp"
    break;

  case 196:
#line 1826 "parser.y++"
                     {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("DimExprs", v);
    }
#line 4434 "parser.cpp"
    break;

  case 197:
#line 1836 "parser.y++"
                        {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("DimExpr", v);
    }
#line 4446 "parser.cpp"
    break;

  case 198:
#line 1846 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4452 "parser.cpp"
    break;

  case 199:
#line 1851 "parser.y++"
                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4458 "parser.cpp"
    break;

  case 200:
#line 1852 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4464 "parser.cpp"
    break;

  case 201:
#line 1856 "parser.y++"
                                     {if_found = 0;}
#line 4470 "parser.cpp"
    break;

  case 202:
#line 1856 "parser.y++"
                                                                          {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Assignment", v);

        //Semantics
		string temp = assignExp((yyvsp[-3].ptr)->type,(yyvsp[0].ptr)->type,string((yyvsp[-2].ptr)->tempName));

		if(!(yyvsp[-3].ptr)->is_error && !(yyvsp[0].ptr)->is_error && (yyvsp[-3].ptr)->expType!=4){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = (yyvsp[-3].ptr)->type;
				}
				else if(temp == "warning"){
					(yyval.ptr)->type = (yyvsp[-3].ptr)->type;
				} 
				if((yyvsp[-3].ptr)->expType == 3 && (yyvsp[0].ptr)->isInit){
					updInit((yyvsp[-3].ptr)->tempName);
				}
				
				// 3ac 
				int num = assign_exp((yyvsp[-2].ptr)->tempName, (yyval.ptr)->type, (yyvsp[-3].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-3].ptr)->place, (yyvsp[0].ptr)->place);
				(yyval.ptr)->place = (yyvsp[-3].ptr)->place;
				backpatch((yyvsp[0].ptr)->nextlist, num);
			}
			else{
				yyerror(("Incompatible types when assigning " + (yyvsp[0].ptr)->type + " type to " + (yyvsp[-3].ptr)->type).c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-3].ptr)->expType==4){
				yyerror("Left operand in assignment operation cannot be a constant expression");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4514 "parser.cpp"
    break;

  case 203:
#line 1898 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4520 "parser.cpp"
    break;

  case 204:
#line 1899 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4526 "parser.cpp"
    break;

  case 205:
#line 1900 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4532 "parser.cpp"
    break;

  case 206:
#line 1904 "parser.y++"
        {(yyval.ptr) = makeleaf("=");
    (yyval.ptr)->tempName = "=";}
#line 4539 "parser.cpp"
    break;

  case 207:
#line 1906 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4547 "parser.cpp"
    break;

  case 208:
#line 1909 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4555 "parser.cpp"
    break;

  case 209:
#line 1912 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4563 "parser.cpp"
    break;

  case 210:
#line 1915 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4571 "parser.cpp"
    break;

  case 211:
#line 1918 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4579 "parser.cpp"
    break;

  case 212:
#line 1921 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4587 "parser.cpp"
    break;

  case 213:
#line 1924 "parser.y++"
                 {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4595 "parser.cpp"
    break;

  case 214:
#line 1927 "parser.y++"
                          {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4603 "parser.cpp"
    break;

  case 215:
#line 1930 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4611 "parser.cpp"
    break;

  case 216:
#line 1933 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4619 "parser.cpp"
    break;

  case 217:
#line 1936 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4627 "parser.cpp"
    break;

  case 218:
#line 1942 "parser.y++"
                                                                                    {
        vector<data>v;
        insertAttr(v,(yyvsp[-6].ptr), "", 1);
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalExpression2", v);

        // Semantics
		string temp = condExp((yyvsp[-4].ptr)->type, (yyvsp[0].ptr)->type);

		if(!(yyvsp[-6].ptr)->is_error && !(yyvsp[-4].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){

				if_found = previous_if_found;
				(yyval.ptr)->type = "int";
				if((yyvsp[-6].ptr)->intVal) (yyval.ptr)->intVal = (yyvsp[-4].ptr)->intVal;
				else (yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;
				if((yyvsp[-6].ptr)->isInit==1 && (yyvsp[-4].ptr)->isInit==1 && (yyvsp[0].ptr)->isInit==1) (yyval.ptr)->isInit=1;

				// 3AC
				qid temp1 = newtemp((yyval.ptr)->type);

				backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
				backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
				backpatch((yyvsp[-4].ptr)->nextlist, (yyvsp[-3].ind)-1);
				backpatch((yyvsp[-4].ptr)->truelist, (yyvsp[-3].ind)-1);
				backpatch((yyvsp[-4].ptr)->falselist, (yyvsp[-3].ind)-1);

				code[(yyvsp[-3].ind)-1].arg1 = (yyvsp[-4].ptr)->place;
				code[(yyvsp[-3].ind)-1].res = temp1;

				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				backpatch((yyvsp[0].ptr)->falselist, code.size());
				backpatch((yyvsp[0].ptr)->truelist, code.size());

				emit(qid("=", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp1, -1);
				(yyval.ptr)->nextlist.push_back((yyvsp[-3].ind));
				(yyval.ptr)->place = temp1;
			}
			else {
				yyerror("type mismatch in conditional expression");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 4682 "parser.cpp"
    break;

  case 219:
#line 1992 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4688 "parser.cpp"
    break;

  case 220:
#line 1996 "parser.y++"
                                      {
		previous_if_found = if_found;
		if_found = 0;
		(yyval.ptr) = (yyvsp[-1].ptr);
		if(!(yyvsp[-1].ptr)->is_error){
			if((yyvsp[-1].ptr)->truelist.empty()){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
		}
		else (yyval.ptr)->is_error = 1;
	}
#line 4708 "parser.cpp"
    break;

  case 221:
#line 2014 "parser.y++"
                 {
		emit(qid("=", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
		emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
		(yyval.ind) = code.size()-1;
	}
#line 4718 "parser.cpp"
    break;

  case 222:
#line 2022 "parser.y++"
                                                        {
		vector<data> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("||",attr);

		// Semantics

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			(yyval.ptr)->type = string("int");
			(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal || (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("||", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->falselist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[-2].ptr)->truelist;
			(yyval.ptr)->truelist.insert((yyval.ptr)->truelist.end(), (yyvsp[0].ptr)->truelist.begin(), (yyvsp[0].ptr)->truelist.end());
			(yyval.ptr)->falselist = (yyvsp[0].ptr)->falselist;
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
	}
#line 4758 "parser.cpp"
    break;

  case 223:
#line 2057 "parser.y++"
                              { (yyval.ptr) = (yyvsp[0].ptr) ; }
#line 4764 "parser.cpp"
    break;

  case 224:
#line 2061 "parser.y++"
                                        {
		(yyval.ptr) = (yyvsp[-1].ptr);
		if(!(yyvsp[-1].ptr)->is_error){
			if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
		}
		else (yyval.ptr)->is_error = 1;
		
	}
#line 4783 "parser.cpp"
    break;

  case 225:
#line 2078 "parser.y++"
                                              {
		vector<data> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("&&",attr);

		// Semantics
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			(yyval.ptr)->type = string("int");
			(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal && (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("&&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[0].ptr)->truelist;
			(yyval.ptr)->falselist = (yyvsp[-2].ptr)->falselist;
			(yyval.ptr)->falselist.insert((yyval.ptr)->falselist.end(), (yyvsp[0].ptr)->falselist.begin(), (yyvsp[0].ptr)->falselist.end());
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
	}
#line 4822 "parser.cpp"
    break;

  case 226:
#line 2112 "parser.y++"
                           { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4828 "parser.cpp"
    break;

  case 227:
#line 2116 "parser.y++"
                                          {
		(yyval.ptr) = (yyvsp[-1].ptr);
		
		if(!(yyvsp[-1].ptr)->is_error){
			if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
		}
		else (yyval.ptr)->is_error = 1;
	}
#line 4847 "parser.cpp"
    break;

  case 228:
#line 2133 "parser.y++"
                                                     {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "|", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("InclusiveOrExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";
				
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal | (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("|", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary |").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4893 "parser.cpp"
    break;

  case 229:
#line 2174 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4899 "parser.cpp"
    break;

  case 230:
#line 2177 "parser.y++"
                                             {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "^", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ExclusiveOrExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal ^ (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("^", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ^").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4945 "parser.cpp"
    break;

  case 231:
#line 2218 "parser.y++"
                   {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4951 "parser.cpp"
    break;

  case 232:
#line 2222 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "&", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AndExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";
				
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal & (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary &").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4997 "parser.cpp"
    break;

  case 233:
#line 2263 "parser.y++"
                        {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5003 "parser.cpp"
    break;

  case 234:
#line 2267 "parser.y++"
                                                   {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = eqExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal == (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("==", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ==").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5047 "parser.cpp"
    break;

  case 235:
#line 2306 "parser.y++"
                                                   {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = eqExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal != (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("!=", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary !=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

        
    }
#line 5093 "parser.cpp"
    break;

  case 236:
#line 2347 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5099 "parser.cpp"
    break;

  case 237:
#line 2351 "parser.y++"
                                               {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);


        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal < (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5150 "parser.cpp"
    break;

  case 238:
#line 2397 "parser.y++"
                                               {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //semantic

		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal > (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5199 "parser.cpp"
    break;

  case 239:
#line 2441 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal >= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
				 
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5238 "parser.cpp"
    break;

  case 240:
#line 2475 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal <= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5276 "parser.cpp"
    break;

  case 241:
#line 2508 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5282 "parser.cpp"
    break;

  case 242:
#line 2513 "parser.y++"
                                                {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

		//Semantic
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal << (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " << " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <<").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5325 "parser.cpp"
    break;

  case 243:
#line 2551 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal >> (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " >> " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">>", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >>").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5369 "parser.cpp"
    break;

  case 244:
#line 2590 "parser.y++"
                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        yyerror("Not implemented yet!\n");

    }
#line 5384 "parser.cpp"
    break;

  case 245:
#line 2600 "parser.y++"
                        {(yyval.ptr)= (yyvsp[0].ptr);}
#line 5390 "parser.cpp"
    break;

  case 246:
#line 2604 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "+", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);
        
        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		
		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'+');
		
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")	(yyval.ptr)->type = "int";
				else if(temp == "real")	(yyval.ptr)->type = "float";
				else (yyval.ptr)->type =  temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal + (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal + (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " + " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for + operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5454 "parser.cpp"
    break;

  case 247:
#line 2663 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "-", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;

		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'-');
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")(yyval.ptr)->type = "int";
				else if(temp == "real")(yyval.ptr)->type = "float";
				else (yyval.ptr)->type = temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal - (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal - (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " - " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for - operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
	}
#line 5518 "parser.cpp"
    break;

  case 248:
#line 2722 "parser.y++"
                              {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5524 "parser.cpp"
    break;

  case 249:
#line 2727 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "*", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){

			//Semantic
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal * (yyvsp[0].ptr)->intVal; 

			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = mulExp((yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, '*');

			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("*int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC

						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();

						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("*real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for * operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5596 "parser.cpp"
    break;

  case 250:
#line 2794 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "/", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal / (yyvsp[0].ptr)->intVal;
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'/');
			if(!temp.empty()){
				(yyval.ptr)->type = temp;

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("/int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC
						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for / operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5666 "parser.cpp"
    break;

  case 251:
#line 2859 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "%", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal % (yyvsp[0].ptr)->intVal;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'%');
			if(temp == "int"){
				(yyval.ptr)->type = "int" ;

				//--3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid q = newtemp("int");
					(yyval.ptr)->place = q;
					emit(qid("%", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
				}
				(yyval.ptr)->nextlist.clear();

			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for % operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}


    }
#line 5710 "parser.cpp"
    break;

  case 252:
#line 2898 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5716 "parser.cpp"
    break;

  case 253:
#line 2903 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5722 "parser.cpp"
    break;

  case 254:
#line 2904 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5728 "parser.cpp"
    break;

  case 255:
#line 2905 "parser.y++"
                         {
        // $1=makeleaf("+");
        vector<data>v;
        insertAttr(v, NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        //--3AC
		qid("unary+", lookup("+"));
        
        //Semantic
        // remember this line
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp((yyvsp[-1].str)->node_name,(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit((yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5768 "parser.cpp"
    break;

  case 256:
#line 2940 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        
        //--3AC
		(yyvsp[-1].str)->place = qid("unary-", lookup("-"));

        //Semantic
		if(!((yyvsp[-1].str)->is_error || (yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp((yyvsp[-1].str)->node_name,(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit((yyvsp[-1].str)->place, (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5807 "parser.cpp"
    break;

  case 257:
#line 2974 "parser.y++"
                                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5813 "parser.cpp"
    break;

  case 258:
#line 2978 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreIncrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,6);
			
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal +1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5851 "parser.cpp"
    break;

  case 259:
#line 3014 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreDecrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal -1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Decrement not defined for this type");
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5887 "parser.cpp"
    break;

  case 260:
#line 3048 "parser.y++"
                       {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5893 "parser.cpp"
    break;

  case 261:
#line 3050 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "~", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
        

        //semantic
        (yyval.ptr)->place = qid("~", lookup("~"));

        if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("~",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = ~((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit((yyvsp[-1].str)->place, (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5931 "parser.cpp"
    break;

  case 262:
#line 3083 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "!", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);

        //semantic
        (yyvsp[-1].str)->place = qid("~", lookup("~"));

        if(! ((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("!",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = !((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit((yyvsp[-1].str)->place, (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5968 "parser.cpp"
    break;

  case 263:
#line 3115 "parser.y++"
                    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5974 "parser.cpp"
    break;

  case 264:
#line 3119 "parser.y++"
             {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5980 "parser.cpp"
    break;

  case 265:
#line 3120 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5986 "parser.cpp"
    break;

  case 266:
#line 3121 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5992 "parser.cpp"
    break;

  case 267:
#line 3122 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5998 "parser.cpp"
    break;

  case 268:
#line 3126 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostIncrementExpression", v);

        //Semantics
		(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			string temp = postfixExpression((yyvsp[-1].ptr)->type,6);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal + 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}

			(yyval.ptr)->is_error = 1;
		}
    }
#line 6037 "parser.cpp"
    break;

  case 269:
#line 3163 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostDecrementExpression", v);

        //Semantics
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
			string temp = postfixExpression((yyvsp[-1].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal - 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);

			}
			else{
				yyerror("Decrement not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}

    }
#line 6077 "parser.cpp"
    break;

  case 270:
#line 3201 "parser.y++"
                                             { // 1
        vector<data>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("CastExpression", v);
    }
#line 6090 "parser.cpp"
    break;


#line 6094 "parser.cpp"

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
#line 3211 "parser.y++"


G 	
    : Identifier 	{
		$$ = $1;
		className = $1;
		classTemp = className ; 
	}
    ;

S 
    : %empty {
		$$ = new treeNode;
		createStructTable();

		if(type != "") {
			yyerror(("cannot combine with previous " + type + " declaration specifier").c_str());
			$$->is_error = 1;
		}
	}
    ;

NEXT_QUAD
	: %empty {
		$$ = code.size();
	}
	;

ChangeTable
	: %empty {
		if(func_flag){
			string str = "Block" +to_string(block_count);
			block_stack.push(block_count);
			block_count++;
			func_flag++;
			makeSymbolTable(str, "",0);
		}
		else func_flag++;
	}
	;

A
	: %empty	{
		type ="";
		func_flag = 0;
		funcArgs.clear();
		createParamList();
		gotolablelist.clear();
		gotolabel.clear();
	}
    
int main(int argc, char* argv[]){

    dotfile=fopen(argv[1],"w");

    if(dotfile == NULL){
		print_error();
		cout<<"cannot open the dot file AST.dot"<<"\nCompilation terminated\n";
		return -1;
	}

    symTableInit();
	beginAST();
    yyparse();

    for(int i=2; i<argc; i++){
        if(!strcmp(argv[i], "-dump-sym-table")) dump_sym_table = 1;
		else if(!strcmp(argv[i], "-dump-tac")) dump_tac = 1;
		else if(!strcmp(argv[i], "-dump-all")) dump_tac = dump_sym_table = 1;
    }

    if(!stop_compiler){
		setGlobal();
		if(dump_tac) print3AC();
		endAST();
		if(dump_sym_table) printSymbolTable(&globalst, "#Global_Symbol_Table#.csv");
	}
    
    return 0;
}

void yyerror(char const* s){
    cout << "Error: " << s << " in Line no: " << line << endl;
    return;
}

// set type as int and read integer value correctly depending on the base
void set_int_type(int t){
	yylval.num = new constants;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("int");
	switch(t){
		// 3-> hexadecimal, 2-> octal, 1-> decimal, 0-> char
		case 0 : {
			sscanf(yytext, "%", &(yylval.num->intVal));
			yylval.num->intVal = char_int(yylval.num->str);
			yylval.num->type = "char";
			break;
		}
		case 1 : {
			sscanf(yytext, "%lld", &(yylval.num->intVal));
			break;
		}
		case 2 : {
			sscanf(yytext, "%llo", &(yylval.num->intVal));
			break;
		}
		case 3 : {
			sscanf(yytext, "%llx", &(yylval.num->intVal));
			break;
		}
	}
}

// convert character to an integer value
int char_int(string str){
    if(str[1] == '\\'){
        string s = str.substr(1,2);
        if(s == "\\0") return 0;
        if(s == "\\n") return 10;
        if(s == "\\t") return 9;
    } 
    int val = (int)str[1];
    return (val);
}

// set type as float and read the real value
void set_real_type(){
	yylval.num = new constants ;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("float");
	sscanf(yytext, "%lf", &(yylval.num->realVal));
}
