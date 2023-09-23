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
  YYSYMBOL_POINTER = 3,                    /* POINTER  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_QUOTE = 7,                      /* QUOTE  */
  YYSYMBOL_TRUE_ = 8,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 9,                     /* FALSE_  */
  YYSYMBOL_CHARACTER = 10,                 /* CHARACTER  */
  YYSYMBOL_BOOLEAN = 11,                   /* BOOLEAN  */
  YYSYMBOL_ERROR = 12,                     /* ERROR  */
  YYSYMBOL_I1 = 13,                        /* I1  */
  YYSYMBOL_I2 = 14,                        /* I2  */
  YYSYMBOL_I4 = 15,                        /* I4  */
  YYSYMBOL_I8 = 16,                        /* I8  */
  YYSYMBOL_UI1 = 17,                       /* UI1  */
  YYSYMBOL_UI2 = 18,                       /* UI2  */
  YYSYMBOL_UI4 = 19,                       /* UI4  */
  YYSYMBOL_UI8 = 20,                       /* UI8  */
  YYSYMBOL_F4 = 21,                        /* F4  */
  YYSYMBOL_F8 = 22,                        /* F8  */
  YYSYMBOL_STRUCT = 23,                    /* STRUCT  */
  YYSYMBOL_MODULE = 24,                    /* MODULE  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_EXTEND = 26,                    /* EXTEND  */
  YYSYMBOL_REQUIREMENT = 27,               /* REQUIREMENT  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_CONSTRUCTOR = 29,               /* CONSTRUCTOR  */
  YYSYMBOL_VOID = 30,                      /* VOID  */
  YYSYMBOL_OBJECT = 31,                    /* OBJECT  */
  YYSYMBOL_INCLUDE = 32,                   /* INCLUDE  */
  YYSYMBOL_NUM = 33,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 34,                /* IDENTIFIER  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_TIMES = 37,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 38,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 40,                 /* SEMICOLON  */
  YYSYMBOL_FUNCTION = 41,                  /* FUNCTION  */
  YYSYMBOL_LPAREN = 42,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 43,                    /* RPAREN  */
  YYSYMBOL_LCBRACKET = 44,                 /* LCBRACKET  */
  YYSYMBOL_RCBRACKET = 45,                 /* RCBRACKET  */
  YYSYMBOL_PUBLIC = 46,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 47,                   /* PRIVATE  */
  YYSYMBOL_LBRACKET = 48,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 49,                  /* RBRACKET  */
  YYSYMBOL_STRING_VALUE = 50,              /* STRING_VALUE  */
  YYSYMBOL_STRING = 51,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_program = 53,                   /* program  */
  YYSYMBOL_declaration = 54,               /* declaration  */
  YYSYMBOL_function_decl = 55,             /* function_decl  */
  YYSYMBOL_param = 56,                     /* param  */
  YYSYMBOL_exp = 57,                       /* exp  */
  YYSYMBOL_decl = 58,                      /* decl  */
  YYSYMBOL_arguments = 59,                 /* arguments  */
  YYSYMBOL_type = 60,                      /* type  */
  YYSYMBOL_type_specifier = 61,            /* type_specifier  */
  YYSYMBOL_array_subscript = 62,           /* array_subscript  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_ident = 64                      /* ident  */
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
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    47,    47,    48,    52,    53,    54,    55,    59,    63,
      64,    65,    66,    67,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    87,    88,
      92,    93,    94,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   111,   112,   113,   115,   116,   117,   120,
     121,   122,   123,   127,   128
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
  "\"end of file\"", "error", "\"invalid token\"", "POINTER", "IF", "FOR",
  "WHILE", "QUOTE", "TRUE_", "FALSE_", "CHARACTER", "BOOLEAN", "ERROR",
  "I1", "I2", "I4", "I8", "UI1", "UI2", "UI4", "UI8", "F4", "F8", "STRUCT",
  "MODULE", "RETURN", "EXTEND", "REQUIREMENT", "COMMA", "CONSTRUCTOR",
  "VOID", "OBJECT", "INCLUDE", "NUM", "IDENTIFIER", "PLUS", "MINUS",
  "TIMES", "DIVIDE", "ASSIGN", "SEMICOLON", "FUNCTION", "LPAREN", "RPAREN",
  "LCBRACKET", "RCBRACKET", "PUBLIC", "PRIVATE", "LBRACKET", "RBRACKET",
  "STRING_VALUE", "STRING", "$accept", "program", "declaration",
  "function_decl", "param", "exp", "decl", "arguments", "type",
  "type_specifier", "array_subscript", "statement", "ident", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,     1,     1,     1,     1,     1,     1,     1,   -41,   -18,
       1,    20,   -83,   100,   -18,     1,   -83,    -3,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     3,    -8,   -83,   -83,   -83,
     -21,   -83,    10,    -9,    -5,   139,    87,   100,    -3,   -83,
     -83,    -2,   -18,   -83,   -83,   -83,    40,    87,   -83,   149,
     -31,   -83,   -83,   139,   -22,    14,   124,    87,    87,    87,
      87,   100,    87,    87,     8,   139,    87,     5,   -83,   110,
     110,   110,   110,   -83,   110,    31,    13,    93,   -83,   128,
      42,    87,   -83,    87,   156,    93,   -18,    12,    52,   139,
     -83,   162,    93,   -83,    -7,   -83,   -83,    93,   -83,    87,
     -83,   -83,   168,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    43,    43,    43,    43,    43,    43,    43,    53,     0,
      43,     0,     3,     4,     0,    43,    45,    46,    41,    40,
      36,    37,    38,    39,    34,     0,     0,    42,     1,     5,
       0,    35,    47,     0,     0,     9,    14,     4,    46,    44,
      54,     0,     0,    26,    25,    18,    16,    14,    19,     0,
       0,     6,    48,    33,    10,     0,     0,    14,    14,    14,
      14,     4,    14,    14,     0,     9,    14,     0,    15,    21,
      22,    23,    24,     7,    20,    31,     0,    14,    12,    11,
      17,    14,    27,    14,     0,    14,     0,     0,    43,     9,
      32,     0,    14,    52,     0,     8,    13,    14,    51,    14,
      28,    50,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -11,   -83,   -60,   -35,   -83,   -23,   -14,   173,
      22,   -82,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    41,    84,    85,    76,    14,    31,
      33,    87,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      15,    49,    29,    93,    16,    78,    65,    25,    62,    26,
      98,    63,    56,    15,    30,   101,     8,    66,    36,    37,
      28,    42,    69,    70,    71,    72,    51,    74,    75,    96,
      32,    79,    99,   100,    35,    15,    34,    15,    38,    64,
      39,    53,    54,   -53,    40,   -54,    75,    67,    91,    17,
      73,    42,    77,    15,    80,    16,    82,    95,    90,    81,
      52,    15,     0,    86,   102,    15,    57,    58,    59,    60,
       0,    86,     0,     0,   -53,    42,   -54,    88,    86,   -53,
       0,   -54,   -53,    86,   -54,    88,    94,     0,    55,    15,
     -54,    62,    88,     0,    63,    43,    44,    88,     0,     0,
      17,    43,    44,     1,     2,     0,     3,     4,     5,     6,
       1,     2,     0,     3,     4,     5,     6,     0,    83,     0,
      45,    46,     0,     7,     0,     0,    45,    46,     0,    47,
       7,     0,     0,     0,     8,    47,     0,    48,   -49,     0,
       0,     9,     0,    48,    10,    57,    58,    59,    60,     1,
       2,    10,     3,     4,     5,     6,    89,     0,     0,    57,
      58,    59,    60,    57,    58,    59,    60,    68,     0,     7,
       0,     0,     0,     8,    18,    19,    20,    21,    22,    23,
      24,     0,     0,    27,    57,    58,    59,    60,     0,    61,
      10,    57,    58,    59,    60,     0,    92,    57,    58,    59,
      60,     0,    97,    57,    58,    59,    60,     0,   103
};

