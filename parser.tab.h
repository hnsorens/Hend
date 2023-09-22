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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    IF = 258,                      /* IF  */
    FOR = 259,                     /* FOR  */
    WHILE = 260,                   /* WHILE  */
    QUOTE = 261,                   /* QUOTE  */
    TRUE_ = 262,                   /* TRUE_  */
    FALSE_ = 263,                  /* FALSE_  */
    CHARACTER = 264,               /* CHARACTER  */
    BOOLEAN = 265,                 /* BOOLEAN  */
    ERROR = 266,                   /* ERROR  */
    I1 = 267,                      /* I1  */
    I2 = 268,                      /* I2  */
    I4 = 269,                      /* I4  */
    I8 = 270,                      /* I8  */
    UI1 = 271,                     /* UI1  */
    UI2 = 272,                     /* UI2  */
    UI4 = 273,                     /* UI4  */
    UI8 = 274,                     /* UI8  */
    F4 = 275,                      /* F4  */
    F8 = 276,                      /* F8  */
    STRUCT = 277,                  /* STRUCT  */
    MODULE = 278,                  /* MODULE  */
    RETURN = 279,                  /* RETURN  */
    EXTEND = 280,                  /* EXTEND  */
    REQUIREMENT = 281,             /* REQUIREMENT  */
    COMMA = 282,                   /* COMMA  */
    CONSTRUCTOR = 283,             /* CONSTRUCTOR  */
    VOID = 284,                    /* VOID  */
    OBJECT = 285,                  /* OBJECT  */
    INCLUDE = 286,                 /* INCLUDE  */
    NUM = 287,                     /* NUM  */
    IDENTIFIER = 288,              /* IDENTIFIER  */
    PLUS = 289,                    /* PLUS  */
    MINUS = 290,                   /* MINUS  */
    TIMES = 291,                   /* TIMES  */
    DIVIDE = 292,                  /* DIVIDE  */
    ASSIGN = 293,                  /* ASSIGN  */
    SEMICOLON = 294,               /* SEMICOLON  */
    FUNCTION = 295,                /* FUNCTION  */
    LPAREN = 296,                  /* LPAREN  */
    RPAREN = 297,                  /* RPAREN  */
    LCBRACKET = 298,               /* LCBRACKET  */
    RCBRACKET = 299,               /* RCBRACKET  */
    PUBLIC = 300,                  /* PUBLIC  */
    PRIVATE = 301,                 /* PRIVATE  */
    LBRACKET = 302,                /* LBRACKET  */
    RBRACKET = 303,                /* RBRACKET  */
    STRING_VALUE = 304,            /* STRING_VALUE  */
    STRING = 305                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

    int int_val;
    double double_val;
    char* string_val;
    struct ident* ident_ptr;
    struct type* type_ptr;
    struct expr* expr_ptr;
    struct expr_function_arg* expr_function_arg_ptr;
    struct function_param* function_param_ptr;
    struct decl * decl_ptr;
    struct stmt * stmt_ptr;

#line 127 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
