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
    INC_OP = 315,
    DEC_OP = 316
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

#line 245 "parser.cpp"

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  275
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  470

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


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
      79,    80,    81,    82,    83,    84,    85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    91,   101,   113,   123,   133,   142,   155,
     158,   169,   172,   178,   187,   195,   203,   211,   222,   230,
     241,   252,   273,   274,   277,   320,   361,   378,   391,   397,
     398,   413,   414,   420,   440,   464,   489,   490,   507,   511,
     515,   519,   526,   532,   533,   545,   546,   547,   548,   552,
     567,   585,   588,   601,   610,   633,   649,   679,   690,   703,
     715,   728,   743,   754,   812,   857,   877,   878,   882,   883,
     887,   890,   909,   941,   942,   946,   957,   973,   981,   991,
    1002,  1016,  1017,  1022,  1023,  1027,  1028,  1034,  1042,  1052,
    1053,  1066,  1082,  1083,  1109,  1110,  1114,  1115,  1119,  1132,
    1133,  1134,  1135,  1136,  1137,  1141,  1142,  1143,  1144,  1145,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1161,
    1190,  1200,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1219,
    1219,  1234,  1255,  1279,  1303,  1325,  1347,  1361,  1378,  1393,
    1410,  1433,  1453,  1454,  1458,  1459,  1463,  1464,  1468,  1469,
    1473,  1477,  1480,  1491,  1502,  1512,  1524,  1536,  1550,  1564,
    1573,  1586,  1601,  1601,  1633,  1644,  1645,  1648,  1649,  1650,
    1651,  1652,  1653,  1654,  1659,  1660,  1667,  1677,  1690,  1700,
    1701,  1705,  1706,  1716,  1725,  1732,  1742,  1750,  1762,  1770,
    1780,  1793,  1808,  1831,  1839,  1850,  1851,  1861,  1871,  1876,
    1877,  1881,  1881,  1923,  1924,  1925,  1929,  1931,  1934,  1937,
    1940,  1943,  1946,  1949,  1952,  1955,  1958,  1961,  1967,  2017,
    2021,  2039,  2047,  2082,  2086,  2103,  2137,  2141,  2158,  2199,
    2202,  2243,  2247,  2288,  2292,  2331,  2372,  2376,  2422,  2466,
    2500,  2533,  2538,  2576,  2615,  2625,  2629,  2688,  2747,  2752,
    2819,  2884,  2923,  2928,  2929,  2930,  2965,  2999,  3003,  3039,
    3073,  3075,  3108,  3140,  3144,  3145,  3146,  3147,  3151,  3188,
    3226,  3239,  3247,  3259,  3265,  3278
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
  "FLOAT", "SUPER", "WHILE", "_", "YIELD", "INC_OP", "DEC_OP", "$accept",
  "Literal", "PrimitiveType", "NumericType", "IntegralType",
  "FloatingPointType", "Dims", "Name", "SimpleName", "QualifiedName",
  "CompilationUnit", "OrdinaryCompilationUnit",
  "TopLevelClassOrInterfaceDeclarations",
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
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression",
  "G", "S", "NEXT_QUAD", "ChangeTable", "A", YY_NULLPTR
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
     311,   312,   313,   314,   315,   316
};
# endif