static const yytype_int8 yycheck[] =
{
       0,    36,    13,    85,     3,    65,    28,    48,    39,     9,
      92,    42,    47,    13,    14,    97,    34,    39,    39,    40,
       0,    35,    57,    58,    59,    60,    37,    62,    63,    89,
      33,    66,    39,    40,    42,    35,    33,    37,    28,    53,
      49,    43,    42,     3,    49,     3,    81,    33,    83,    48,
      61,    65,    44,    53,    49,     3,    43,    45,    81,    28,
      38,    61,    -1,    77,    99,    65,    35,    36,    37,    38,
      -1,    85,    -1,    -1,    34,    89,    34,    77,    92,    39,
      -1,    39,    42,    97,    42,    85,    86,    -1,    48,    89,
      48,    39,    92,    -1,    42,     8,     9,    97,    -1,    -1,
      48,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      10,    11,    -1,    13,    14,    15,    16,    -1,    25,    -1,
      33,    34,    -1,    30,    -1,    -1,    33,    34,    -1,    42,
      30,    -1,    -1,    -1,    34,    42,    -1,    50,    45,    -1,
      -1,    41,    -1,    50,    51,    35,    36,    37,    38,    10,
      11,    51,    13,    14,    15,    16,    28,    -1,    -1,    35,
      36,    37,    38,    35,    36,    37,    38,    43,    -1,    30,
      -1,    -1,    -1,    34,     1,     2,     3,     4,     5,     6,
       7,    -1,    -1,    10,    35,    36,    37,    38,    -1,    40,
      51,    35,    36,    37,    38,    -1,    40,    35,    36,    37,
      38,    -1,    40,    35,    36,    37,    38,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    11,    13,    14,    15,    16,    30,    34,    41,
      51,    53,    54,    55,    60,    64,     3,    48,    61,    61,
      61,    61,    61,    61,    61,    48,    64,    61,     0,    54,
      64,    61,    33,    62,    33,    42,    39,    40,    28,    49,
      49,    56,    60,     8,     9,    33,    34,    42,    50,    57,
      64,    54,    62,    43,    64,    48,    57,    35,    36,    37,
      38,    40,    39,    42,    60,    28,    39,    33,    43,    57,
      57,    57,    57,    54,    57,    57,    59,    44,    56,    57,
      49,    28,    43,    25,    57,    58,    60,    63,    64,    28,
      59,    57,    40,    63,    64,    45,    56,    40,    63,    39,
      40,    63,    57,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    54,    55,    56,
      56,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    62,    62,    62,    63,
      63,    63,    63,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     4,     6,     9,     0,
       2,     4,     4,     6,     0,     3,     1,     4,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     4,     3,     5,
       0,     1,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     3,     1,     0,     1,     3,     0,
       4,     3,     2,     1,     4
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
#line 47 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1218 "parser.tab.c"
    break;

  case 3: /* program: declaration  */
#line 48 "parser.y"
                  { code = (yyvsp[0].decl_ptr); }
#line 1224 "parser.tab.c"
    break;

  case 4: /* declaration: %empty  */
#line 52 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1230 "parser.tab.c"
    break;

  case 5: /* declaration: function_decl declaration  */
#line 53 "parser.y"
                                { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr); (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1236 "parser.tab.c"
    break;

  case 6: /* declaration: type ident SEMICOLON declaration  */
#line 54 "parser.y"
                                       { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-3].type_ptr), (yyvsp[-2].ident_ptr), 0, (yyvsp[0].decl_ptr)); }
