%{
#include "parser.tab.h" // Include the Bison-generated header file
%}

%%
"struct"    { return STRUCT; }
"mod"       { return MODULE; }
"pub"       { return PUBLIC; }
"prv"       { return PRIVATE; }
"fn"        { return FUNCTION; }
"ret"       { return RETURN; }
"ex"        { return EXTEND; }
"req"       { return REQUIREMENT; }
"con"       { return CONSTRUCTOR; }
"void"      { return VOID; }
"obj"       { return OBJECT; }
"include"   { return INCLUDE; }
"i1"        { return I1; }        
"i2"        { return I2; }
"i4"        { return I4; }
"i8"        { return I8; }
"i1"        { return UI1; }        
"i2"        { return UI2; }
"i4"        { return UI4; }
"i8"        { return UI8; }
"f4"        { return F4; }
"f8"        { return F8; }
"bool"      { return BOOLEAN; }
"char"      { return CHARACTER; }
"for"       { return FOR; }
"if"        { return IF; }
"while"     { return WHILE; }
"!"         { return ERROR; }
"false"     { return FALSE_; }
"true"      { return TRUE_; }
[0-9]+      { yylval.int_val = atoi(yytext); return NUM; }
[a-zA-Z]+[0-9a-zA-Z]*   { yylval.string_val = strdup(yytext); return IDENTIFIER; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return TIMES; }
"/"         { return DIVIDE; }
";"         { return SEMICOLON; }
":"         { return ASSIGN; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LCBRACKET; }
"}"         { return RCBRACKET; }
"["         { return RBRACKET; }
"]"         { return LBRACKET; }
"\""        { return QUOTE; }
","         { return COMMA; }
" "         ; // Ignore whitespace
.           { yyerror("Invalid character"); }
%%

int yywrap() {
    return 1;
}