#define YYPACT_NINF (-409)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-268)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      79,  -409,   -19,  -409,  -409,  -409,  -409,    -4,    71,  -409,
    -409,   256,   256,  -409,    32,    50,  -409,    57,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,    -4,  -409,   -19,  -409,    68,
    -409,  -409,  -409,  -409,    68,  1276,  -409,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,   109,  -409,  -409,  -409,    69,  -409,
    -409,  -409,   416,  -409,  -409,  -409,    27,    78,  -409,  -409,
    -409,  -409,   134,    73,  -409,    15,  -409,   136,  -409,    69,
      78,   156,  -409,  -409,  -409,  -409,  -409,    98,  -409,   155,
    1310,  -409,    81,  -409,  -409,   -26,  -409,   178,  -409,  -409,
    -409,  1036,  1255,  1421,  1421,  1421,  1421,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,   717,  -409,   180,  1421,  1421,  -409,
    1419,  -409,  -409,   185,   225,  -409,  -409,  1025,  1126,  -409,
    -409,  -409,  -409,  -409,  1253,  -409,  -409,    65,  -409,   202,
    -409,   218,   220,   223,    76,    74,    -1,   110,   133,  -409,
    -409,  -409,  -409,   112,  -409,  -409,  -409,   191,  -409,   237,
     238,  -409,   233,  -409,   957,   240,   244,  -409,  -409,   243,
     232,   148,  -409,  -409,  -409,  -409,  -409,  -409,   246,   245,
     252,   -19,  -409,  -409,  1421,  1421,   -24,   -24,  1421,  -409,
    -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    -409,  -409,  1421,  -409,  -409,  1421,  -409,  1421,  1421,  1421,
    1421,  1421,  1421,  1421,  1421,  1421,  1421,  1421,  1421,  1421,
    1421,  1421,  1421,  1421,  1421,  -409,  -409,   250,    78,    61,
    -409,  1421,  1421,   254,  -409,  1421,  -409,     2,   262,  -409,
     263,     4,  1421,  1421,   265,  1421,    98,   247,  -409,  -409,
    -409,  -409,   255,  -409,  -409,  -409,  -409,   257,  -409,  -409,
    -409,  -409,  -409,  1075,  1075,  -409,  -409,  -409,  -409,  -409,
    -409,    49,    51,  -409,  -409,  -409,   112,   114,   117,  1421,
    -409,  -409,  1310,   267,  1366,   275,   246,  -409,   -19,   261,
    1421,   279,   280,   268,  -409,   277,   -19,  -409,   289,  -409,
     285,  1421,  -409,   202,   218,   220,   223,    76,    74,    74,
      -1,    -1,    -1,    -1,   110,   110,   110,   133,   133,  -409,
    -409,  -409,   286,  -409,  -409,   250,  -409,  -409,   291,   292,
    -409,  -409,   287,  1196,   295,  1421,  -409,   288,   293,   294,
    -409,   296,   281,  -409,  -409,  -409,  1131,  -409,  -409,  -409,
    -409,  -409,   250,   302,  -409,  -409,  -409,   245,   283,  -409,
    -409,   304,  1421,  -409,  1421,  -409,  1421,  -409,  -409,   297,
    -409,  -409,   865,   307,   310,  -409,   309,   301,   316,  -409,
    -409,  1421,   317,  -409,  -409,  -409,  -409,  -409,  1075,   311,
     313,  -409,  -409,   271,  -409,  -409,  -409,  -409,  -409,  1131,
    1131,  -409,  -409,  -409,  -409,    68,   332,  -409,   337,  -409,
    -409,  -409,  -409,  1421,    33,  1421,   340,   109,   341,    33,
    -409,  -409,  1171,   278,  1131,  -409,  -409,  -409,  -409,  -409,
    -409,  1421,   344,  -409,   334,  -409,  -409,  -409,  -409,  -409,
    -409,   351,   330,  -409,  -409,  -409,  1171,  1171,  -409,  -409,
    -409,  -409,    33,  1075,   352,  -409,  1171,  1171,  1075,   290,
     355,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,  -409,
    1131,   364,   299,  1131,  -409,  -409,  -409,  -409,  1171,  1171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      29,    32,     0,    39,    38,    41,    40,     0,     0,    26,
      28,    29,    29,    31,     0,    36,    24,     0,    22,    23,
     271,   272,     1,    30,    27,     0,    37,     0,    33,     0,
     272,    25,    43,    35,     0,     0,    34,    42,    10,    19,
      13,    15,    14,    17,    40,    62,    16,    18,     0,     9,
      11,    12,     0,    44,    45,    46,     0,     0,    47,    48,
     274,    75,    55,     0,    51,    53,    59,     0,    65,     0,
       0,     0,    74,    57,    73,    61,    92,     0,    50,     0,
       0,   275,     0,    58,    60,    92,    76,   273,    55,    52,
      56,     0,    83,     0,     0,     0,     0,     2,     6,     8,
       5,     7,     4,     3,     0,   168,     0,     0,     0,   167,
     265,    54,    67,   264,   165,   170,   174,   171,   172,   173,
     166,    66,   198,   199,     0,   200,   273,   219,   273,   223,
     273,   226,   229,   231,   233,   236,   241,   245,   248,   252,
     253,   254,   257,   260,   266,   267,   263,     0,    49,     0,
       0,    92,   273,    91,     0,     0,     0,    84,    89,     0,
      83,   265,   171,   172,   255,   256,   261,   262,     0,   181,
       0,     0,   258,   259,    81,     0,     0,     0,     0,   206,
     210,   211,   208,   207,   209,   212,   213,   215,   216,   217,
     214,   201,     0,   220,   224,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   268,   269,    68,     0,     0,
      70,    81,    81,   273,    78,     0,   111,     0,     0,   129,
       0,     0,     0,   159,     0,     0,     0,    22,    97,   110,
      93,    94,     0,    95,    99,   100,   112,     0,   273,   101,
     102,   103,   104,     0,     0,   113,   118,   114,   115,   117,
     116,   170,   173,   122,   123,   124,     0,   125,   126,     0,
     169,    88,    84,     0,     0,     0,    68,   195,     0,   179,
      81,   185,     0,    82,   191,     0,     0,   175,   184,   176,
       0,     0,   221,   222,   225,   228,   230,   232,   234,   235,
     237,   238,   240,   239,   243,   242,   244,   246,   247,   249,
     250,   251,     0,    69,    64,    68,   273,   273,     0,     0,
      77,   157,     0,   142,     0,     0,   154,     0,     0,     0,
     273,     0,    98,   273,    96,   121,     0,   136,   137,   270,
      90,    87,    20,     0,   194,   193,   196,   181,     0,   178,
     180,     0,    81,   188,     0,   186,    81,   187,   202,     0,
      72,    63,     0,     0,     0,   156,   149,   151,     0,   143,
     148,     0,     0,   153,   160,   158,   162,   155,     0,     0,
      22,   131,   164,    99,   106,   273,   107,   108,   109,     0,
       0,    21,   197,   182,   183,    85,     0,   192,     0,   273,
      71,    79,    80,     0,     0,   144,     0,     0,     0,     0,
     119,   273,     0,     0,     0,   138,   139,    86,   177,   190,
     189,     0,     0,   152,     0,   145,   130,   161,   273,   163,
     162,     0,    22,   120,   105,   273,     0,     0,   273,   164,
     218,   141,   146,     0,     0,   273,     0,     0,     0,     0,
       0,   147,   150,   134,   273,   162,   164,   132,   273,   140,
       0,     0,     0,     0,   135,   273,   273,   133,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -409,  -409,   -32,  -409,  -409,  -409,  -159,     8,   -27,  -409,
    -409,  -409,   147,  -409,  -409,   215,    10,  -409,   -30,  -409,
    -409,  -409,   -51,   298,  -409,  -409,  -409,   319,   -18,   154,
     -90,  -268,  -409,    11,  -409,  -409,  -409,  -409,  -409,  -216,
     214,  -409,   101,  -409,   -43,   -73,  -409,  -409,    56,   449,
     206,  -143,  -409,  -409,  -409,  -316,  -111,  -409,  -409,  -409,
    -409,  -409,  -409,  -409,  -409,   107,   538,  -409,  -409,  -409,
    -409,  -409,  -385,  -409,  -409,  -409,  -409,  -409,  -409,  -406,
    -409,  -408,  -409,  -409,    89,    47,  -409,  -409,    34,  -409,
     -33,   194,   129,  -409,  -409,  -409,   104,   236,    93,   259,
    -409,  -409,  -409,   -35,  -409,  -409,  -409,  -409,   195,  -409,
     221,   217,   224,   222,   -10,   -75,   -21,    20,   -79,   300,
     363,  -409,   408,   471,   511,  -409,   392,   394,   -88,  -409,
    -409
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
     141,   142,   143,   144,   145,   146,    21,    29,   154,    76,
     147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    61,   158,    48,    36,   318,   319,   367,   345,   275,
      17,   244,   152,    74,   164,   165,   166,   167,    82,   423,
      69,   321,    79,   326,   444,    26,   207,   208,   172,   173,
      16,   449,    60,   286,    71,    16,   225,   149,   192,    75,
     195,    80,   197,   248,   209,    52,    72,   360,   462,   461,
      20,    83,    84,  -128,   150,  -127,    16,   452,    16,   155,
     162,   162,   162,   162,   351,   316,    27,  -128,  -128,  -127,
    -127,    22,   168,    32,   162,   162,    28,   169,   223,   317,
      97,    98,    99,   100,   101,   102,   103,    16,   367,   193,
     104,    77,    78,   429,   203,   204,   105,   194,     1,    77,
     148,   161,   161,   161,   161,   201,   202,   205,   206,    25,
     244,   244,     3,   106,    60,   161,   161,   107,   108,     4,
     210,   211,   236,    62,     5,     6,   367,   237,   300,   301,
     302,   303,    68,   309,   310,   311,   396,   -65,     2,    81,
     398,     3,   248,   248,   281,   212,   213,   214,     4,    31,
     288,   174,    88,     5,     6,   175,     7,   176,    23,    24,
     336,    85,   162,    90,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   340,   391,   153,   332,   304,   305,   306,   171,
     339,   298,   299,   383,   177,   217,   215,   216,  -266,  -266,
     322,  -267,  -267,   161,   327,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   287,   289,   385,   237,   237,   361,   362,
     307,   308,   178,   196,   198,   244,   162,   199,   200,   224,
     221,   222,   376,   261,   269,   378,   383,   383,   270,   271,
     272,   347,    38,   274,   278,   280,    39,   312,    40,   169,
     320,   253,    41,    42,    43,   323,   325,   248,   330,    46,
      47,   383,   333,   341,   334,     1,   335,   161,   385,   385,
      92,   348,   352,   262,   353,   355,   354,   163,   163,   163,
     163,   236,   356,   357,   342,   363,   364,   414,   371,    77,
     244,   163,   163,   385,   394,   244,   365,   373,   395,   380,
     392,   421,   374,   375,   411,   377,   121,   383,     3,   404,
     383,   407,   399,   430,   378,     4,   401,   156,   121,   402,
       5,     6,   248,     7,   403,   405,   419,   248,   412,  -105,
     443,   420,   261,   261,   426,   428,   438,   447,   441,   385,
     448,   237,   385,   442,   445,   446,   454,   455,   458,   459,
     253,   253,   380,   380,   427,   417,   460,   466,   465,   238,
     463,    70,   315,   400,   273,    89,   344,   468,   469,   366,
     346,   393,   262,   262,   358,   432,   440,   380,   162,   163,
     293,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   432,
     432,   285,   261,   263,   290,   295,   237,    30,   294,   432,
     432,   237,   297,   296,    34,   261,     0,     0,   292,   161,
       0,     0,     0,   380,     0,     0,   380,     0,     0,     0,
       0,   432,   432,   389,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,   264,     0,     0,     0,     0,     0,
       0,   156,     0,   163,     0,   262,     0,   261,   328,   329,
      68,   331,     0,     0,     0,     0,     0,    38,   261,   261,
       0,    39,     0,    40,     0,   253,     0,    41,    42,    43,
       0,     0,    45,   261,    46,    47,   389,   389,   261,     0,
       0,   261,     0,   261,     0,     0,     0,   262,   121,     0,
     343,     0,   263,   263,     0,     0,     0,   265,   262,   262,
       0,   389,     0,     0,     0,   261,   261,     0,     0,     0,
       0,   261,   261,   262,     0,   261,   261,   261,   262,     0,
       0,   262,   382,   262,     0,     0,     0,     0,     0,   261,
     253,     0,   261,   264,   264,   253,     0,   261,   261,     0,
       0,   372,   266,     0,     0,   262,   262,   389,     0,     0,
     389,   262,   262,     0,     0,   262,   262,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,   262,
     397,     0,   262,     0,     0,   263,   416,   262,   262,     0,
       0,     0,     0,   243,     0,     0,     0,   406,     0,     0,
       0,     0,     0,     0,     0,   163,   265,   265,   433,     0,
     439,     0,     0,   264,     0,   267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   264,   263,     0,   422,
       0,   425,     0,   416,     0,     0,     0,     0,   263,   263,
       0,     0,   433,   456,     0,     0,     0,     0,     0,     0,
       0,   266,   266,   263,     0,   268,   464,     0,   263,   467,
       0,   263,     0,   263,   464,   467,     0,     0,   264,     0,
       0,     0,     0,     0,     0,     0,   265,     0,     0,   264,
     264,     0,   254,     0,     0,   263,   263,     0,     0,   265,
       0,   263,   263,   338,   264,   263,   263,   263,     0,   264,
       0,     0,   264,     0,   264,     0,     0,     0,     0,   263,
       0,     0,   263,     0,   267,   267,     0,   263,   263,     0,
       0,   266,     0,     0,     0,     0,   264,   264,     0,     0,
       0,   265,   264,   264,   266,     0,   264,   264,   264,     0,
       0,     0,   265,   265,     0,     0,     0,     0,     0,     0,
     264,     0,     0,   264,   268,   268,     0,   265,   264,   264,
       0,    16,   265,     0,     0,   265,     0,   265,    38,     0,
       0,     0,    39,     0,    40,   381,   266,     0,    41,    42,
      43,   254,   254,     0,   267,    46,    47,   266,   266,   265,
     265,     0,     0,     0,     0,   265,   265,   267,     0,   265,
     265,   265,   266,     0,     0,     0,     0,   266,     0,     0,
     266,     0,   266,   265,     0,     0,   265,   410,     0,     0,
       0,   265,   265,     0,   268,     0,     0,     0,     0,   338,
       0,     0,     0,     0,   266,   266,     0,   268,     0,   267,
     266,   266,     0,     0,   266,   266,   266,     0,     0,     0,
     267,   267,     0,   381,     0,     0,     0,     0,   266,     0,
       0,   266,     0,     0,   390,   267,   266,   266,     0,     0,
     267,     0,     0,   267,     0,   267,     0,     0,     0,   268,
       0,     0,   453,     0,     0,     0,     0,   457,     0,     0,
     268,   268,     0,     0,     0,     0,     0,   267,   267,   453,
       0,     0,   457,   267,   267,   268,   254,   267,   267,   267,
     268,     0,     0,   268,     0,   268,    38,   390,   390,     0,
      39,   267,    40,     0,   267,     0,    41,    42,    43,   267,
     267,     0,     0,    46,    47,     0,     0,   268,   268,     0,
       0,     0,   390,   268,   268,     0,     0,   268,   268,   268,
     225,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,   268,     0,     0,   268,     0,   226,     0,     0,   268,
     268,   254,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   390,     0,
       0,   390,     0,     0,    97,    98,    99,   100,   101,   102,
     103,    16,   227,   228,   104,   229,     0,   230,    38,     3,
     105,   231,    39,   232,    40,     0,     4,   233,    41,    42,
      43,     5,     6,     0,     7,    46,    47,   106,   234,    91,
     235,   107,   108,     0,     0,     0,    93,    94,     0,     0,
       0,  -204,     0,     0,     0,     0,     0,     0,    95,    96,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
       0,  -204,     0,     0,     0,     0,     0,     0,   225,     0,
      60,     0,     0,    97,    98,    99,   100,   101,   102,   103,
      16,     0,     0,   104,   226,     0,     0,    38,     0,   105,
       0,    39,     0,    40,     0,     0,     0,    41,    42,    43,
       0,     0,     0,     0,    46,    47,   106,     0,     0,     0,
     107,   108,    97,    98,    99,   100,   101,   102,   103,    16,
     227,   228,   104,   229,   225,   230,    60,     0,   105,   231,
       0,   232,     0,     0,     0,   233,     0,     0,     0,     0,
     226,     0,  -205,     0,     0,   106,   234,     0,   235,   107,
     108,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,     0,  -205,     0,   225,     0,    60,     0,    97,    98,
      99,   100,   101,   102,   103,    16,   227,   228,   104,   229,
     226,   230,     0,     0,   105,   231,     0,   232,     0,   225,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   379,     0,   235,   107,   108,     0,    97,    98,
      99,   100,   101,   102,   103,    16,   227,   228,   104,   229,
       0,   230,     0,     0,   105,   231,     0,   232,     0,     0,
       0,   233,     0,    97,    98,    99,   100,   101,   102,   103,
      16,   106,   431,   104,   235,   107,   108,    38,    91,   105,
      92,    39,     0,    40,     0,    93,    94,    41,    42,    43,
       0,     0,     0,   157,    46,    47,   106,    95,    96,   179,
     107,   108,    37,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,     0,   190,
       0,     0,    97,    98,    99,   100,   101,   102,   103,    16,
       0,     0,   104,    91,     0,    92,     0,     0,   105,     0,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,   106,     0,    38,     3,   107,
     108,    39,     0,    40,     0,     4,     0,    41,    42,    43,
       5,    44,    45,     0,    46,    47,     0,    97,    98,    99,
     100,   101,   102,   103,    16,     0,     0,   104,     0,    91,
       0,     0,     0,   105,   342,     0,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
     106,     0,     0,     0,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
      16,     0,   174,   104,    91,     0,   175,     0,   176,   105,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,  -203,   106,     0,     0,     0,
     107,   108,     0,     0,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,     0,  -203,     0,     0,    97,    98,
      99,   100,   101,   102,   103,    16,     0,     0,   104,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,   107,   108
};

