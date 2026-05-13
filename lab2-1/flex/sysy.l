%option noyywrap
%option yylineno

%{
#include <stdio.h>
#include <fstream>      // std::filebuf
#include <iostream>     // std::ios, std::istream, std::cout

enum Token {
    INT=258, FLOAT, VOID, CONST, RETURN, IF, ELSE, WHILE, BREAK, CONTINUE,
    LP, RP, LB, RB, LC, RC, COMMA, SEMICOLON, QUESTION, COLON,
    MINUS, NOT, TILDE, ASSIGN, ADD, MUL, DIV, MOD, AND, OR,
    EQ, NE, LT, LE, GT, GE,
    ID, INT_LIT, FLOAT_LIT,
    LEX_ERR
};

%}

DIGIT [0-9]
LETTER [A-Za-z]

HEX_DIGIT [0-9a-fA-F]
OCT_DIGIT [0-7]

DEC_LIT ([1-9][0-9]*|0)
HEX_LIT "0"[xX]{HEX_DIGIT}+
OCT_LIT "0"{OCT_DIGIT}+

BAD_HEX 0[xX]{HEX_DIGIT}*({LETTER}|_)[0-9a-zA-Z_]*
BAD_HEX_PREFIX 0[xX]
BAD_OCT 0{OCT_DIGIT}*([8-9]|{LETTER}|_)[0-9a-zA-Z_]*

EXP [eE][+-]?{DIGIT}+
FSUFF [fF]
FLOAT_LIT1 {DIGIT}+"."{DIGIT}*{EXP}?{FSUFF}?
FLOAT_LIT2 "."{DIGIT}+{EXP}?{FSUFF}?
FLOAT_LIT3 {DIGIT}+{EXP}{FSUFF}?
FLOAT_LIT ({FLOAT_LIT1}|{FLOAT_LIT2}|{FLOAT_LIT3})

BAD_NUM {DIGIT}+({LETTER}|_)({LETTER}|{DIGIT}|_)*

ID ({LETTER}|_)({LETTER}|{DIGIT}|_)*


MultilineComment "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"
SingleLineComment "//".*$


%%

"int" {printf("%s : INT\n", yytext); return INT; }
"float" {printf("%s : FLOAT\n", yytext); return FLOAT; }
"void" {printf("%s : VOID\n", yytext); return VOID; }
"const" {printf("%s : CONST\n", yytext); return CONST; }
"return" {printf("%s : RETURN\n", yytext); ; return RETURN; }
"if" {printf("%s : IF\n", yytext); return IF; }
"else" {printf("%s : ELSE\n", yytext); return ELSE; }

"while" {printf("%s : WHILE\n", yytext); return WHILE; }

"break" {printf("%s : BREAK\n", yytext); return BREAK; }
"continue" {printf("%s : CONTINUE\n", yytext); return CONTINUE; }

{FLOAT_LIT} { printf("%s : FLOAT_LIT\n", yytext); return FLOAT_LIT; }

{HEX_LIT} { printf("%s : INT_LIT\n", yytext); return INT_LIT; }
{OCT_LIT} { printf("%s : INT_LIT\n", yytext); return INT_LIT; }
{DEC_LIT} { printf("%s : INT_LIT\n", yytext); return INT_LIT; }

{BAD_HEX} { printf("Lexical error - line %d : %s\n", yylineno, yytext); return LEX_ERR; }
{BAD_HEX_PREFIX} { printf("Lexical error - line %d : %s\n", yylineno, yytext); return LEX_ERR; }
{BAD_OCT} { printf("Lexical error - line %d : %s\n", yylineno, yytext); return LEX_ERR; }

{BAD_NUM} { printf("Lexical error - line %d : %s\n", yylineno, yytext); return LEX_ERR; }

{ID} { printf("%s : ID\n", yytext); return ID; }

"(" {printf("%s : LP\n", yytext); return LP; }
")" {printf("%s : RP\n", yytext); return RP; }
"[" {printf("%s : LB\n", yytext); return LB; }
"]" {printf("%s : RB\n", yytext); return RB; }
"{" {printf("%s : LC\n", yytext); return LC; }
"}" {printf("%s : RC\n", yytext); return RC; }
"," {printf("%s : COMMA\n", yytext); return COMMA; }
";" {printf("%s : SEMICOLON\n", yytext); return SEMICOLON; }
"?" {printf("%s : QUESTION\n", yytext); return QUESTION; }
":" {printf("%s : COLON\n", yytext); return COLON; }
"!" {printf("%s : NOT\n", yytext); return NOT; }
"=" {printf("%s : ASSIGN\n", yytext); return ASSIGN; }
"-" {printf("%s : MINUS\n", yytext); return MINUS; }
"+" {printf("%s : ADD\n", yytext); return ADD; }
"*" {printf("%s : MUL\n", yytext); return MUL; }
"/" {printf("%s : DIV\n", yytext); return DIV; }
"%" {printf("%s : MOD\n", yytext); return MOD; }
"&&" {printf("%s : AND\n", yytext); return AND; }
"||" {printf("%s : OR\n", yytext); return OR; }
"==" {printf("%s : EQ\n", yytext); return EQ; }
"!=" {printf("%s : NE\n", yytext); return NE; }
"<" {printf("%s : LT\n", yytext); return LT; }
"<=" {printf("%s : LE\n", yytext); return LE; }
">" {printf("%s : GT\n", yytext); return GT; }
">=" {printf("%s : GE\n", yytext); return GE; }

{MultilineComment} {}
{SingleLineComment} {}

[ \n] {}
[ \r\t] {}
[ \n\t]+ {}
. {printf("Lexical error - line %d : %s\n",yylineno,yytext);return LEX_ERR;}

%%


int main(int argc, char** argv) {
    
    if(argc > 1) {
        std::filebuf fb ;
        fb.open(argv[1], std::ios::in);
		std::istream in(&fb);
        FlexLexer* lexer = new yyFlexLexer(&in);    
        int symbol; 
        while( symbol = lexer->yylex()) { };
        fb.close();
    
    } else printf("No source file given!\n"); 

    return 0; 

}
