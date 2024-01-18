%{
#include <stdio.h>
#include <string.h>
#include "lang.tab.h"
int lines = 0;
%}

%option noyywrap
%option caseless

LETTER [a-zA-Z]
DIGIT [0-9]
NONZERODIGIT [1-9]
IDENTIFIER {LETTER}({LETTER}|{DIGIT})*
BOOLCONST true|false
CHARCONST \'({LETTER}|{DIGIT})\'
INTCONST ([+-]?{NONZERODIGIT}{DIGIT}*|0)
STRINGCONST \"({LETTER}|{DIGIT}|" ")*\"

%%

"array" { printf("%s - reserved word\n", yytext); return ARR; }
"int" { printf("%s - reserved word\n", yytext); return INT; }
"bool" { printf("%s - reserved word\n", yytext); return BOOL; }
"char" { printf("%s - reserved word\n", yytext); return CHAR; }
"string" { printf("%s - reserved word\n", yytext); return STRING; }
"if" { printf("%s - reserved word\n", yytext); return IF; }
"else" { printf("%s - reserved word\n", yytext); return ELSE; }
"while" { printf("%s - reserved word\n", yytext); return WHILE; }
"print" { printf("%s - reserved word\n", yytext); return PRINT; }
"readInt" { printf("%s - reserved word\n", yytext); return READINT; }
"readString" { printf("%s - reserved word\n", yytext); return READSTRING; }
"set" { printf("%s - reserved word\n", yytext); return SET; }
"get" { printf("%s - reserved word\n", yytext); return GET; }

"+" { printf("%s - operator\n", yytext); return PLUS; }
"-" { printf("%s - operator\n", yytext); return MINUS; }
"*" { printf("%s - operator\n", yytext); return TIMES; }
"/" { printf("%s - operator\n", yytext); return DIV; }
"%" { printf("%s - operator\n", yytext); return MOD; }
"=" { printf("%s - operator\n", yytext); return EQ; }
">" { printf("%s - operator\n", yytext); return BIGGER; }
">=" { printf("%s - operator\n", yytext); return BIGGEREQ; }
"<" { printf("%s - operator\n", yytext); return LESS; }
"<=" { printf("%s - operator\n", yytext); return LESSEQ; }
"==" { printf("%s - operator\n", yytext); return EQQ; }
"!" { printf("%s - operator\n", yytext); return NEG; }
"&&" { printf("%s - operator\n", yytext); return AND; }
"||" { printf("%s - operator\n", yytext); return OR; }

";" { printf("%s - separator\n", yytext); return SEMICOLON; }
"(" { printf("%s - separator\n", yytext); return OPEN; }
")" { printf("%s - separator\n", yytext); return CLOSE; }
"[" { printf("%s - separator\n", yytext); return SOPEN; }
"]" { printf("%s - separator\n", yytext); return SCLOSE; }
"{" { printf("%s - separator\n", yytext); return BRACKETOPEN; }
"}" { printf("%s - separator\n", yytext); return BRACKETCLOSE; }
"," { printf("%s - separator\n", yytext); return COMMA; }
"\"" { printf("%s - separator\n", yytext); return QUOTE; }
"\'" { printf("%s - separator\n", yytext); return SIMPLEQUOTE; }

{BOOLCONST} {printf("%s - BOOLCONST\n", yytext); return BOOLCONST; }
{CHARCONST} {printf("%s - CHARCONST\n", yytext); return CHARCONST; }
{STRINGCONST} {printf("%s - STRINGCONST\n", yytext); return STRINGCONST; }
{IDENTIFIER} {printf("%s - IDENTIFIER\n", yytext); return IDENTIFIER; }
{INTCONST} {printf("%s - INTCONST\n", yytext); return INTCONST; }

[ \t]+ {}

[\n]+ {++lines;}

. {printf("Error at token %s at line %d\n", yytext, lines); return -1;}

%%