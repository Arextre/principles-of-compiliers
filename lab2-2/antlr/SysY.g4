grammar SysY;

import sysy;

term : INT | FLOAT | VOID | CONST | IF | ELSE | WHILE | BREAK | CONTINUE | RETURN | FOR | DO |
ASSIGN | ADD | MINUS | MUL | DIV | MOD | EQ | NE | LT | GT | LE | GE | NOT | AND | OR |
COMMA | SEMICOLON | LP | RP | LB | RB | LC | RC | QUESTION | COLON | ID | DecIntConst | OctIntConst | HexIntConst |
DecFloatConst | HexFloatConst;

prog : INT* | FLOAT* | VOID* | CONST* | IF* | ELSE* | WHILE* | BREAK* | CONTINUE* | RETURN* | FOR* | DO* |
       ASSIGN* | ADD* | MINUS* | MUL* | DIV* | MOD* | EQ* | NE* | LT* | GT* | LE* | GE* | NOT* | AND* | OR* |
       COMMA* | SEMICOLON* | LP* | RP* | LB* | RB* | LC* | RC* | QUESTION* | COLON* | ID* | DecIntConst* | HexIntConst* |
       DecFloatConst* | HexFloatConst*;


