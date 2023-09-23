%{
#include <stdio.h>
#include <stdlib.h>

#include "AST/AbstractSyntaxTree.c"

struct decl * code;

%}

%union {
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
}

%token IF FOR WHILE QUOTE TRUE_ FALSE_ CHARACTER BOOLEAN ERROR I1 I2 I4 I8 UI1 UI2 UI4 UI8 F4 F8 STRUCT MODULE RETURN EXTEND REQUIREMENT COMMA CONSTRUCTOR VOID OBJECT INCLUDE NUM IDENTIFIER PLUS MINUS TIMES DIVIDE ASSIGN SEMICOLON FUNCTION LPAREN RPAREN LCBRACKET RCBRACKET PUBLIC PRIVATE LBRACKET RBRACKET STRING_VALUE STRING

%type <decl_ptr> program
%type <decl_ptr> declaration
%type <decl_ptr> function_decl
%type <function_param_ptr> param
%type <expr_ptr> exp
%type <decl_ptr> decl
%type <expr_function_arg_ptr> arguments
%type <type_ptr> type
%type <stmt_ptr> statement
%type <ident_ptr> ident
%type <int_val> NUM
%type <string_val> IDENTIFIER
%type <string_val> STRING_VALUE


%%

program:
    { $$ = 0; }
    | declaration { code = $1; }
    ;

declaration:
    { $$ = 0; }
    | function_decl declaration { $1->next = $2; $$ = $1; }
    | type ident SEMICOLON declaration { $$ = decl_create_global_variable($1, $2, 0, $4); }
    | type ident ASSIGN exp SEMICOLON declaration { $$ = decl_create_global_variable($1, $2, $4, $6); }
    ;

function_decl:
    FUNCTION ident LPAREN param RPAREN type LCBRACKET statement RCBRACKET { $$ = decl_create_function($2, $4, $6, $8); }
    ;

param:
    { $$ = 0; }
    | type ident { $$ = function_create_param($2, $1, 0, 0); }
    | type ident ASSIGN exp { $$ = function_create_param($2, $1, $4, 0); }
    | type ident COMMA param { $$ = function_create_param($2, $1, 0, $4); }
    | param COMMA type ident ASSIGN exp { $$ = function_create_param($3, $1, $4, $6); }
    ;

exp:
    | LPAREN exp RPAREN {$$ = $2;}
    | IDENTIFIER { $$ = expr_create_name($1); }
    | NUM { $$ = expr_create_integer($1); }
    | STRING_VALUE { $$ = 0; }
    | exp ASSIGN exp { $$ = expr_create_assign($1, $3); }
    | exp PLUS exp { $$ = expr_create_add($1, $3); }
    | exp MINUS exp { $$ = expr_create_sub($1, $3); }
    | exp TIMES exp { $$ = expr_create_mul($1, $3); }
    | exp DIVIDE exp { $$ = expr_create_div($1, $3); }
    | FALSE_ { $$ = expr_create_bool(0); }
    | TRUE_ { $$ = expr_create_bool(1); }
    | ident LPAREN arguments RPAREN { $$ = expr_create_call($1, $3); }
    ;

decl:
    type ident SEMICOLON { $$ = decl_create_local_variable($1, $2, 0, 0); }
    | type ident ASSIGN exp SEMICOLON { $$ = decl_create_local_variable($1, $2, $4, 0); }
    ;

arguments:
    { $$ = 0; }
    | ident ASSIGN exp {$$ = expr_function_create_arg($1, $3, 0); }
    | ident ASSIGN exp COMMA arguments { $$ = expr_function_create_arg($1, $3, $5); }
    ;

type:
    { $$ = 0;}
    | VOID { $$ = type_create_primitive(PRIMITIVE_VOID); }
    | ident { $$ = $1; }
    | I1 { $$ = type_create_primitive(PRIMITIVE_INTEGER_8); }
    | I2 { $$ = type_create_primitive(PRIMITIVE_INTEGER_16); }
    | I4 { $$ = type_create_primitive(PRIMITIVE_INTEGER_32); }
    | I8 { $$ = type_create_primitive(PRIMITIVE_INTEGER_64); }
    | BOOLEAN { $$ = type_create_primitive(PRIMITIVE_BOOL); }
    | CHARACTER { $$ = type_create_primitive(PRIMITIVE_CHAR); }
    | STRING { $$ = 0; }
    ;

statement:
    { $$ = 0; }
    | RETURN exp SEMICOLON statement { $$ = stmt_create_return($2); }
    | exp SEMICOLON statement { $$ = stmt_create_expr($1, $3); }
    | decl statement { $$ = stmt_create_decl($1, $2); }
    ;

ident:
    IDENTIFIER { $$ = ident_create($1); }
    ;

%%

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
