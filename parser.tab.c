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

#include "AST/AbstractSyntaxTree.c"

struct decl * code;


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
  YYSYMBOL_ELSE = 3,                       /* ELSE  */
  YYSYMBOL_POINTER = 4,                    /* POINTER  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_QUOTE = 8,                      /* QUOTE  */
  YYSYMBOL_TRUE_ = 9,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 10,                    /* FALSE_  */
  YYSYMBOL_CHARACTER = 11,                 /* CHARACTER  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_ERROR = 13,                     /* ERROR  */
  YYSYMBOL_I1 = 14,                        /* I1  */
  YYSYMBOL_I2 = 15,                        /* I2  */
  YYSYMBOL_I4 = 16,                        /* I4  */
  YYSYMBOL_I8 = 17,                        /* I8  */
  YYSYMBOL_UI1 = 18,                       /* UI1  */
  YYSYMBOL_UI2 = 19,                       /* UI2  */
  YYSYMBOL_UI4 = 20,                       /* UI4  */
  YYSYMBOL_UI8 = 21,                       /* UI8  */
  YYSYMBOL_F4 = 22,                        /* F4  */
  YYSYMBOL_F8 = 23,                        /* F8  */
  YYSYMBOL_STRUCT = 24,                    /* STRUCT  */
  YYSYMBOL_MODULE = 25,                    /* MODULE  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_EXTEND = 27,                    /* EXTEND  */
  YYSYMBOL_REQUIREMENT = 28,               /* REQUIREMENT  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_CONSTRUCTOR = 30,               /* CONSTRUCTOR  */
  YYSYMBOL_VOID = 31,                      /* VOID  */
  YYSYMBOL_OBJECT = 32,                    /* OBJECT  */
  YYSYMBOL_INCLUDE = 33,                   /* INCLUDE  */
  YYSYMBOL_NUM = 34,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_PLUS = 36,                      /* PLUS  */
  YYSYMBOL_MINUS = 37,                     /* MINUS  */
  YYSYMBOL_TIMES = 38,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 39,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 40,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 41,                 /* SEMICOLON  */
  YYSYMBOL_FUNCTION = 42,                  /* FUNCTION  */
  YYSYMBOL_LPAREN = 43,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 44,                    /* RPAREN  */
  YYSYMBOL_LCBRACKET = 45,                 /* LCBRACKET  */
  YYSYMBOL_RCBRACKET = 46,                 /* RCBRACKET  */
  YYSYMBOL_PUBLIC = 47,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 48,                   /* PRIVATE  */
  YYSYMBOL_LBRACKET = 49,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 50,                  /* RBRACKET  */
  YYSYMBOL_STRING_VALUE = 51,              /* STRING_VALUE  */
  YYSYMBOL_STRING = 52,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_program = 54,                   /* program  */
  YYSYMBOL_declaration = 55,               /* declaration  */
  YYSYMBOL_function_decl = 56,             /* function_decl  */
  YYSYMBOL_param = 57,                     /* param  */
  YYSYMBOL_exp = 58,                       /* exp  */
  YYSYMBOL_decl = 59,                      /* decl  */
  YYSYMBOL_arguments = 60,                 /* arguments  */
  YYSYMBOL_type = 61,                      /* type  */
  YYSYMBOL_type_specifier = 62,            /* type_specifier  */
  YYSYMBOL_array_subscript = 63,           /* array_subscript  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_if_statement = 65,              /* if_statement  */
  YYSYMBOL_else_if_statement = 66,         /* else_if_statement  */
  YYSYMBOL_ident = 67                      /* ident  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    54,    55,    56,    57,    61,    65,
      66,    67,    68,    69,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    89,    90,
      94,    95,    96,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   113,   114,   115,   117,   118,   119,   122,
     123,   124,   125,   126,   130,   134,   135,   136,   140,   141
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
  "\"end of file\"", "error", "\"invalid token\"", "ELSE", "POINTER",
  "IF", "FOR", "WHILE", "QUOTE", "TRUE_", "FALSE_", "CHARACTER", "BOOLEAN",
  "ERROR", "I1", "I2", "I4", "I8", "UI1", "UI2", "UI4", "UI8", "F4", "F8",
  "STRUCT", "MODULE", "RETURN", "EXTEND", "REQUIREMENT", "COMMA",
  "CONSTRUCTOR", "VOID", "OBJECT", "INCLUDE", "NUM", "IDENTIFIER", "PLUS",
  "MINUS", "TIMES", "DIVIDE", "ASSIGN", "SEMICOLON", "FUNCTION", "LPAREN",
  "RPAREN", "LCBRACKET", "RCBRACKET", "PUBLIC", "PRIVATE", "LBRACKET",
  "RBRACKET", "STRING_VALUE", "STRING", "$accept", "program",
  "declaration", "function_decl", "param", "exp", "decl", "arguments",
  "type", "type_specifier", "array_subscript", "statement", "if_statement",
  "else_if_statement", "ident", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     138,     2,     2,     2,     2,     2,     2,     2,   -37,   -20,
       2,    17,   -62,   138,   -20,     2,   -62,   -13,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,    -9,   -16,   -62,   -62,   -62,
     -30,   -62,    -6,   -19,   -18,   146,   108,   138,   -13,   -62,
     -62,   -15,   -20,   -62,   -62,   -62,    20,   108,   -62,   190,
     -35,   -62,   -62,   146,   -22,     5,   173,   108,   108,   108,
     108,   138,   108,   108,   -17,   146,   108,    -3,   -62,   157,
     157,   157,   157,   -62,   157,    96,   -10,    95,   -62,   150,
      50,   108,   -62,    14,   108,   196,    95,   -20,    12,   -62,
      32,   146,   -62,   108,   202,    95,   -62,   -21,   -62,   -62,
     177,    95,   -62,   108,   -62,    21,   -62,   208,    95,   -62,
      13,    59,    -4,    95,    28,    95,   -62,   108,    27,   186,
     -62,    29,    95,    30,    59,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    43,    43,    43,    43,    43,    43,    43,    58,     0,
      43,     0,     3,     4,     0,    43,    45,    46,    41,    40,
      36,    37,    38,    39,    34,     0,     0,    42,     1,     5,
       0,    35,    47,     0,     0,     9,    14,     4,    46,    44,
      59,     0,     0,    26,    25,    18,    16,    14,    19,     0,
       0,     6,    48,    33,    10,     0,     0,    14,    14,    14,
      14,     4,    14,    14,     0,     9,    14,     0,    15,    21,
      22,    23,    24,     7,    20,    31,     0,    14,    12,    11,
      17,    14,    27,     0,    14,     0,    14,     0,     0,    53,
      43,     9,    32,    14,     0,    14,    52,     0,     8,    13,
       0,    14,    51,    14,    28,     0,    50,     0,    14,    29,
       0,    55,     0,    14,     0,    14,    54,    14,     0,     0,
      57,     0,    14,     0,    55,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,   -11,   -62,   -61,   -14,   -62,    -1,     3,   198,
      40,    70,   -62,   -42,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    41,    85,    86,    76,    87,    31,
      33,    88,    89,   113,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      15,   114,    29,    14,    78,    62,    16,    65,    63,    26,
      36,    37,    25,    15,    30,     8,    14,    28,    66,   103,
     104,    32,    49,    38,   -58,    34,    51,    35,    77,    53,
      99,    39,    40,    56,    82,    15,    16,    15,    42,    67,
      14,   115,    54,    69,    70,    71,    72,    80,    74,    75,
      73,    17,    79,    15,   -59,   -58,    64,    93,    98,   111,
     -58,    15,   112,   -58,    14,    15,   108,    75,    42,    55,
      94,   117,    62,   120,   122,    63,   124,    90,    52,   100,
      92,    17,   125,     0,     0,   -59,    90,    97,     0,   107,
     -59,    15,     0,   -59,    42,    90,     0,     0,     0,   -59,
      83,    90,     0,   119,    43,    44,     1,     2,    90,     3,
       4,     5,     6,    90,     0,    90,     0,    43,    44,     0,
       0,    84,    90,     0,     0,    81,     7,     0,     0,    45,
      46,     0,    57,    58,    59,    60,     0,     0,    47,     0,
       0,   -49,    45,    46,     0,     0,    48,    10,     0,     1,
       2,    47,     3,     4,     5,     6,    96,     1,     2,    48,
       3,     4,     5,     6,     0,   102,     0,     0,     0,     7,
       0,   106,     0,     8,     0,     0,     0,     7,   110,    91,
       9,     8,     0,   116,     0,   118,    57,    58,    59,    60,
      10,     0,   123,    57,    58,    59,    60,     0,    10,    18,
      19,    20,    21,    22,    23,    24,     0,     0,    27,    57,
      58,    59,    60,    57,    58,    59,    60,    68,     0,     0,
       0,   105,    57,    58,    59,    60,    57,    58,    59,    60,
     121,    61,    57,    58,    59,    60,     0,    95,    57,    58,
      59,    60,     0,   101,    57,    58,    59,    60,     0,   109
};

static const yytype_int8 yycheck[] =
{
       0,     5,    13,     0,    65,    40,     4,    29,    43,     9,
      40,    41,    49,    13,    14,    35,    13,     0,    40,    40,
      41,    34,    36,    29,     4,    34,    37,    43,    45,    44,
      91,    50,    50,    47,    44,    35,     4,    37,    35,    34,
      37,    45,    42,    57,    58,    59,    60,    50,    62,    63,
      61,    49,    66,    53,     4,    35,    53,    43,    46,    46,
      40,    61,     3,    43,    61,    65,    45,    81,    65,    49,
      84,    43,    40,    46,    45,    43,    46,    77,    38,    93,
      81,    49,   124,    -1,    -1,    35,    86,    87,    -1,   103,
      40,    91,    -1,    43,    91,    95,    -1,    -1,    -1,    49,
       5,   101,    -1,   117,     9,    10,    11,    12,   108,    14,
      15,    16,    17,   113,    -1,   115,    -1,     9,    10,    -1,
      -1,    26,   122,    -1,    -1,    29,    31,    -1,    -1,    34,
      35,    -1,    36,    37,    38,    39,    -1,    -1,    43,    -1,
      -1,    46,    34,    35,    -1,    -1,    51,    52,    -1,    11,
      12,    43,    14,    15,    16,    17,    86,    11,    12,    51,
      14,    15,    16,    17,    -1,    95,    -1,    -1,    -1,    31,
      -1,   101,    -1,    35,    -1,    -1,    -1,    31,   108,    29,
      42,    35,    -1,   113,    -1,   115,    36,    37,    38,    39,
      52,    -1,   122,    36,    37,    38,    39,    -1,    52,     1,
       2,     3,     4,     5,     6,     7,    -1,    -1,    10,    36,
      37,    38,    39,    36,    37,    38,    39,    44,    -1,    -1,
      -1,    44,    36,    37,    38,    39,    36,    37,    38,    39,
      44,    41,    36,    37,    38,    39,    -1,    41,    36,    37,
      38,    39,    -1,    41,    36,    37,    38,    39,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    14,    15,    16,    17,    31,    35,    42,
      52,    54,    55,    56,    61,    67,     4,    49,    62,    62,
      62,    62,    62,    62,    62,    49,    67,    62,     0,    55,
      67,    62,    34,    63,    34,    43,    40,    41,    29,    50,
      50,    57,    61,     9,    10,    34,    35,    43,    51,    58,
      67,    55,    63,    44,    67,    49,    58,    36,    37,    38,
      39,    41,    40,    43,    61,    29,    40,    34,    44,    58,
      58,    58,    58,    55,    58,    58,    60,    45,    57,    58,
      50,    29,    44,     5,    26,    58,    59,    61,    64,    65,
      67,    29,    60,    43,    58,    41,    64,    67,    46,    57,
      58,    41,    64,    40,    41,    44,    64,    58,    45,    41,
      64,    46,     3,    66,     5,    45,    64,    43,    64,    58,
      46,    44,    45,    64,    46,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    55,    55,    56,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    64,    64,    65,    66,    66,    66,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     4,     6,     9,     0,
       2,     4,     4,     6,     0,     3,     1,     4,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     4,     3,     5,
       0,     1,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     0,     1,     3,     0,
       4,     3,     2,     1,     9,     0,     9,     4,     1,     4
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
#line 49 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1236 "parser.tab.c"
    break;

  case 3: /* program: declaration  */
