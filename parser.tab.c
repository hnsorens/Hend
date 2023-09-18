/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

#include "asc.c"

struct Decl * code;


#line 81 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_FOR = 4,                        /* FOR  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_QUOTE = 6,                      /* QUOTE  */
  YYSYMBOL_TRUE_ = 7,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 8,                     /* FALSE_  */
  YYSYMBOL_CHARACTER = 9,                  /* CHARACTER  */
  YYSYMBOL_BOOLEAN = 10,                   /* BOOLEAN  */
  YYSYMBOL_ERROR = 11,                     /* ERROR  */
  YYSYMBOL_I1 = 12,                        /* I1  */
  YYSYMBOL_I2 = 13,                        /* I2  */
  YYSYMBOL_I4 = 14,                        /* I4  */
  YYSYMBOL_I8 = 15,                        /* I8  */
  YYSYMBOL_UI1 = 16,                       /* UI1  */
  YYSYMBOL_UI2 = 17,                       /* UI2  */
  YYSYMBOL_UI4 = 18,                       /* UI4  */
  YYSYMBOL_UI8 = 19,                       /* UI8  */
  YYSYMBOL_F4 = 20,                        /* F4  */
  YYSYMBOL_F8 = 21,                        /* F8  */
  YYSYMBOL_STRUCT = 22,                    /* STRUCT  */
  YYSYMBOL_MODULE = 23,                    /* MODULE  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_EXTEND = 25,                    /* EXTEND  */
  YYSYMBOL_REQUIREMENT = 26,               /* REQUIREMENT  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_CONSTRUCTOR = 28,               /* CONSTRUCTOR  */
  YYSYMBOL_VOID = 29,                      /* VOID  */
  YYSYMBOL_OBJECT = 30,                    /* OBJECT  */
  YYSYMBOL_INCLUDE = 31,                   /* INCLUDE  */
  YYSYMBOL_NUM = 32,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 33,                /* IDENTIFIER  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_TIMES = 36,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 37,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 39,                 /* SEMICOLON  */
  YYSYMBOL_FUNCTION = 40,                  /* FUNCTION  */
  YYSYMBOL_LPAREN = 41,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 42,                    /* RPAREN  */
  YYSYMBOL_LCBRACKET = 43,                 /* LCBRACKET  */
  YYSYMBOL_RCBRACKET = 44,                 /* RCBRACKET  */
  YYSYMBOL_PUBLIC = 45,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 46,                   /* PRIVATE  */
  YYSYMBOL_LBRACKET = 47,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 48,                  /* RBRACKET  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_declaration = 51,               /* declaration  */
  YYSYMBOL_function_decl = 52,             /* function_decl  */
  YYSYMBOL_module_decl = 53,               /* module_decl  */
  YYSYMBOL_object_decl = 54,               /* object_decl  */
  YYSYMBOL_constructor_decl = 55,          /* constructor_decl  */
  YYSYMBOL_function_statement = 56,        /* function_statement  */
  YYSYMBOL_module_statement = 57,          /* module_statement  */
  YYSYMBOL_object_statement = 58,          /* object_statement  */
  YYSYMBOL_param = 59,                     /* param  */
  YYSYMBOL_arguments = 60,                 /* arguments  */
  YYSYMBOL_errors = 61,                    /* errors  */
  YYSYMBOL_access_modifier = 62,           /* access_modifier  */
  YYSYMBOL_exp = 63,                       /* exp  */
  YYSYMBOL_decl = 64,                      /* decl  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_type = 66                       /* type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    53,    53,    54,    58,    59,    60,    61,    65,    69,
      73,    89,    93,    97,   101,   102,   103,   104,   126,   127,
     128,   129,   130,   134,   135,   136,   139,   140,   141,   142,
     143,   147,   148,   149,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   169,   170,   171,   175,   176,
     177,   178,   179,   180,   181,   182,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "FOR", "WHILE",
  "QUOTE", "TRUE_", "FALSE_", "CHARACTER", "BOOLEAN", "ERROR", "I1", "I2",
  "I4", "I8", "UI1", "UI2", "UI4", "UI8", "F4", "F8", "STRUCT", "MODULE",
  "RETURN", "EXTEND", "REQUIREMENT", "COMMA", "CONSTRUCTOR", "VOID",
  "OBJECT", "INCLUDE", "NUM", "IDENTIFIER", "PLUS", "MINUS", "TIMES",
  "DIVIDE", "ASSIGN", "SEMICOLON", "FUNCTION", "LPAREN", "RPAREN",
  "LCBRACKET", "RCBRACKET", "PUBLIC", "PRIVATE", "LBRACKET", "RBRACKET",
  "$accept", "program", "declaration", "function_decl", "module_decl",
  "object_decl", "constructor_decl", "function_statement",
  "module_statement", "object_statement", "param", "arguments", "errors",
  "access_modifier", "exp", "decl", "statement", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -89,   -89,    22,   -89,     8,     8,     8,   -16,   -89,
     -89,   -89,   -89,   -10,     2,     9,     4,    20,    28,   -89,
     117,   296,    30,    31,    34,    42,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     5,    43,
     -89,    -8,   -35,   -35,    41,   240,   -35,   -89,    59,   -89,
     -21,    68,    56,     5,     5,     5,    63,   250,   -35,    70,
     -89,    75,   -89,    67,     5,     5,     5,     5,     5,   161,
     -89,   -23,   296,    97,   -18,   -89,   118,    23,   162,   161,
      66,    83,    80,    86,   -89,    78,    78,    78,    78,    78,
     -89,   104,     5,   205,   105,   106,   285,   296,     5,    99,
       5,   100,   -89,   -89,     5,   -89,   -12,   286,   -89,   -89,
     102,   -89,   111,    97,   119,    78,   249,    44,   249,    62,
       5,   161,   205,     5,   -89,    -7,   107,     5,   113,    70,
     297,   -89,   -89,    78,   249,   161,   206,   161,   -89,   161,
     114,   -89,   116,   -89,   -89,   249,   123,   161,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      31,    32,    33,     0,     3,    31,    31,    31,     0,     1,
       5,     7,     6,     0,     0,     0,     0,     0,     0,    13,
      34,    18,     0,     0,     0,     0,    37,    38,    67,    66,
      58,    59,    60,    61,    62,    63,    64,    65,    34,     0,
      36,    35,    31,    31,     0,     0,    31,    12,     0,    57,
       0,     0,     0,    34,    34,    34,    35,     0,    31,    23,
      17,     0,    16,     0,    34,    34,    34,    34,    34,    34,
      15,     0,     0,    26,    19,     9,     0,     0,     0,    34,
       0,     0,     0,     0,    10,    40,    41,    42,    43,    39,
      53,     0,    34,    34,     0,    27,    56,    18,    34,     0,
      34,     0,    52,    11,    34,    44,     0,     0,    46,    54,
       0,    28,    29,    26,    21,    20,    34,     0,    34,    24,
      34,    34,    34,    34,    30,     0,     0,    34,     0,    23,
       0,    47,    55,    22,    34,    34,     0,    34,    25,    34,
       0,    49,     0,    51,     8,    34,     0,    34,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,    39,    90,   -89,    24,   -89,    38,   -89,   -89,
      84,    53,    71,    -3,   -36,   -88,   -28,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,    42,    43,    22,    44,
      50,    83,    96,     8,    45,    46,    47,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    51,    57,    -2,   112,   108,    72,    13,    -4,    97,
       1,     2,    26,    27,    14,    92,    93,    76,    77,    78,
      98,    73,     9,    16,    15,   -57,   120,   121,    85,    86,
      87,    88,    89,    59,   131,    17,   134,    40,    56,    61,
      61,    90,    18,    61,    10,    11,    12,    19,     1,     2,
     100,   102,    94,     1,     2,    81,   107,    64,    65,    66,
      67,    68,   115,    20,   117,   109,    60,    62,   119,    21,
      70,   127,    53,    48,    52,    54,   113,    51,    64,    65,
      66,    67,    68,    55,   130,    63,    58,   133,   126,   129,
     128,   136,    71,   109,   132,    75,    64,    65,    66,    67,
      68,    74,    48,    82,    59,    14,    84,   141,    95,   143,
     103,   132,    64,    65,    66,    67,    68,   146,   104,   148,
      23,    24,    25,    15,    26,    27,    28,    29,   105,    30,
      31,    32,    33,    34,    35,    36,    37,   106,   110,   111,
     123,    38,   116,   118,   124,    39,    72,   -45,    80,    40,
      41,   135,    64,    65,    66,    67,    68,   137,   144,   145,
      99,   -14,   -45,   -45,    23,    24,    25,   147,    26,    27,
      28,    29,   140,    30,    31,    32,    33,    34,    35,    36,
      37,   114,   138,     0,   125,    38,     0,     0,     0,     0,
       0,   -48,     0,    40,    41,     0,    64,    65,    66,    67,
      68,     0,     0,     0,   101,   -48,   -48,   -48,    23,    24,
      25,     0,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,   -45,     0,    40,    41,     0,
      64,    65,    66,    67,    68,     0,     0,     0,   142,     0,
     -45,   -45,    23,    24,    25,     0,    26,    27,    28,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,     0,
       0,     0,     0,    38,    64,    65,    66,    67,    68,    69,
       0,    40,    41,     0,    64,    65,    66,    67,    68,    79,
       0,     0,     0,   -48,    28,    29,   112,    30,    31,    32,
      33,    34,    35,    36,    37,    28,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,     0,     0,    49,     0,
      64,    65,    66,    67,    68,   122,     0,     0,     0,    49,
       0,    64,    65,    66,    67,    68,   139
};

static const yytype_int16 yycheck[] =
{
      20,    21,    38,     0,    11,    93,    27,    23,     0,    27,
      45,    46,     7,     8,    30,    38,    39,    53,    54,    55,
      38,    42,     0,    33,    40,    33,    38,    39,    64,    65,
      66,    67,    68,    41,   122,    33,    43,    32,    33,    42,
      43,    69,    33,    46,     5,     6,     7,    43,    45,    46,
      27,    79,    72,    45,    46,    58,    92,    34,    35,    36,
      37,    38,    98,    43,   100,    93,    42,    43,   104,    41,
      46,    27,    41,    93,    44,    41,    96,    97,    34,    35,
      36,    37,    38,    41,   120,    44,    43,   123,   116,    27,
     118,   127,    33,   121,   122,    39,    34,    35,    36,    37,
      38,    33,   122,    33,    41,    30,    39,   135,    11,   137,
      44,   139,    34,    35,    36,    37,    38,   145,    38,   147,
       3,     4,     5,    40,     7,     8,     9,    10,    42,    12,
      13,    14,    15,    16,    17,    18,    19,    33,    33,    33,
      38,    24,    43,    43,    33,    28,    27,    30,    58,    32,
      33,    44,    34,    35,    36,    37,    38,    44,    44,    43,
      42,    44,    45,    46,     3,     4,     5,    44,     7,     8,
       9,    10,   134,    12,    13,    14,    15,    16,    17,    18,
      19,    97,   129,    -1,   113,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    44,    45,    46,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    -1,
      45,    46,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    34,    35,    36,    37,    38,    39,
      -1,    32,    33,    -1,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    44,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    33,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    33,
      -1,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,    46,    50,    51,    52,    53,    54,    62,     0,
      51,    51,    51,    23,    30,    40,    33,    33,    33,    43,
      43,    41,    57,     3,     4,     5,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    24,    28,
      32,    33,    55,    56,    58,    63,    64,    65,    66,    33,
      59,    66,    44,    41,    41,    41,    33,    63,    43,    41,
      54,    62,    54,    44,    34,    35,    36,    37,    38,    39,
      54,    33,    27,    42,    33,    39,    63,    63,    63,    39,
      52,    62,    33,    60,    39,    63,    63,    63,    63,    63,
      65,    66,    38,    39,    66,    11,    61,    27,    38,    42,
      27,    42,    65,    44,    38,    42,    33,    63,    64,    65,
      33,    33,    11,    66,    59,    63,    43,    63,    43,    63,
      38,    39,    39,    38,    33,    61,    65,    27,    65,    27,
      63,    64,    65,    63,    43,    44,    63,    44,    60,    39,
      56,    65,    42,    65,    44,    43,    65,    44,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    52,    53,
      54,    55,    56,    57,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     2,     2,    12,     7,
       7,     4,     1,     0,     0,     2,     2,     2,     0,     2,
       4,     4,     6,     0,     3,     5,     0,     1,     2,     2,
       3,     0,     1,     1,     0,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     4,     0,     4,     6,     0,     8,
      12,     8,     4,     3,     4,     6,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: %empty  */
