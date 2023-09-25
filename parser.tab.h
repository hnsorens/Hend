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
    ELSE = 258,                    /* ELSE  */
    POINTER = 259,                 /* POINTER  */
    IF = 260,                      /* IF  */
    FOR = 261,                     /* FOR  */
    WHILE = 262,                   /* WHILE  */
    QUOTE = 263,                   /* QUOTE  */
    TRUE_ = 264,                   /* TRUE_  */
    FALSE_ = 265,                  /* FALSE_  */
    CHARACTER = 266,               /* CHARACTER  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    ERROR = 268,                   /* ERROR  */
    I1 = 269,                      /* I1  */
    I2 = 270,                      /* I2  */
    I4 = 271,                      /* I4  */
    I8 = 272,                      /* I8  */
    UI1 = 273,                     /* UI1  */
    UI2 = 274,                     /* UI2  */
    UI4 = 275,                     /* UI4  */
    UI8 = 276,                     /* UI8  */
    F4 = 277,                      /* F4  */
    F8 = 278,                      /* F8  */
    STRUCT = 279,                  /* STRUCT  */
    MODULE = 280,                  /* MODULE  */
    RETURN = 281,                  /* RETURN  */
    EXTEND = 282,                  /* EXTEND  */
    REQUIREMENT = 283,             /* REQUIREMENT  */
    COMMA = 284,                   /* COMMA  */
    CONSTRUCTOR = 285,             /* CONSTRUCTOR  */
    VOID = 286,                    /* VOID  */
    OBJECT = 287,                  /* OBJECT  */
    INCLUDE = 288,                 /* INCLUDE  */
    NUM = 289,                     /* NUM  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    PLUS = 291,                    /* PLUS  */
    MINUS = 292,                   /* MINUS  */
    TIMES = 293,                   /* TIMES  */
    DIVIDE = 294,                  /* DIVIDE  */
    ASSIGN = 295,                  /* ASSIGN  */
    SEMICOLON = 296,               /* SEMICOLON  */
    FUNCTION = 297,                /* FUNCTION  */
    LPAREN = 298,                  /* LPAREN  */
    RPAREN = 299,                  /* RPAREN  */
    LCBRACKET = 300,               /* LCBRACKET  */
    RCBRACKET = 301,               /* RCBRACKET  */
    PUBLIC = 302,                  /* PUBLIC  */
    PRIVATE = 303,                 /* PRIVATE  */
    LBRACKET = 304,                /* LBRACKET  */
    RBRACKET = 305,                /* RBRACKET  */
    STRING_VALUE = 306,            /* STRING_VALUE  */
    STRING = 307                   /* STRING  */
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
    struct array_sub * array_sub_ptr;
    struct type_spec * type_spec_ptr;

#line 131 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