#line 50 "parser.y"
                  { code = (yyvsp[0].decl_ptr); }
#line 1242 "parser.tab.c"
    break;

  case 4: /* declaration: %empty  */
#line 54 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1248 "parser.tab.c"
    break;

  case 5: /* declaration: function_decl declaration  */
#line 55 "parser.y"
                                { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr); (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1254 "parser.tab.c"
    break;

  case 6: /* declaration: type ident SEMICOLON declaration  */
#line 56 "parser.y"
                                       { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-3].type_ptr), (yyvsp[-2].ident_ptr), 0, (yyvsp[0].decl_ptr)); }
#line 1260 "parser.tab.c"
    break;

  case 7: /* declaration: type ident ASSIGN exp SEMICOLON declaration  */
#line 57 "parser.y"
                                                  { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-5].type_ptr), (yyvsp[-4].ident_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].decl_ptr)); }
#line 1266 "parser.tab.c"
    break;

  case 8: /* function_decl: FUNCTION ident LPAREN param RPAREN type LCBRACKET statement RCBRACKET  */
#line 61 "parser.y"
                                                                          { (yyval.decl_ptr) = decl_create_function((yyvsp[-7].ident_ptr), (yyvsp[-5].function_param_ptr), (yyvsp[-3].type_ptr), (yyvsp[-1].stmt_ptr)); }
