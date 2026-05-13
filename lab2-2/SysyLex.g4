lexer grammar SysyLex;

// keyword
INT : 'int';
FLOAT : 'float';
VOID : 'void';
CONST : 'const';
RETURN : 'return';
IF : 'if';
ELSE : 'else';
WHILE : 'while';
BREAK : 'break';
CONTINUE : 'continue'; 

// delimeter
LP : '(' ;
RP : ')' ;
LB : '[' ;
RB : ']' ;
LC : '{' ;
RC : '}' ;
COMMA : ',' ;
SEMICOLON : ';';
QUESTION : '?';
COLON : ':';

// operator
MINUS : '-';
NOT : '!';
ASSIGN : '=';
ADD : '+';
MUL : '*';
DIV : '/';
MOD : '%';
AND : '&&';
OR : '||';
EQ : '==';
NEQ : '!=';
LT : '<';
LE : '<=';
GT : '>';
GE : '>=';

// integer literal
INT_LIT
    : DEC_INT
    | OCT_INT
    | HEX_INT
    ;

// float literal
FLOAT_LIT
    : DIGIT+ '.' DIGIT* EXP? FSUFF?
    | '.' DIGIT+ EXP? FSUFF?
    | DIGIT+ EXP FSUFF?
    ;

// fragment for float literal
fragment DIGIT : [0-9];
fragment HEX_DIGIT : [0-9a-fA-F];
fragment DEC_INT : [1-9] DIGIT*;
fragment OCT_INT : '0' [0-7]*;
fragment HEX_INT : '0' [xX] HEX_DIGIT+;
fragment EXP : [eE] [+-]? DIGIT+;
fragment FSUFF : [fF];
fragment BAD_OCT : '0' [0-7]* [8-9] DIGIT*;
fragment BAD_NUM : DIGIT+ [A-Za-z_] [A-Za-z0-9_]*;
fragment BAD_HEX : '0' [xX] HEX_DIGIT* [g-zG-Z_] [A-Za-z0-9_]*;
fragment BAD_HEX_PREFIX : '0' [xX];


// identifier
ID
    : [a-zA-Z_] [a-zA-Z0-9_]*
    ;

// string
STRING : '"'(ESC|.)*?'"';

// for string
fragment
ESC : '\\"'|'\\\\';

// whitespace
WS : 
    [ \t\r\n] -> skip
    ;

// comments
LINE_COMMENT : '//' .*? '\r'? '\n' -> skip;
BLOCK_COMMENT : '/*'.*?'*/'-> skip ;

LEX_ERR
    : BAD_OCT
    | BAD_NUM
    | BAD_HEX
    | BAD_HEX_PREFIX
    | .
    ;