static const yytype_int16 yycheck[] =
{
      27,    44,    92,    35,    34,   221,   222,   323,   276,   168,
       2,   154,    85,    56,    93,    94,    95,    96,    69,   404,
      52,    19,     7,    19,   430,    15,    27,    28,   107,   108,
      54,   439,     5,    57,    52,    54,     3,    63,   126,    57,
     128,    26,   130,   154,    45,    35,    19,   315,   456,   455,
      54,    69,    70,     4,    80,     4,    54,   442,    54,    91,
      93,    94,    95,    96,   280,     4,     9,    18,    19,    18,
      19,     0,   104,     5,   107,   108,    19,   104,   151,    18,
      47,    48,    49,    50,    51,    52,    53,    54,   404,    24,
      57,    18,    19,   409,    20,    21,    63,    32,    19,    18,
      19,    93,    94,    95,    96,    29,    30,    33,    34,    77,
     253,   254,    62,    80,     5,   107,   108,    84,    85,    69,
      10,    11,   154,    54,    74,    75,   442,   154,   203,   204,
     205,   206,    54,   212,   213,   214,   352,     3,    59,     3,
     356,    62,   253,   254,   171,    12,    13,    14,    69,   176,
     177,     3,    54,    74,    75,     7,    77,     9,    11,    12,
     248,     5,   195,     8,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   272,   342,     6,   236,   207,   208,   209,     9,
     269,   201,   202,   336,     9,     4,    84,    85,    84,    85,
     227,    84,    85,   195,   231,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   176,   177,   336,   253,   254,   316,   317,
     210,   211,     7,    31,    16,   378,   269,    17,    15,     6,
       3,     3,   330,   154,     4,   333,   389,   390,     4,     6,
      18,   278,    61,     7,     9,     3,    65,     7,    67,   286,
       6,   154,    71,    72,    73,     3,     3,   378,     3,    78,
      79,   414,    25,     6,    19,    19,    19,   269,   389,   390,
       5,    20,     3,   154,     4,     8,    18,    93,    94,    95,
      96,   323,     3,     8,     8,     4,     4,   385,     3,    18,
     443,   107,   108,   414,    21,   448,    19,    19,     4,   336,
       8,   399,    19,    19,     3,    19,    80,   460,    62,    18,
     463,     4,    25,   411,   412,    69,    19,    91,    92,    19,
      74,    75,   443,    77,    25,    19,     4,   448,    25,    68,
     428,     4,   253,   254,     4,     4,    68,   435,     4,   460,
     438,   378,   463,    19,     3,    25,     4,   445,    68,     4,
     253,   254,   389,   390,   407,   395,   454,    68,     4,   154,
     458,    52,   218,   362,   160,    77,   275,   465,   466,   323,
     276,   347,   253,   254,   291,   412,   421,   414,   421,   195,
     195,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   436,
     437,   175,   323,   154,   178,   198,   443,    25,   197,   446,
     447,   448,   200,   199,    30,   336,    -1,    -1,   192,   421,
      -1,    -1,    -1,   460,    -1,    -1,   463,    -1,    -1,    -1,
      -1,   468,   469,   336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,   154,    -1,    -1,    -1,    -1,    -1,
      -1,   225,    -1,   269,    -1,   336,    -1,   378,   232,   233,
      54,   235,    -1,    -1,    -1,    -1,    -1,    61,   389,   390,
      -1,    65,    -1,    67,    -1,   378,    -1,    71,    72,    73,
      -1,    -1,    76,   404,    78,    79,   389,   390,   409,    -1,
      -1,   412,    -1,   414,    -1,    -1,    -1,   378,   272,    -1,
     274,    -1,   253,   254,    -1,    -1,    -1,   154,   389,   390,
      -1,   414,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,
      -1,   442,   443,   404,    -1,   446,   447,   448,   409,    -1,
      -1,   412,   336,   414,    -1,    -1,    -1,    -1,    -1,   460,
     443,    -1,   463,   253,   254,   448,    -1,   468,   469,    -1,
      -1,   325,   154,    -1,    -1,   436,   437,   460,    -1,    -1,
     463,   442,   443,    -1,    -1,   446,   447,   448,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,   460,
     354,    -1,   463,    -1,    -1,   336,   390,   468,   469,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,   253,   254,   412,    -1,
     414,    -1,    -1,   323,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,   378,    -1,   403,
      -1,   405,    -1,   437,    -1,    -1,    -1,    -1,   389,   390,
      -1,    -1,   446,   447,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,   404,    -1,   154,   460,    -1,   409,   463,
      -1,   412,    -1,   414,   468,   469,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,   389,
     390,    -1,   154,    -1,    -1,   436,   437,    -1,    -1,   336,
      -1,   442,   443,   254,   404,   446,   447,   448,    -1,   409,
      -1,    -1,   412,    -1,   414,    -1,    -1,    -1,    -1,   460,
      -1,    -1,   463,    -1,   253,   254,    -1,   468,   469,    -1,
      -1,   323,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,
      -1,   378,   442,   443,   336,    -1,   446,   447,   448,    -1,
      -1,    -1,   389,   390,    -1,    -1,    -1,    -1,    -1,    -1,
     460,    -1,    -1,   463,   253,   254,    -1,   404,   468,   469,
      -1,    54,   409,    -1,    -1,   412,    -1,   414,    61,    -1,
      -1,    -1,    65,    -1,    67,   336,   378,    -1,    71,    72,
      73,   253,   254,    -1,   323,    78,    79,   389,   390,   436,
     437,    -1,    -1,    -1,    -1,   442,   443,   336,    -1,   446,
     447,   448,   404,    -1,    -1,    -1,    -1,   409,    -1,    -1,
     412,    -1,   414,   460,    -1,    -1,   463,   378,    -1,    -1,
      -1,   468,   469,    -1,   323,    -1,    -1,    -1,    -1,   390,
      -1,    -1,    -1,    -1,   436,   437,    -1,   336,    -1,   378,
     442,   443,    -1,    -1,   446,   447,   448,    -1,    -1,    -1,
     389,   390,    -1,   414,    -1,    -1,    -1,    -1,   460,    -1,
      -1,   463,    -1,    -1,   336,   404,   468,   469,    -1,    -1,
     409,    -1,    -1,   412,    -1,   414,    -1,    -1,    -1,   378,
      -1,    -1,   443,    -1,    -1,    -1,    -1,   448,    -1,    -1,
     389,   390,    -1,    -1,    -1,    -1,    -1,   436,   437,   460,
      -1,    -1,   463,   442,   443,   404,   378,   446,   447,   448,
     409,    -1,    -1,   412,    -1,   414,    61,   389,   390,    -1,
      65,   460,    67,    -1,   463,    -1,    71,    72,    73,   468,
     469,    -1,    -1,    78,    79,    -1,    -1,   436,   437,    -1,
      -1,    -1,   414,   442,   443,    -1,    -1,   446,   447,   448,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   460,    -1,    -1,   463,    -1,    19,    -1,    -1,   468,
     469,   443,    -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,
      -1,   463,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    79,    80,    81,     3,
      83,    84,    85,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    19,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
      84,    85,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     3,    60,     5,    -1,    63,    64,
      -1,    66,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      19,    -1,    26,    -1,    -1,    80,    81,    -1,    83,    84,
      85,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,     3,    -1,     5,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      19,    60,    -1,    -1,    63,    64,    -1,    66,    -1,     3,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    83,    84,    85,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    -1,    -1,    63,    64,    -1,    66,    -1,    -1,
      -1,    70,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    80,    81,    57,    83,    84,    85,    61,     3,    63,
       5,    65,    -1,    67,    -1,    10,    11,    71,    72,    73,
      -1,    -1,    -1,    18,    78,    79,    80,    22,    23,    26,
      84,    85,     6,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,     3,    -1,     5,    -1,    -1,    63,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    80,    -1,    61,    62,    84,
      85,    65,    -1,    67,    -1,    69,    -1,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    57,    -1,     3,
      -1,    -1,    -1,    63,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      80,    -1,    -1,    -1,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,     3,    57,     3,    -1,     7,    -1,     9,    63,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    26,    80,    -1,    -1,    -1,
      84,    85,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    84,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    59,    62,    69,    74,    75,    77,    96,    97,
      98,    99,   100,   101,   102,   103,    54,    93,    94,    95,
      54,   212,     0,    98,    98,    77,   102,     9,    19,   213,
     212,    94,     5,   104,   213,   105,   104,     6,    61,    65,
      67,    71,    72,    73,    75,    76,    78,    79,    88,    89,
      90,    91,   102,   106,   107,   111,   112,   113,   121,   122,
       5,   130,    54,   108,   109,   110,   114,   115,    54,    88,
     113,   114,    19,   120,   130,   114,   215,    18,    19,     7,
      26,     3,   108,   114,   114,     5,   123,   131,    54,   109,
       8,     3,     5,    10,    11,    22,    23,    47,    48,    49,
      50,    51,    52,    53,    57,    63,    80,    84,    85,    87,
      93,   116,   128,   168,   169,   170,   171,   176,   177,   178,
     180,   183,   184,   185,   187,   189,   190,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   216,    19,    63,
      80,   124,   131,     6,   214,    88,   183,    18,   116,   126,
     129,    93,   176,   177,   204,   204,   204,   204,    88,    94,
     172,     9,   204,   204,     3,     7,     9,     9,     7,    26,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      46,   188,   214,    24,    32,   214,    31,   214,    16,    17,
      15,    29,    30,    20,    21,    33,    34,    27,    28,    45,
      10,    11,    12,    13,    14,    84,    85,     4,    88,   118,
     119,     3,     3,   131,     6,     3,    19,    55,    56,    58,
      60,    64,    66,    70,    81,    83,    88,    94,   101,   130,
     132,   133,   134,   135,   137,   138,   140,   141,   142,   144,
     145,   147,   149,   151,   152,   159,   160,   161,   162,   163,
     164,   170,   178,   185,   205,   206,   208,   209,   210,     4,
       4,     6,    18,   126,     7,    92,   181,   182,     9,   174,
       3,    94,   125,   179,   183,   183,    57,   171,    94,   171,
     183,   186,   183,   194,   196,   197,   198,   199,   200,   200,
     201,   201,   201,   201,   202,   202,   202,   203,   203,   204,
     204,   204,     7,    92,   117,   115,     4,    18,   125,   125,
       6,    19,    94,     3,   143,     3,    19,    94,   183,   183,
       3,   183,   108,    25,    19,    19,   214,   135,   135,   204,
     116,     6,     8,   183,   128,   117,   182,    94,    20,   173,
     175,   125,     3,     4,    18,     8,     3,     8,   184,   191,
     117,   214,   214,     4,     4,    19,   134,   141,   153,   156,
     158,     3,   183,    19,    19,    19,   214,    19,   214,    81,
      94,   135,   136,   137,   139,   142,   146,   148,   150,   151,
     152,    92,     8,   174,    21,     4,   125,   183,   125,    25,
     119,    19,    19,    25,    18,    19,   183,     4,   165,   166,
     135,     3,    25,   167,   214,   136,   136,   104,   127,     4,
       4,   214,   183,   158,   154,   183,     4,   130,     4,   141,
     214,    81,    94,   136,   137,   142,   151,   152,    68,   136,
     189,     4,    19,   214,   165,     3,    25,   214,   214,   167,
     155,   157,   158,   135,     4,   214,   136,   135,    68,     4,
     214,   165,   167,   214,   136,     4,    68,   136,   214,   214
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    95,    96,    97,    97,    98,
      98,    99,    99,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   105,   105,   106,   106,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   112,   112,
     112,   112,   113,   114,   114,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   120,   121,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   131,   131,   132,   132,   133,   133,   134,   135,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   138,
     139,   140,   141,   141,   141,   141,   141,   141,   141,   143,
     142,   144,   145,   146,   147,   148,   149,   149,   150,   150,
     151,   152,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   158,   158,   159,   159,   160,   161,   161,   162,   162,
     163,   164,   166,   165,   167,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   170,   170,   170,   171,   172,   173,
     173,   174,   174,   175,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   183,   184,
     184,   186,   185,   187,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     190,   191,   192,   192,   193,   194,   194,   195,   196,   196,
     197,   197,   198,   198,   199,   199,   199,   200,   200,   200,
     200,   200,   201,   201,   201,   201,   202,   202,   202,   203,
     203,   203,   203,   204,   204,   204,   204,   204,   205,   206,
     207,   207,   207,   207,   208,   208,   208,   208,   209,   210,
     211,   212,   213,   214,   215,   216
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     3,     1,     2,     1,     0,
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
       4,     1,     0,     0,     0,     0
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
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2028 "parser.cpp"
    break;

  case 3:
#line 91 "parser.y++"
                           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("float");
        (yyval.ptr)->realVal = stod(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2043 "parser.cpp"
    break;

  case 4:
#line 101 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("boolean");
        if(string((yyvsp[0].str)) == "true") (yyval.ptr)->intVal = 1;
        else (yyval.ptr)->intVal = 0;
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2060 "parser.cpp"
    break;

  case 5:
#line 113 "parser.y++"
                       {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("char");
        (yyval.ptr)->intVal = char_int(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2075 "parser.cpp"
    break;

  case 6:
#line 123 "parser.y++"
                    {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("string");
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2090 "parser.cpp"
    break;

  case 7:
#line 133 "parser.y++"
                {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("textblock");
        (yyval.ptr)->tbval = (yyvsp[0].str);
        (yyval.ptr)->expType = 4;
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2104 "parser.cpp"
    break;

  case 8:
#line 142 "parser.y++"
                  {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("null");
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2118 "parser.cpp"
    break;

  case 9:
#line 155 "parser.y++"
                  {
        type = (yyvsp[0].ptr)->type;
        (yyval.ptr) = (yyvsp[0].ptr);}
#line 2126 "parser.cpp"
    break;

  case 10:
#line 158 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type = (yyvsp[0].str);
        (yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2138 "parser.cpp"
    break;

  case 11:
#line 169 "parser.y++"
                   {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2146 "parser.cpp"
    break;

  case 12:
#line 172 "parser.y++"
                        {
        (yyval.ptr) = (yyvsp[0].ptr) ;
    }
#line 2154 "parser.cpp"
    break;

  case 13:
#line 178 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);

    }
#line 2168 "parser.cpp"
    break;

  case 14:
#line 187 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2181 "parser.cpp"
    break;

  case 15:
#line 195 "parser.y++"
          {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2194 "parser.cpp"
    break;

  case 16:
#line 203 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2207 "parser.cpp"
    break;

  case 17:
#line 211 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2220 "parser.cpp"
    break;

  case 18:
#line 222 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2233 "parser.cpp"
    break;

  case 19:
#line 230 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2246 "parser.cpp"
    break;

  case 20:
#line 241 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
		(yyval.ptr)->expType = 2;
        (yyval.ptr)->type = "*";

    }
#line 2262 "parser.cpp"
    break;

  case 21:
#line 252 "parser.y++"
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
#line 2283 "parser.cpp"
    break;

  case 22:
#line 273 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2289 "parser.cpp"
    break;

  case 23:
#line 274 "parser.y++"
                  {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2295 "parser.cpp"
    break;

  case 24:
#line 277 "parser.y++"
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
#line 2341 "parser.cpp"
    break;

  case 25:
#line 320 "parser.y++"
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
#line 2383 "parser.cpp"
    break;

  case 26:
#line 361 "parser.y++"
                              {
        cout << "in compile unit\n";
        vector<data> v;
        insertAttr(v, (yyvsp[0].ptr), "", 1);
        // insertAttr(v, makeleaf($2), "", 1);
        (yyval.ptr) = makenode("CompilationUnit",v);

        //  Semantics
        if(((yyvsp[0].ptr)->is_error )){
            (yyval.ptr)->is_error = 1;
        }

        // ...
    }
#line 2402 "parser.cpp"
    break;

  case 27:
#line 378 "parser.y++"
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
#line 2420 "parser.cpp"
    break;

  case 28:
#line 391 "parser.y++"
                                           {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2428 "parser.cpp"
    break;

  case 29:
#line 397 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2434 "parser.cpp"
    break;

  case 30:
#line 398 "parser.y++"
                                                                               {
        cout << "TopLevelClassOrInterfaceDeclarations\n";
        vector<data> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Top_level_class_or_interface_declarations",v);

        //  Semantics
		// if($1->is_error || $2->is_error)	{
		// 	$$->is_error = 1;
		// }
    }
#line 2451 "parser.cpp"
    break;

  case 31:
#line 413 "parser.y++"
                       { (yyval.ptr) = (yyvsp[0].ptr);}
#line 2457 "parser.cpp"
    break;

  case 32:
#line 414 "parser.y++"
         {
        (yyval.ptr) = makeleaf(";");
    }
#line 2465 "parser.cpp"
    break;

  case 33:
#line 420 "parser.y++"
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
#line 2485 "parser.cpp"
    break;

  case 34:
#line 440 "parser.y++"
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
#line 2514 "parser.cpp"
    break;

  case 35:
#line 464 "parser.y++"
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
#line 2541 "parser.cpp"
    break;

  case 36:
#line 489 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2547 "parser.cpp"
    break;

  case 37:
#line 490 "parser.y++"
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
#line 2566 "parser.cpp"
    break;

  case 38:
#line 507 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "public";
    }
#line 2575 "parser.cpp"
    break;

  case 39:
#line 511 "parser.y++"
            {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "private";
    }
#line 2584 "parser.cpp"
    break;

  case 40:
#line 515 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "static";
    }
#line 2593 "parser.cpp"
    break;

  case 41:
#line 519 "parser.y++"
          {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "final";
    }
#line 2602 "parser.cpp"
    break;

  case 42:
#line 526 "parser.y++"
                                    {
        (yyval.ptr) = (yyvsp[-1].ptr);
    }
#line 2610 "parser.cpp"
    break;

  case 43:
#line 532 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2616 "parser.cpp"
    break;

  case 44:
#line 533 "parser.y++"
                                                {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Class_Body_Declarations",v);

        // Semantics
        // $$->is_error = $1->is_error || $2->is_error;
    }
#line 2630 "parser.cpp"
    break;

  case 45:
#line 545 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2636 "parser.cpp"
    break;

  case 46:
#line 546 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2642 "parser.cpp"
    break;

  case 47:
#line 547 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2648 "parser.cpp"
    break;

  case 48:
#line 548 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2654 "parser.cpp"
    break;

  case 49:
#line 552 "parser.y++"
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
#line 2674 "parser.cpp"
    break;

  case 50:
#line 567 "parser.y++"
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
#line 2693 "parser.cpp"
    break;

  case 51:
#line 585 "parser.y++"
                         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2701 "parser.cpp"
    break;

  case 52:
#line 588 "parser.y++"
                                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator_List",v);

        //  Semantics
        (yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error; 
    }
#line 2716 "parser.cpp"
    break;

  case 53:
#line 601 "parser.y++"
                 {
        (yyval.ptr) = (yyvsp[0].ptr);

		// Semantics
		if (insertStructAttr((yyvsp[0].ptr)->tempName, (yyvsp[0].ptr)->type, (yyvsp[0].ptr)->size, 0) != 1){
			yyerror(("The Attribute " + string((yyvsp[0].ptr)->tempName) + " is already declared in the same class").c_str());
			(yyval.ptr)->is_error = 1;
		} 
    }
#line 2730 "parser.cpp"
    break;

  case 54:
#line 610 "parser.y++"
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
		(yyval.ptr)->type=(yyvsp[-2].ptr)->type;
		int num = assign_exp((yyvsp[-1].str), (yyval.ptr)->type, (yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place);
		(yyval.ptr)->place = (yyvsp[-2].ptr)->place;
		backpatch((yyvsp[0].ptr)->nextlist, num);
    }
#line 2755 "parser.cpp"
    break;

  case 55:
#line 633 "parser.y++"
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
		(yyval.ptr)->place = qid(string((yyvsp[0].str)), lookup(string((yyvsp[0].str))));
    }
#line 2776 "parser.cpp"
    break;

  case 56:
#line 649 "parser.y++"
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
#line 2808 "parser.cpp"
    break;

  case 57:
#line 679 "parser.y++"
                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_declaration",v);

        // Semantics
        (yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2822 "parser.cpp"
    break;

  case 58:
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
#line 2840 "parser.cpp"
    break;

  case 59:
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
#line 2857 "parser.cpp"
    break;

  case 60:
#line 715 "parser.y++"
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
#line 2875 "parser.cpp"
    break;

  case 61:
#line 728 "parser.y++"
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
#line 2892 "parser.cpp"
    break;

  case 62:
#line 743 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2905 "parser.cpp"
    break;

  case 63:
#line 754 "parser.y++"
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
#line 2968 "parser.cpp"
    break;

  case 64:
#line 812 "parser.y++"
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
#line 3015 "parser.cpp"
    break;

  case 65:
#line 857 "parser.y++"
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
#line 3037 "parser.cpp"
    break;

  case 66:
#line 877 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3043 "parser.cpp"
    break;

  case 67:
#line 878 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3049 "parser.cpp"
    break;

  case 68:
#line 882 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3055 "parser.cpp"
    break;

  case 69:
#line 883 "parser.y++"
           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3061 "parser.cpp"
    break;

  case 70:
#line 887 "parser.y++"
                      {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3069 "parser.cpp"
    break;

  case 71:
#line 890 "parser.y++"
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
#line 3089 "parser.cpp"
    break;

  case 72:
#line 909 "parser.y++"
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
#line 3122 "parser.cpp"
    break;

  case 73:
#line 941 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3128 "parser.cpp"
    break;

  case 74:
#line 942 "parser.y++"
          {(yyval.ptr)=makeleaf(";");}
#line 3134 "parser.cpp"
    break;

  case 75:
#line 946 "parser.y++"
                   {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("StaticInitilizer",v);

        (yyval.ptr)->is_error = (yyvsp[0].ptr)->is_error;
    }
#line 3147 "parser.cpp"
    break;

  case 76:
#line 957 "parser.y++"
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
#line 3165 "parser.cpp"
    break;

  case 77:
#line 973 "parser.y++"
                                                           {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Conclassor_body",v);
    }
#line 3178 "parser.cpp"
    break;

  case 78:
#line 981 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Conclassor_body",v);
    }
#line 3190 "parser.cpp"
    break;

  case 79:
#line 991 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConclassorInvocation",v);


    }
#line 3206 "parser.cpp"
    break;

  case 80:
#line 1002 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConclassorInvocation",v);


    }
#line 3222 "parser.cpp"
    break;

  case 81:
#line 1016 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3228 "parser.cpp"
    break;

  case 82:
#line 1017 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3234 "parser.cpp"
    break;

  case 83:
#line 1022 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3240 "parser.cpp"
    break;

  case 84:
#line 1023 "parser.y++"
          {(yyval.ptr)=makeleaf(",");}
#line 3246 "parser.cpp"
    break;

  case 85:
#line 1027 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3252 "parser.cpp"
    break;

  case 86:
#line 1028 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3258 "parser.cpp"
    break;

  case 87:
#line 1034 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 3271 "parser.cpp"
    break;

  case 88:
#line 1042 "parser.y++"
                  {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 3283 "parser.cpp"
    break;

  case 89:
#line 1052 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3289 "parser.cpp"
    break;

  case 90:
#line 1053 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("VariableInitializerList", v);
    }
#line 3301 "parser.cpp"
    break;

  case 91:
#line 1066 "parser.y++"
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
#line 3319 "parser.cpp"
    break;

  case 92:
#line 1082 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3325 "parser.cpp"
    break;

  case 93:
#line 1083 "parser.y++"
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
#line 3353 "parser.cpp"
    break;

  case 94:
#line 1109 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3359 "parser.cpp"
    break;

  case 95:
#line 1110 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3365 "parser.cpp"
    break;

  case 96:
#line 1114 "parser.y++"
                                   {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3371 "parser.cpp"
    break;

  case 97:
#line 1115 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3377 "parser.cpp"
    break;

  case 98:
#line 1119 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LocalVariableDeclaration", v);

        // Semantics
        (yyval.ptr)->is_error = (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 3391 "parser.cpp"
    break;

  case 99:
#line 1132 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3397 "parser.cpp"
    break;

  case 100:
#line 1133 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3403 "parser.cpp"
    break;

  case 101:
#line 1134 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3409 "parser.cpp"
    break;

  case 102:
#line 1135 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3415 "parser.cpp"
    break;

  case 103:
#line 1136 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3421 "parser.cpp"
    break;

  case 104:
#line 1137 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3427 "parser.cpp"
    break;

  case 105:
#line 1141 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3433 "parser.cpp"
    break;

  case 106:
#line 1142 "parser.y++"
                              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3439 "parser.cpp"
    break;

  case 107:
#line 1143 "parser.y++"
                                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3445 "parser.cpp"
    break;

  case 108:
#line 1144 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3451 "parser.cpp"
    break;

  case 109:
#line 1145 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3457 "parser.cpp"
    break;

  case 110:
#line 1149 "parser.y++"
          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3463 "parser.cpp"
    break;

  case 111:
#line 1150 "parser.y++"
        {(yyval.ptr)=makeleaf(";");}
#line 3469 "parser.cpp"
    break;

  case 112:
#line 1151 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3475 "parser.cpp"
    break;

  case 113:
#line 1152 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3481 "parser.cpp"
    break;

  case 114:
#line 1153 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3487 "parser.cpp"
    break;

  case 115:
#line 1154 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3493 "parser.cpp"
    break;

  case 116:
#line 1155 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3499 "parser.cpp"
    break;

  case 117:
#line 1156 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3505 "parser.cpp"
    break;

  case 118:
#line 1157 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3511 "parser.cpp"
    break;

  case 119:
#line 1161 "parser.y++"
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
#line 3542 "parser.cpp"
    break;

  case 120:
#line 1190 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatementNoShortIf", v);
    }
#line 3554 "parser.cpp"
    break;

  case 121:
#line 1200 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ExpressionStatement", v);
    }
#line 3565 "parser.cpp"
    break;

  case 122:
#line 1209 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3571 "parser.cpp"
    break;

  case 123:
#line 1210 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3577 "parser.cpp"
    break;

  case 124:
#line 1211 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3583 "parser.cpp"
    break;

  case 125:
#line 1212 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3589 "parser.cpp"
    break;

  case 126:
#line 1213 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3595 "parser.cpp"
    break;

  case 127:
#line 1214 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3601 "parser.cpp"
    break;

  case 128:
#line 1215 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3607 "parser.cpp"
    break;

  case 129:
#line 1219 "parser.y++"
         {if_found = 1;}
#line 3613 "parser.cpp"
    break;

  case 130:
#line 1219 "parser.y++"
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
#line 3631 "parser.cpp"
    break;

  case 131:
#line 1234 "parser.y++"
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
#line 3654 "parser.cpp"
    break;

  case 132:
#line 1255 "parser.y++"
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

  case 133:
#line 1279 "parser.y++"
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
#line 3706 "parser.cpp"
    break;

  case 134:
#line 1303 "parser.y++"
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
#line 3730 "parser.cpp"
    break;

  case 135:
#line 1325 "parser.y++"
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
#line 3754 "parser.cpp"
    break;

  case 136:
#line 1347 "parser.y++"
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
#line 3773 "parser.cpp"
    break;

  case 137:
#line 1361 "parser.y++"
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
#line 3792 "parser.cpp"
    break;

  case 138:
#line 1378 "parser.y++"
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
#line 3812 "parser.cpp"
    break;

  case 139:
#line 1393 "parser.y++"
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
#line 3831 "parser.cpp"
    break;

  case 140:
#line 1410 "parser.y++"
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
#line 3857 "parser.cpp"
    break;

  case 141:
#line 1433 "parser.y++"
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
#line 3880 "parser.cpp"
    break;

  case 142:
#line 1453 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3886 "parser.cpp"
    break;

  case 143:
#line 1454 "parser.y++"
              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3892 "parser.cpp"
    break;

  case 144:
#line 1458 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3898 "parser.cpp"
    break;

  case 145:
#line 1459 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3904 "parser.cpp"
    break;

  case 146:
#line 1463 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3910 "parser.cpp"
    break;

  case 147:
#line 1464 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3916 "parser.cpp"
    break;

  case 148:
#line 1468 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3922 "parser.cpp"
    break;

  case 149:
#line 1469 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3928 "parser.cpp"
    break;

  case 150:
#line 1473 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3934 "parser.cpp"
    break;

  case 151:
#line 1477 "parser.y++"
                        {
		(yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3942 "parser.cpp"
    break;

  case 152:
#line 1480 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("StatementExpressionList2", v);
    }
#line 3954 "parser.cpp"
    break;

  case 153:
#line 1491 "parser.y++"
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
#line 3970 "parser.cpp"
    break;

  case 154:
#line 1502 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));
        
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3982 "parser.cpp"
    break;

  case 155:
#line 1512 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("YieldStatement", v);

        // semantics
    }
#line 3996 "parser.cpp"
    break;

  case 156:
#line 1524 "parser.y++"
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
#line 4013 "parser.cpp"
    break;

  case 157:
#line 1536 "parser.y++"
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
#line 4029 "parser.cpp"
    break;

  case 158:
#line 1550 "parser.y++"
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
#line 4048 "parser.cpp"
    break;

  case 159:
#line 1564 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        emit(qid("RETURN", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
    }
#line 4059 "parser.cpp"
    break;

  case 160:
#line 1573 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ThrowStatement", v);

        // Semantics
        yyerror("Not implemented yet\n");        
    }
#line 4074 "parser.cpp"
    break;

  case 161:
#line 1586 "parser.y++"
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
#line 4091 "parser.cpp"
    break;

  case 162:
#line 1601 "parser.y++"
      {if_found = 1;}
#line 4097 "parser.cpp"
    break;

  case 163:
#line 1601 "parser.y++"
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
#line 4115 "parser.cpp"
    break;

  case 164:
#line 1633 "parser.y++"
             {
        int a = code.size();
		(yyval.ptr) = new treeNode;
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->nextlist.push_back(a);
    }
#line 4126 "parser.cpp"
    break;

  case 165:
#line 1644 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4132 "parser.cpp"
    break;

  case 166:
#line 1645 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4138 "parser.cpp"
    break;

  case 167:
#line 1648 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4144 "parser.cpp"
    break;

  case 168:
#line 1649 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 4150 "parser.cpp"
    break;

  case 169:
#line 1650 "parser.y++"
                       {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 4156 "parser.cpp"
    break;

  case 170:
#line 1651 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4162 "parser.cpp"
    break;

  case 171:
#line 1652 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr) ;}
#line 4168 "parser.cpp"
    break;

  case 172:
#line 1653 "parser.y++"
                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4174 "parser.cpp"
    break;

  case 173:
#line 1654 "parser.y++"
                      {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4180 "parser.cpp"
    break;

  case 174:
#line 1659 "parser.y++"
                                                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4186 "parser.cpp"
    break;

  case 175:
#line 1660 "parser.y++"
                                                        {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4198 "parser.cpp"
    break;

  case 176:
#line 1667 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4210 "parser.cpp"
    break;

  case 177:
#line 1677 "parser.y++"
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
#line 4225 "parser.cpp"
    break;

  case 178:
#line 1690 "parser.y++"
                                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstantiate", v);
    }
#line 4237 "parser.cpp"
    break;

  case 179:
#line 1700 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4243 "parser.cpp"
    break;

  case 180:
#line 1701 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4249 "parser.cpp"
    break;

  case 181:
#line 1705 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4255 "parser.cpp"
    break;

  case 182:
#line 1706 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstant", v);
    }
#line 4267 "parser.cpp"
    break;

  case 183:
#line 1716 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, NULL, ">", 0);
		(yyval.ptr) = makenode("TypeArgumentsOrDiamond", v);
    }
#line 4278 "parser.cpp"
    break;

  case 184:
#line 1725 "parser.y++"
                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 4290 "parser.cpp"
    break;

  case 185:
#line 1732 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 4302 "parser.cpp"
    break;

  case 186:
#line 1742 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 4315 "parser.cpp"
    break;

  case 187:
#line 1750 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 4328 "parser.cpp"
    break;

  case 188:
#line 1762 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4341 "parser.cpp"
    break;

  case 189:
#line 1770 "parser.y++"
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
#line 4356 "parser.cpp"
    break;

  case 190:
#line 1780 "parser.y++"
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
#line 4371 "parser.cpp"
    break;

  case 191:
#line 1793 "parser.y++"
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
#line 4391 "parser.cpp"
    break;

  case 192:
#line 1808 "parser.y++"
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
#line 4417 "parser.cpp"
    break;

  case 193:
#line 1831 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4430 "parser.cpp"
    break;

  case 194:
#line 1839 "parser.y++"
                                             {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4443 "parser.cpp"
    break;

  case 195:
#line 1850 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4449 "parser.cpp"
    break;

  case 196:
#line 1851 "parser.y++"
                     {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("DimExprs", v);
    }
#line 4460 "parser.cpp"
    break;

  case 197:
#line 1861 "parser.y++"
                        {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("DimExpr", v);
    }
#line 4472 "parser.cpp"
    break;

  case 198:
#line 1871 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4478 "parser.cpp"
    break;

  case 199:
#line 1876 "parser.y++"
                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4484 "parser.cpp"
    break;

  case 200:
#line 1877 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4490 "parser.cpp"
    break;

  case 201:
#line 1881 "parser.y++"
                                     {if_found = 0;}
#line 4496 "parser.cpp"
    break;

  case 202:
#line 1881 "parser.y++"
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
#line 4540 "parser.cpp"
    break;

  case 203:
#line 1923 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4546 "parser.cpp"
    break;

  case 204:
#line 1924 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4552 "parser.cpp"
    break;

  case 205:
#line 1925 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4558 "parser.cpp"
    break;

  case 206:
#line 1929 "parser.y++"
        {(yyval.ptr) = makeleaf("=");
    (yyval.ptr)->tempName = "=";}
#line 4565 "parser.cpp"
    break;

  case 207:
#line 1931 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4573 "parser.cpp"
    break;

  case 208:
#line 1934 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4581 "parser.cpp"
    break;

  case 209:
#line 1937 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4589 "parser.cpp"
    break;

  case 210:
#line 1940 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4597 "parser.cpp"
    break;

  case 211:
#line 1943 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4605 "parser.cpp"
    break;

  case 212:
#line 1946 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4613 "parser.cpp"
    break;

  case 213:
#line 1949 "parser.y++"
                 {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4621 "parser.cpp"
    break;

  case 214:
#line 1952 "parser.y++"
                          {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4629 "parser.cpp"
    break;

  case 215:
#line 1955 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4637 "parser.cpp"
    break;

  case 216:
#line 1958 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4645 "parser.cpp"
    break;

  case 217:
#line 1961 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4653 "parser.cpp"
    break;

  case 218:
#line 1967 "parser.y++"
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
#line 4708 "parser.cpp"
    break;

  case 219:
#line 2017 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4714 "parser.cpp"
    break;

  case 220:
#line 2021 "parser.y++"
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
#line 4734 "parser.cpp"
    break;

  case 221:
#line 2039 "parser.y++"
                 {
		emit(qid("=", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
		emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
		(yyval.ind) = code.size()-1;
	}
#line 4744 "parser.cpp"
    break;

  case 222:
#line 2047 "parser.y++"
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
#line 4784 "parser.cpp"
    break;

  case 223:
#line 2082 "parser.y++"
                              { (yyval.ptr) = (yyvsp[0].ptr) ; }
#line 4790 "parser.cpp"
    break;

  case 224:
#line 2086 "parser.y++"
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
#line 4809 "parser.cpp"
    break;

  case 225:
#line 2103 "parser.y++"
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
#line 4848 "parser.cpp"
    break;

  case 226:
#line 2137 "parser.y++"
                           { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4854 "parser.cpp"
    break;

  case 227:
#line 2141 "parser.y++"
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
#line 4873 "parser.cpp"
    break;

  case 228:
#line 2158 "parser.y++"
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
#line 4919 "parser.cpp"
    break;

  case 229:
#line 2199 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4925 "parser.cpp"
    break;

  case 230:
#line 2202 "parser.y++"
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
#line 4971 "parser.cpp"
    break;

  case 231:
#line 2243 "parser.y++"
                   {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4977 "parser.cpp"
    break;

  case 232:
#line 2247 "parser.y++"
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
#line 5023 "parser.cpp"
    break;

  case 233:
#line 2288 "parser.y++"
                        {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5029 "parser.cpp"
    break;

  case 234:
#line 2292 "parser.y++"
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
#line 5073 "parser.cpp"
    break;

  case 235:
#line 2331 "parser.y++"
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
#line 5119 "parser.cpp"
    break;

  case 236:
#line 2372 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5125 "parser.cpp"
    break;

  case 237:
#line 2376 "parser.y++"
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
#line 5176 "parser.cpp"
    break;

  case 238:
#line 2422 "parser.y++"
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
#line 5225 "parser.cpp"
    break;

  case 239:
#line 2466 "parser.y++"
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
#line 5264 "parser.cpp"
    break;

  case 240:
#line 2500 "parser.y++"
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
#line 5302 "parser.cpp"
    break;

  case 241:
#line 2533 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5308 "parser.cpp"
    break;

  case 242:
#line 2538 "parser.y++"
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
#line 5351 "parser.cpp"
    break;

  case 243:
#line 2576 "parser.y++"
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
#line 5395 "parser.cpp"
    break;

  case 244:
#line 2615 "parser.y++"
                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        yyerror("Not implemented yet!\n");

    }
#line 5410 "parser.cpp"
    break;

  case 245:
#line 2625 "parser.y++"
                        {(yyval.ptr)= (yyvsp[0].ptr);}
#line 5416 "parser.cpp"
    break;

  case 246:
#line 2629 "parser.y++"
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
#line 5480 "parser.cpp"
    break;

  case 247:
#line 2688 "parser.y++"
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
#line 5544 "parser.cpp"
    break;

  case 248:
#line 2747 "parser.y++"
                              {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5550 "parser.cpp"
    break;

  case 249:
#line 2752 "parser.y++"
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
#line 5622 "parser.cpp"
    break;

  case 250:
#line 2819 "parser.y++"
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
#line 5692 "parser.cpp"
    break;

  case 251:
#line 2884 "parser.y++"
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
#line 5736 "parser.cpp"
    break;

  case 252:
#line 2923 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5742 "parser.cpp"
    break;

  case 253:
#line 2928 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5748 "parser.cpp"
    break;

  case 254:
#line 2929 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5754 "parser.cpp"
    break;

  case 255:
#line 2930 "parser.y++"
                         {
        // $1=makeleaf("+");
        vector<data>v;
        insertAttr(v, NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        //--3AC
		qid plus=qid("unary+", lookup("+"));
        
        //Semantic
        // remember this line
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("+",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(plus,(yyvsp[0].ptr)->place, qid("", NULL), q, -1);
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
#line 5794 "parser.cpp"
    break;

  case 256:
#line 2965 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        
        //--3AC
		// $1->place = ;

        //Semantic
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("-",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("unary-", lookup("-")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
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
#line 5833 "parser.cpp"
    break;

  case 257:
#line 2999 "parser.y++"
                                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5839 "parser.cpp"
    break;

  case 258:
#line 3003 "parser.y++"
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
#line 5877 "parser.cpp"
    break;

  case 259:
#line 3039 "parser.y++"
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
#line 5913 "parser.cpp"
    break;

  case 260:
#line 3073 "parser.y++"
                       {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5919 "parser.cpp"
    break;

  case 261:
#line 3075 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "~", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
        

        //semantic
        // $$->place = ;

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
				emit(qid("~", lookup("~")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
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
#line 5957 "parser.cpp"
    break;

  case 262:
#line 3108 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "!", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);

        //semantic
        // $1->place = qid("~", lookup("~"));

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
				emit(qid("!", lookup("!")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
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
#line 5994 "parser.cpp"
    break;

  case 263:
#line 3140 "parser.y++"
                    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 6000 "parser.cpp"
    break;

  case 264:
#line 3144 "parser.y++"
             {(yyval.ptr) = (yyvsp[0].ptr);}
#line 6006 "parser.cpp"
    break;

  case 265:
#line 3145 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 6012 "parser.cpp"
    break;

  case 266:
#line 3146 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 6018 "parser.cpp"
    break;

  case 267:
#line 3147 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 6024 "parser.cpp"
    break;

  case 268:
#line 3151 "parser.y++"
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
#line 6063 "parser.cpp"
    break;

  case 269:
#line 3188 "parser.y++"
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
#line 6103 "parser.cpp"
    break;

  case 270:
#line 3226 "parser.y++"
                                             { // 1
        vector<data>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("CastExpression", v);
    }
#line 6116 "parser.cpp"
    break;

  case 271:
#line 3239 "parser.y++"
                        {
		(yyval.ptr) = makeleaf((yyvsp[0].str));
		className = (yyvsp[0].str);
		classTemp = className ; 
	}
#line 6126 "parser.cpp"
    break;

  case 272:
#line 3247 "parser.y++"
             {
		(yyval.ptr) = new treeNode;
		createStructTable();

		if(type != "") {
			yyerror(("cannot combine with previous " + type + " declaration specifier").c_str());
			(yyval.ptr)->is_error = 1;
		}
	}
#line 6140 "parser.cpp"
    break;

  case 273:
#line 3259 "parser.y++"
                 {
		(yyval.ind) = code.size();
	}
#line 6148 "parser.cpp"
    break;

  case 274:
#line 3265 "parser.y++"
                 {
		if(func_flag){
			string str = "Block" +to_string(block_count);
			block_stack.push(block_count);
			block_count++;
			func_flag++;
			makeSymbolTable(str, "",0);
		}
		else func_flag++;
	}
#line 6163 "parser.cpp"
    break;

  case 275:
#line 3278 "parser.y++"
                        {
		type ="";
		func_flag = 0;
		funcArgs.clear();
		createParamList();
		gotolablelist.clear();
		gotolabel.clear();
	}
#line 6176 "parser.cpp"
    break;


#line 6180 "parser.cpp"

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
#line 3287 "parser.y++"

    
int main(int argc, char* argv[]){

    dotfile=fopen(argv[1],"w");

    if(dotfile == NULL){
		/* print_error(); */
		cout<<"cannot open the dot file AST.dot"<<"\nCompilation terminated\n";
		return -1;
	}

    symTable_init();
	beginAST();
    yyparse();

    /* for(int i=2; i<argc; i++){
        if(!strcmp(argv[i], "-dump-sym-table")) dump_sym_table = 1;
		else if(!strcmp(argv[i], "-dump-tac")) dump_tac = 1;
		else if(!strcmp(argv[i], "-dump-all")) dump_tac = dump_sym_table = 1;
    } */
	setGlobal();
	print3AC();
	endAST();
	printSymbolTable(&globalst, "#Global_Symbol_Table#.csv");
    
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