#line 1272 "parser.tab.c"
    break;

  case 9: /* param: %empty  */
#line 65 "parser.y"
    { (yyval.function_param_ptr) = 0; }
#line 1278 "parser.tab.c"
    break;

  case 10: /* param: type ident  */
#line 66 "parser.y"
                 { (yyval.function_param_ptr) = function_create_param((yyvsp[0].ident_ptr), (yyvsp[-1].type_ptr), 0, 0); }
#line 1284 "parser.tab.c"
    break;

  case 11: /* param: type ident ASSIGN exp  */
#line 67 "parser.y"
                            { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), (yyvsp[0].expr_ptr), 0); }
#line 1290 "parser.tab.c"
    break;

  case 12: /* param: type ident COMMA param  */
#line 68 "parser.y"
                             { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), 0, (yyvsp[0].function_param_ptr)); }
#line 1296 "parser.tab.c"
    break;

  case 13: /* param: type ident ASSIGN exp COMMA param  */
#line 69 "parser.y"
                                        { (yyval.function_param_ptr) = function_create_param((yyvsp[-4].ident_ptr), (yyvsp[-5].type_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].function_param_ptr)); }
#line 1302 "parser.tab.c"
    break;

  case 15: /* exp: LPAREN exp RPAREN  */
#line 73 "parser.y"
                        {(yyval.expr_ptr) = (yyvsp[-1].expr_ptr);}