#line 1242 "parser.tab.c"
    break;

  case 7: /* declaration: type ident ASSIGN exp SEMICOLON declaration  */
#line 55 "parser.y"
                                                  { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-5].type_ptr), (yyvsp[-4].ident_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].decl_ptr)); }
#line 1248 "parser.tab.c"
    break;

  case 8: /* function_decl: FUNCTION ident LPAREN param RPAREN type LCBRACKET statement RCBRACKET  */
#line 59 "parser.y"
                                                                          { (yyval.decl_ptr) = decl_create_function((yyvsp[-7].ident_ptr), (yyvsp[-5].function_param_ptr), (yyvsp[-3].type_ptr), (yyvsp[-1].stmt_ptr)); }
#line 1254 "parser.tab.c"
    break;

  case 9: /* param: %empty  */
#line 63 "parser.y"
    { (yyval.function_param_ptr) = 0; }
#line 1260 "parser.tab.c"
    break;

  case 10: /* param: type ident  */
#line 64 "parser.y"
                 { (yyval.function_param_ptr) = function_create_param((yyvsp[0].ident_ptr), (yyvsp[-1].type_ptr), 0, 0); }
#line 1266 "parser.tab.c"
    break;

  case 11: /* param: type ident ASSIGN exp  */
#line 65 "parser.y"
                            { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), (yyvsp[0].expr_ptr), 0); }
#line 1272 "parser.tab.c"
    break;

  case 12: /* param: type ident COMMA param  */
#line 66 "parser.y"
                             { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), 0, (yyvsp[0].function_param_ptr)); }