#line 53 "parser.y"
    { (yyval.decl_ptr) = NULL; }
#line 1262 "parser.tab.c"
    break;

  case 3: /* program: declaration  */
#line 54 "parser.y"
                  { code = (yyvsp[0].decl_ptr); }
#line 1268 "parser.tab.c"
    break;

  case 4: /* declaration: %empty  */
#line 58 "parser.y"
    { (yyval.decl_ptr) = NULL; }
#line 1274 "parser.tab.c"
    break;

  case 5: /* declaration: function_decl declaration  */
#line 59 "parser.y"
                                { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr); (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1280 "parser.tab.c"
    break;

  case 6: /* declaration: object_decl declaration  */
#line 60 "parser.y"
                              { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr), (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1286 "parser.tab.c"
    break;

  case 7: /* declaration: module_decl declaration  */
#line 61 "parser.y"
                              { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr), (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1292 "parser.tab.c"
    break;

  case 8: /* function_decl: access_modifier FUNCTION IDENTIFIER LPAREN param RPAREN errors type errors LCBRACKET function_statement RCBRACKET  */
#line 65 "parser.y"
                                                                                                                      { (yyval.decl_ptr) = decl_create((yyvsp[-9].string_val), type_create_function((yyvsp[-4].type_ptr), (yyvsp[-7].param_ptr)), 0, (yyvsp[-1].stmt_ptr), 0); }
#line 1298 "parser.tab.c"
    break;

  case 9: /* module_decl: access_modifier MODULE IDENTIFIER LCBRACKET module_statement RCBRACKET SEMICOLON  */
#line 69 "parser.y"
                                                                                     { (yyval.decl_ptr) = decl_create((yyvsp[-4].string_val), type_create_module(), 0, (yyvsp[-2].stmt_ptr), 0); }
#line 1304 "parser.tab.c"
    break;

  case 10: /* object_decl: access_modifier OBJECT IDENTIFIER LCBRACKET object_statement RCBRACKET SEMICOLON  */
#line 73 "parser.y"
                                                                                     { (yyval.decl_ptr) = decl_create((yyvsp[-4].string_val), type_create_object(), 0, (yyvsp[-2].stmt_ptr), 0); }
#line 1310 "parser.tab.c"
    break;

  case 11: /* constructor_decl: CONSTRUCTOR LCBRACKET function_decl RCBRACKET  */
#line 89 "parser.y"
                                                  { (yyval.decl_ptr) = decl_create("", type_create_constructor(), 0, (yyvsp[-1].decl_ptr), 0); }
#line 1316 "parser.tab.c"
    break;

  case 12: /* function_statement: statement  */
#line 93 "parser.y"
              { (yyval.stmt_ptr) = (yyvsp[0].stmt_ptr); }
#line 1322 "parser.tab.c"
    break;

  case 13: /* module_statement: %empty  */
#line 97 "parser.y"
    {(yyval.stmt_ptr) = 0; }
#line 1328 "parser.tab.c"
    break;

  case 14: /* object_statement: %empty  */
#line 101 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1334 "parser.tab.c"
    break;

  case 15: /* object_statement: decl object_decl  */
#line 102 "parser.y"
                       { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].decl_ptr), (yyvsp[0].decl_ptr)); }