#line 1308 "parser.tab.c"
    break;

  case 16: /* exp: IDENTIFIER  */
#line 74 "parser.y"
                 { (yyval.expr_ptr) = expr_create_name((yyvsp[0].string_val), 0); }
#line 1314 "parser.tab.c"
    break;

  case 17: /* exp: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 75 "parser.y"
                                       { (yyval.expr_ptr) = expr_create_name((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1320 "parser.tab.c"
    break;

  case 18: /* exp: NUM  */
#line 76 "parser.y"
          { (yyval.expr_ptr) = expr_create_integer((yyvsp[0].int_val)); }
#line 1326 "parser.tab.c"
    break;

  case 19: /* exp: STRING_VALUE  */
#line 77 "parser.y"
                   { (yyval.expr_ptr) = 0; }
#line 1332 "parser.tab.c"
    break;

  case 20: /* exp: ident ASSIGN exp  */
#line 78 "parser.y"
                       { (yyval.expr_ptr) = expr_create_assign((yyvsp[-2].ident_ptr), (yyvsp[0].expr_ptr)); }
#line 1338 "parser.tab.c"
    break;

  case 21: /* exp: exp PLUS exp  */
#line 79 "parser.y"
                   { (yyval.expr_ptr) = expr_create_add((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1344 "parser.tab.c"
    break;

  case 22: /* exp: exp MINUS exp  */
#line 80 "parser.y"
                    { (yyval.expr_ptr) = expr_create_sub((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1350 "parser.tab.c"
    break;

  case 23: /* exp: exp TIMES exp  */
#line 81 "parser.y"
                    { (yyval.expr_ptr) = expr_create_mul((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1356 "parser.tab.c"
    break;

  case 24: /* exp: exp DIVIDE exp  */
#line 82 "parser.y"
                     { (yyval.expr_ptr) = expr_create_div((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1362 "parser.tab.c"
    break;

  case 25: /* exp: FALSE_  */
#line 83 "parser.y"
             { (yyval.expr_ptr) = expr_create_bool(0); }
#line 1368 "parser.tab.c"
    break;

  case 26: /* exp: TRUE_  */
#line 84 "parser.y"
            { (yyval.expr_ptr) = expr_create_bool(1); }
#line 1374 "parser.tab.c"
    break;

  case 27: /* exp: ident LPAREN arguments RPAREN  */
#line 85 "parser.y"
                                    { (yyval.expr_ptr) = expr_create_call((yyvsp[-3].ident_ptr), (yyvsp[-1].expr_function_arg_ptr)); }
#line 1380 "parser.tab.c"
    break;

  case 28: /* decl: type ident SEMICOLON  */
#line 89 "parser.y"
                         { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-2].type_ptr), (yyvsp[-1].ident_ptr), 0, 0); }
#line 1386 "parser.tab.c"
    break;

  case 29: /* decl: type ident ASSIGN exp SEMICOLON  */
#line 90 "parser.y"
                                      { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-4].type_ptr), (yyvsp[-3].ident_ptr), (yyvsp[-1].expr_ptr), 0); }
#line 1392 "parser.tab.c"
    break;

  case 30: /* arguments: %empty  */
#line 94 "parser.y"
    { (yyval.expr_function_arg_ptr) = 0; }
#line 1398 "parser.tab.c"
    break;

  case 31: /* arguments: exp  */
#line 95 "parser.y"
          {(yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[0].expr_ptr), 0); }
#line 1404 "parser.tab.c"
    break;

  case 32: /* arguments: exp COMMA arguments  */
#line 96 "parser.y"
                          { (yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[-2].expr_ptr), (yyvsp[0].expr_function_arg_ptr)); }
#line 1410 "parser.tab.c"
    break;

  case 33: /* type: %empty  */
#line 100 "parser.y"
    { (yyval.type_ptr) = 0;}
#line 1416 "parser.tab.c"
    break;

  case 34: /* type: VOID type_specifier  */
#line 101 "parser.y"
                          { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_VOID, (yyvsp[0].type_spec_ptr)); }
#line 1422 "parser.tab.c"
    break;

  case 35: /* type: ident type_specifier  */
#line 102 "parser.y"
                           { (yyval.type_ptr) = (yyvsp[-1].ident_ptr); }
#line 1428 "parser.tab.c"
    break;

  case 36: /* type: I1 type_specifier  */
#line 103 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_8, (yyvsp[0].type_spec_ptr)); }
#line 1434 "parser.tab.c"
    break;

  case 37: /* type: I2 type_specifier  */
#line 104 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_16, (yyvsp[0].type_spec_ptr)); }
#line 1440 "parser.tab.c"
    break;

  case 38: /* type: I4 type_specifier  */
#line 105 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_32, (yyvsp[0].type_spec_ptr)); }
#line 1446 "parser.tab.c"
    break;

  case 39: /* type: I8 type_specifier  */
#line 106 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_64, (yyvsp[0].type_spec_ptr)); }
#line 1452 "parser.tab.c"
    break;

  case 40: /* type: BOOLEAN type_specifier  */
#line 107 "parser.y"
                             { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_BOOL, (yyvsp[0].type_spec_ptr)); }
#line 1458 "parser.tab.c"
    break;

  case 41: /* type: CHARACTER type_specifier  */
#line 108 "parser.y"
                               { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_CHAR, (yyvsp[0].type_spec_ptr)); }
#line 1464 "parser.tab.c"
    break;

  case 42: /* type: STRING type_specifier  */
#line 109 "parser.y"
                            { (yyval.type_ptr) = 0; }
#line 1470 "parser.tab.c"
    break;

  case 43: /* type_specifier: %empty  */
#line 113 "parser.y"
    { (yyval.type_spec_ptr) = 0; }
#line 1476 "parser.tab.c"
    break;

  case 44: /* type_specifier: LBRACKET array_subscript RBRACKET  */
#line 114 "parser.y"
                                        { (yyval.type_spec_ptr) = type_spec_create_array((yyvsp[-1].array_sub_ptr)); }
#line 1482 "parser.tab.c"
    break;

  case 45: /* type_specifier: POINTER  */
#line 115 "parser.y"
              { (yyval.type_spec_ptr) = type_spec_create_pointer(); }
#line 1488 "parser.tab.c"
    break;

  case 47: /* array_subscript: NUM  */
#line 118 "parser.y"
          { (yyval.array_sub_ptr) = array_sub_create((yyvsp[0].int_val), 0); }
#line 1494 "parser.tab.c"
    break;

  case 48: /* array_subscript: NUM COMMA array_subscript  */
#line 119 "parser.y"
                                { (yyval.array_sub_ptr) = array_sub_create((yyvsp[-2].int_val), (yyvsp[0].array_sub_ptr)); }
#line 1500 "parser.tab.c"
    break;

  case 49: /* statement: %empty  */
#line 122 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1506 "parser.tab.c"
    break;

  case 50: /* statement: RETURN exp SEMICOLON statement  */
#line 123 "parser.y"
                                     { (yyval.stmt_ptr) = stmt_create_return((yyvsp[-2].expr_ptr)); }
#line 1512 "parser.tab.c"
    break;

  case 51: /* statement: exp SEMICOLON statement  */
#line 124 "parser.y"
                              { (yyval.stmt_ptr) = stmt_create_expr((yyvsp[-2].expr_ptr), (yyvsp[0].stmt_ptr)); }
#line 1518 "parser.tab.c"
    break;

  case 52: /* statement: decl statement  */
#line 125 "parser.y"
                     { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].decl_ptr), (yyvsp[0].stmt_ptr)); }