#line 1278 "parser.tab.c"
    break;

  case 13: /* param: type ident ASSIGN exp COMMA param  */
#line 67 "parser.y"
                                        { (yyval.function_param_ptr) = function_create_param((yyvsp[-4].ident_ptr), (yyvsp[-5].type_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].function_param_ptr)); }
#line 1284 "parser.tab.c"
    break;

  case 15: /* exp: LPAREN exp RPAREN  */
#line 71 "parser.y"
                        {(yyval.expr_ptr) = (yyvsp[-1].expr_ptr);}
#line 1290 "parser.tab.c"
    break;

  case 16: /* exp: IDENTIFIER  */
#line 72 "parser.y"
                 { (yyval.expr_ptr) = expr_create_name((yyvsp[0].string_val), 0); }
#line 1296 "parser.tab.c"
    break;

  case 17: /* exp: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 73 "parser.y"
                                       { (yyval.expr_ptr) = expr_create_name((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1302 "parser.tab.c"
    break;

  case 18: /* exp: NUM  */
#line 74 "parser.y"
          { (yyval.expr_ptr) = expr_create_integer((yyvsp[0].int_val)); }
#line 1308 "parser.tab.c"
    break;

  case 19: /* exp: STRING_VALUE  */
#line 75 "parser.y"
                   { (yyval.expr_ptr) = 0; }
#line 1314 "parser.tab.c"
    break;

  case 20: /* exp: ident ASSIGN exp  */
#line 76 "parser.y"
                       { (yyval.expr_ptr) = expr_create_assign((yyvsp[-2].ident_ptr), (yyvsp[0].expr_ptr)); }
#line 1320 "parser.tab.c"
    break;

  case 21: /* exp: exp PLUS exp  */