#line 1340 "parser.tab.c"
    break;

  case 16: /* object_statement: function_statement object_decl  */
#line 103 "parser.y"
                                     { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].stmt_ptr), (yyvsp[0].decl_ptr)); }
#line 1346 "parser.tab.c"
    break;

  case 17: /* object_statement: constructor_decl object_decl  */
#line 104 "parser.y"
                                   { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].decl_ptr), (yyvsp[0].decl_ptr)); }
#line 1352 "parser.tab.c"
    break;

  case 18: /* param: %empty  */
#line 126 "parser.y"
    { (yyval.param_ptr) = NULL; }
#line 1358 "parser.tab.c"
    break;

  case 19: /* param: type IDENTIFIER  */
#line 127 "parser.y"
                      { (yyval.param_ptr) = param_create((yyvsp[0].string_val), (yyvsp[-1].type_ptr), 0, 0); }
#line 1364 "parser.tab.c"
    break;

  case 20: /* param: type IDENTIFIER ASSIGN exp  */
#line 128 "parser.y"
                                 { (yyval.param_ptr) = param_create((yyvsp[-2].string_val), (yyvsp[-3].type_ptr), (yyvsp[0].expr_ptr), 0); }
#line 1370 "parser.tab.c"
    break;

  case 21: /* param: type IDENTIFIER COMMA param  */