#line 1524 "parser.tab.c"
    break;

  case 53: /* statement: if_statement  */
#line 126 "parser.y"
                   { (yyval.stmt_ptr) = (yyvsp[0].stmt_ptr); }
#line 1530 "parser.tab.c"
    break;

  case 54: /* if_statement: IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement statement  */
#line 130 "parser.y"
                                                                                   { (yyval.stmt_ptr) = stmt_create_if((yyvsp[-6].expr_ptr), (yyvsp[-3].stmt_ptr), (yyvsp[-1].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1536 "parser.tab.c"
    break;

  case 55: /* else_if_statement: %empty  */
#line 134 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1542 "parser.tab.c"
    break;

  case 56: /* else_if_statement: ELSE IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement  */
#line 135 "parser.y"
                                                                                { (yyval.stmt_ptr) = stmt_create_else_if((yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1548 "parser.tab.c"
    break;

  case 57: /* else_if_statement: ELSE LCBRACKET statement RCBRACKET  */
#line 136 "parser.y"
                                         { (yyval.stmt_ptr) = stmt_create_else((yyvsp[-1].stmt_ptr)); }
#line 1554 "parser.tab.c"
    break;

  case 58: /* ident: IDENTIFIER  */
#line 140 "parser.y"
               { (yyval.ident_ptr) = ident_create((yyvsp[0].string_val), 0); }
#line 1560 "parser.tab.c"
    break;

  case 59: /* ident: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 141 "parser.y"
                                       { (yyval.ident_ptr) = ident_create((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1566 "parser.tab.c"
    break;


#line 1570 "parser.tab.c"

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

#line 145 "parser.y"


void yyerror(const char* msg) {
    fprintf(stderr, "Parser error: %s\n", msg);
}

int main() {


    code = malloc(sizeof(*code));
    scope = malloc(sizeof(*scope));
    scope->top = 0;

    scope_enter();

    yyrestart(stdin);

    int build = yyparse();

    if (!error)
    decl_resolve(code, 0);
    if (!error)
    decl_typecheck(code);

    file = fopen("assembly.asm", "w+");

    code_gen(code);

    fclose(file);

    

    if (build || error)
    {
        printf("********************Build Failed!***********************\n");
    }
    else
    {
        printf("*********************Build Succesfull!***********************\n");
    }

    return 0;
}