#line 77 "parser.y"
                   { (yyval.expr_ptr) = expr_create_add((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1326 "parser.tab.c"
    break;

  case 22: /* exp: exp MINUS exp  */
#line 78 "parser.y"
                    { (yyval.expr_ptr) = expr_create_sub((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1332 "parser.tab.c"
    break;

  case 23: /* exp: exp TIMES exp  */
#line 79 "parser.y"
                    { (yyval.expr_ptr) = expr_create_mul((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1338 "parser.tab.c"
    break;

  case 24: /* exp: exp DIVIDE exp  */
#line 80 "parser.y"
                     { (yyval.expr_ptr) = expr_create_div((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1344 "parser.tab.c"
    break;

  case 25: /* exp: FALSE_  */
#line 81 "parser.y"
             { (yyval.expr_ptr) = expr_create_bool(0); }
#line 1350 "parser.tab.c"
    break;

  case 26: /* exp: TRUE_  */
#line 82 "parser.y"
            { (yyval.expr_ptr) = expr_create_bool(1); }
#line 1356 "parser.tab.c"
    break;

  case 27: /* exp: ident LPAREN arguments RPAREN  */
#line 83 "parser.y"
                                    { (yyval.expr_ptr) = expr_create_call((yyvsp[-3].ident_ptr), (yyvsp[-1].expr_function_arg_ptr)); }
#line 1362 "parser.tab.c"
    break;

  case 28: /* decl: type ident SEMICOLON  */
#line 87 "parser.y"
                         { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-2].type_ptr), (yyvsp[-1].ident_ptr), 0, 0); }
#line 1368 "parser.tab.c"
    break;

  case 29: /* decl: type ident ASSIGN exp SEMICOLON  */
#line 88 "parser.y"
                                      { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-4].type_ptr), (yyvsp[-3].ident_ptr), (yyvsp[-1].expr_ptr), 0); }
#line 1374 "parser.tab.c"
    break;

  case 30: /* arguments: %empty  */
#line 92 "parser.y"
    { (yyval.expr_function_arg_ptr) = 0; }
#line 1380 "parser.tab.c"
    break;

  case 31: /* arguments: exp  */
#line 93 "parser.y"
          {(yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[0].expr_ptr), 0); }
#line 1386 "parser.tab.c"
    break;

  case 32: /* arguments: exp COMMA arguments  */
#line 94 "parser.y"
                          { (yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[-2].expr_ptr), (yyvsp[0].expr_function_arg_ptr)); }
#line 1392 "parser.tab.c"
    break;

  case 33: /* type: %empty  */
#line 98 "parser.y"
    { (yyval.type_ptr) = 0;}
#line 1398 "parser.tab.c"
    break;

  case 34: /* type: VOID type_specifier  */
#line 99 "parser.y"
                          { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_VOID, (yyvsp[0].type_spec_ptr)); }
#line 1404 "parser.tab.c"
    break;

  case 35: /* type: ident type_specifier  */
#line 100 "parser.y"
                           { (yyval.type_ptr) = (yyvsp[-1].ident_ptr); }
#line 1410 "parser.tab.c"
    break;

  case 36: /* type: I1 type_specifier  */
#line 101 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_8, (yyvsp[0].type_spec_ptr)); }
#line 1416 "parser.tab.c"
    break;

  case 37: /* type: I2 type_specifier  */
#line 102 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_16, (yyvsp[0].type_spec_ptr)); }
#line 1422 "parser.tab.c"
    break;

  case 38: /* type: I4 type_specifier  */
#line 103 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_32, (yyvsp[0].type_spec_ptr)); }
#line 1428 "parser.tab.c"
    break;

  case 39: /* type: I8 type_specifier  */
#line 104 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_64, (yyvsp[0].type_spec_ptr)); }
#line 1434 "parser.tab.c"
    break;

  case 40: /* type: BOOLEAN type_specifier  */
#line 105 "parser.y"
                             { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_BOOL, (yyvsp[0].type_spec_ptr)); }
#line 1440 "parser.tab.c"
    break;

  case 41: /* type: CHARACTER type_specifier  */
#line 106 "parser.y"
                               { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_CHAR, (yyvsp[0].type_spec_ptr)); }
#line 1446 "parser.tab.c"
    break;

  case 42: /* type: STRING type_specifier  */
#line 107 "parser.y"
                            { (yyval.type_ptr) = 0; }
#line 1452 "parser.tab.c"
    break;

  case 43: /* type_specifier: %empty  */
#line 111 "parser.y"
    { (yyval.type_spec_ptr) = 0; }
#line 1458 "parser.tab.c"
    break;

  case 44: /* type_specifier: LBRACKET array_subscript RBRACKET  */
#line 112 "parser.y"
                                        { (yyval.type_spec_ptr) = type_spec_create_array((yyvsp[-1].array_sub_ptr)); }
#line 1464 "parser.tab.c"
    break;

  case 45: /* type_specifier: POINTER  */
#line 113 "parser.y"
              { (yyval.type_spec_ptr) = type_spec_create_pointer(); }
#line 1470 "parser.tab.c"
    break;

  case 47: /* array_subscript: NUM  */
#line 116 "parser.y"
          { (yyval.array_sub_ptr) = array_sub_create((yyvsp[0].int_val), 0); }
#line 1476 "parser.tab.c"
    break;

  case 48: /* array_subscript: NUM COMMA array_subscript  */
#line 117 "parser.y"
                                { (yyval.array_sub_ptr) = array_sub_create((yyvsp[-2].int_val), (yyvsp[0].array_sub_ptr)); }
#line 1482 "parser.tab.c"
    break;

  case 49: /* statement: %empty  */
#line 120 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1488 "parser.tab.c"
    break;

  case 50: /* statement: RETURN exp SEMICOLON statement  */
#line 121 "parser.y"
                                     { (yyval.stmt_ptr) = stmt_create_return((yyvsp[-2].expr_ptr)); }
#line 1494 "parser.tab.c"
    break;

  case 51: /* statement: exp SEMICOLON statement  */
#line 122 "parser.y"
                              { (yyval.stmt_ptr) = stmt_create_expr((yyvsp[-2].expr_ptr), (yyvsp[0].stmt_ptr)); }
#line 1500 "parser.tab.c"
    break;

  case 52: /* statement: decl statement  */
#line 123 "parser.y"
                     { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].decl_ptr), (yyvsp[0].stmt_ptr)); }
#line 1506 "parser.tab.c"
    break;

  case 53: /* ident: IDENTIFIER  */
#line 127 "parser.y"
               { (yyval.ident_ptr) = ident_create((yyvsp[0].string_val), 0); }
#line 1512 "parser.tab.c"
    break;

  case 54: /* ident: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 128 "parser.y"
                                       { (yyval.ident_ptr) = ident_create((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1518 "parser.tab.c"
    break;


#line 1522 "parser.tab.c"

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

#line 132 "parser.y"


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