#line 129 "parser.y"
                                  { (yyval.param_ptr) = param_create((yyvsp[-2].string_val), (yyvsp[-3].type_ptr), 0, (yyvsp[0].param_ptr)); }
#line 1376 "parser.tab.c"
    break;

  case 22: /* param: param COMMA type IDENTIFIER ASSIGN exp  */
#line 130 "parser.y"
                                             { (yyval.param_ptr) = param_create((yyvsp[-3].type_ptr), (yyvsp[-5].param_ptr), (yyvsp[-2].string_val), (yyvsp[0].expr_ptr)); }
#line 1382 "parser.tab.c"
    break;

  case 23: /* arguments: %empty  */
#line 134 "parser.y"
    { (yyval.expr_ptr) = 0; }
#line 1388 "parser.tab.c"
    break;

  case 24: /* arguments: IDENTIFIER ASSIGN exp  */
#line 135 "parser.y"
                            {(yyval.expr_ptr) = expr_create_arg((yyvsp[0].expr_ptr), 0); }
#line 1394 "parser.tab.c"
    break;

  case 25: /* arguments: IDENTIFIER ASSIGN exp COMMA arguments  */
#line 136 "parser.y"
                                            { (yyval.expr_ptr) = expr_create_arg((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1400 "parser.tab.c"
    break;

  case 31: /* access_modifier: %empty  */
#line 147 "parser.y"
    { (yyval.modifier_ptr) = 0; }
#line 1406 "parser.tab.c"
    break;

  case 32: /* access_modifier: PUBLIC  */
#line 148 "parser.y"
             { (yyval.modifier_ptr) = MODIFIER_PUBLIC; }
#line 1412 "parser.tab.c"
    break;

  case 33: /* access_modifier: PRIVATE  */
#line 149 "parser.y"
              { (yyval.modifier_ptr) = MODIFIER_PRIVATE; }
#line 1418 "parser.tab.c"
    break;

  case 34: /* exp: %empty  */
#line 155 "parser.y"
    { (yyval.expr_ptr) = NULL; }
#line 1424 "parser.tab.c"
    break;

  case 35: /* exp: IDENTIFIER  */
#line 156 "parser.y"
                 { (yyval.expr_ptr) = expr_create_name((yyvsp[0].string_val)); }
#line 1430 "parser.tab.c"
    break;

  case 36: /* exp: NUM  */
#line 157 "parser.y"
          { (yyval.expr_ptr) = expr_create_integer_literal((yyvsp[0].int_val)); }
#line 1436 "parser.tab.c"
    break;

  case 37: /* exp: TRUE_  */
#line 158 "parser.y"
            { (yyval.expr_ptr) = expr_create_boolean_literal(1); }
#line 1442 "parser.tab.c"
    break;

  case 38: /* exp: FALSE_  */
#line 159 "parser.y"
             { (yyval.expr_ptr) = expr_create_boolean_literal(0); }
#line 1448 "parser.tab.c"
    break;

  case 39: /* exp: exp ASSIGN exp  */
#line 160 "parser.y"
                     { (yyval.expr_ptr) = expr_create_assign((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1454 "parser.tab.c"
    break;

  case 40: /* exp: exp PLUS exp  */
#line 161 "parser.y"
                   { (yyval.expr_ptr) = expr_create_add((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1460 "parser.tab.c"
    break;

  case 41: /* exp: exp MINUS exp  */
#line 162 "parser.y"
                    { (yyval.expr_ptr) = expr_create_sub((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1466 "parser.tab.c"
    break;

  case 42: /* exp: exp TIMES exp  */
#line 163 "parser.y"
                    { (yyval.expr_ptr) = expr_create_mul((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1472 "parser.tab.c"
    break;

  case 43: /* exp: exp DIVIDE exp  */
#line 164 "parser.y"
                     { (yyval.expr_ptr) = expr_create_div((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1478 "parser.tab.c"
    break;

  case 44: /* exp: IDENTIFIER LPAREN arguments RPAREN  */
#line 165 "parser.y"
                                         { (yyval.expr_ptr) = expr_create_call(expr_create_name((yyvsp[-3].string_val)), (yyvsp[-1].expr_ptr)); }
#line 1484 "parser.tab.c"
    break;

  case 45: /* decl: %empty  */
#line 169 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1490 "parser.tab.c"
    break;

  case 46: /* decl: type IDENTIFIER SEMICOLON decl  */
#line 170 "parser.y"
                                     { (yyval.decl_ptr) = decl_create((yyvsp[-2].string_val), (yyvsp[-3].type_ptr), 0, 0, (yyvsp[0].decl_ptr)); }
#line 1496 "parser.tab.c"
    break;

  case 47: /* decl: type IDENTIFIER ASSIGN exp SEMICOLON decl  */
#line 171 "parser.y"
                                                { (yyval.decl_ptr) = decl_create((yyvsp[-4].string_val), (yyvsp[-5].type_ptr), (yyvsp[-2].expr_ptr), 0, (yyvsp[0].decl_ptr)); }
#line 1502 "parser.tab.c"
    break;

  case 48: /* statement: %empty  */
#line 175 "parser.y"
    { (yyval.stmt_ptr) = NULL; }
#line 1508 "parser.tab.c"
    break;

  case 49: /* statement: IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement  */
#line 176 "parser.y"
                                                                   { (yyval.stmt_ptr) = stmt_create_if((yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), 0); }
#line 1514 "parser.tab.c"
    break;

  case 50: /* statement: FOR LPAREN exp COMMA exp COMMA exp RPAREN LCBRACKET statement RCBRACKET statement  */
#line 177 "parser.y"
                                                                                        { (yyval.stmt_ptr) = stmt_create_for((yyvsp[-9].expr_ptr), (yyvsp[-7].expr_ptr), (yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), 0); }
#line 1520 "parser.tab.c"
    break;

  case 51: /* statement: WHILE LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement  */
#line 178 "parser.y"
                                                                      { (yyval.stmt_ptr) = stmt_create_while((yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), 0); }
#line 1526 "parser.tab.c"
    break;

  case 52: /* statement: RETURN exp SEMICOLON statement  */
#line 179 "parser.y"
                                     { (yyval.stmt_ptr) = stmt_create_return((yyvsp[-2].expr_ptr)); }
#line 1532 "parser.tab.c"
    break;

  case 53: /* statement: exp SEMICOLON statement  */
#line 180 "parser.y"
                              { (yyval.stmt_ptr) = stmt_create_expr((yyvsp[-2].expr_ptr), (yyvsp[0].stmt_ptr)); }
#line 1538 "parser.tab.c"
    break;

  case 54: /* statement: type IDENTIFIER SEMICOLON statement  */
#line 181 "parser.y"
                                          { (yyval.stmt_ptr) = stmt_create_decl(decl_create((yyvsp[-2].string_val), (yyvsp[-3].type_ptr), 0, 0, 0), (yyvsp[0].stmt_ptr)); }
#line 1544 "parser.tab.c"
    break;

  case 55: /* statement: type IDENTIFIER ASSIGN exp SEMICOLON statement  */
#line 182 "parser.y"
                                                     { (yyval.stmt_ptr) = stmt_create_decl(decl_create((yyvsp[-4].string_val), (yyvsp[-5].type_ptr), (yyvsp[-2].expr_ptr), 0, 0), (yyvsp[0].stmt_ptr)); }
#line 1550 "parser.tab.c"
    break;

  case 56: /* type: %empty  */
#line 186 "parser.y"
    { (yyval.type_ptr) = 0;}
#line 1556 "parser.tab.c"
    break;

  case 57: /* type: IDENTIFIER  */
#line 187 "parser.y"
                 { (yyval.type_ptr) = 0; }
#line 1562 "parser.tab.c"
    break;

  case 58: /* type: I1  */
#line 188 "parser.y"
         { (yyval.type_ptr) = type_create_integer_8(); }
#line 1568 "parser.tab.c"
    break;

  case 59: /* type: I2  */
#line 189 "parser.y"
         { (yyval.type_ptr) = type_create_integer_16(); }
#line 1574 "parser.tab.c"
    break;

  case 60: /* type: I4  */
#line 190 "parser.y"
         { (yyval.type_ptr) = type_create_integer_32(); }
#line 1580 "parser.tab.c"
    break;

  case 61: /* type: I8  */
#line 191 "parser.y"
         { (yyval.type_ptr) = type_create_integer_64(); }
#line 1586 "parser.tab.c"
    break;

  case 62: /* type: UI1  */
#line 192 "parser.y"
          { (yyval.type_ptr) = type_create_unsigned_integer_8(); }
#line 1592 "parser.tab.c"
    break;

  case 63: /* type: UI2  */
#line 193 "parser.y"
          { (yyval.type_ptr) = type_create_unsigned_integer_16(); }
#line 1598 "parser.tab.c"
    break;

  case 64: /* type: UI4  */
#line 194 "parser.y"
          { (yyval.type_ptr) = type_create_unsigned_integer_32(); }
#line 1604 "parser.tab.c"
    break;

  case 65: /* type: UI8  */
#line 195 "parser.y"
          { (yyval.type_ptr) = type_create_unsigned_integer_64(); }
#line 1610 "parser.tab.c"
    break;

  case 66: /* type: BOOLEAN  */
#line 196 "parser.y"
              { (yyval.type_ptr) = type_create_bool(); }
#line 1616 "parser.tab.c"
    break;

  case 67: /* type: CHARACTER  */
#line 197 "parser.y"
                { (yyval.type_ptr) = type_create_char(); }
#line 1622 "parser.tab.c"
    break;


#line 1626 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 200 "parser.y"


void yyerror(const char* msg) {
    fprintf(stderr, "Parser error: %s\n", msg);
}



int main() {

    code = malloc(sizeof(*code));
    scope = malloc(sizeof(*scope));
    scope->top = 0;

    scope_enter();

    yyrestart(stdin);

    bool build = yyparse();

    decl_resolve(code);
    decl_typecheck(code);

    // struct dag_node * dag = malloc(sizeof(*dag));
    // dag = dag_node_create_decl(code);
    code_gen(code);
    

    if (build)
    {
        printf("********************Build Failed!***********************\n");
    }
    else
    {
        printf("*********************Build Succesfull!***********************\n");
    }

    return 0;
}
