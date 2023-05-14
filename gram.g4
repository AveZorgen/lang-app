grammar gram;

primExp: '(' expression ')' 
    | ID
    | NUMBER
    ;

postExpr: primExp ( '[' expression ']' | '(' expression? ')' )*;

mulExpr: postExpr ((MUL| DIV) postExpr )*;

addExpr: mulExpr ((ADD| SUB) mulExpr )*;

expression: addExpr (COM addExpr)*;

program: statement_list? EOF;

statement_list: statement+;

statement: vardef
    | funcdef
    | compstm
    | exprstm
    | retstm
    ;

vardef: ID '=' expression ';';

funcdef: 'func' ID '(' arg_list? ')' compstm;

arg_list: ID (',' ID)*;

compstm: '{' statement_list? '}';

exprstm: expression? ';';

retstm: 'return' expression? ';';


ID: [a-zA-Z_][a-zA-Z0-9_]*;
NUMBER: '-'? [0-9]+ ('.' [0-9]+)?;
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
COM: ',';

Whitespace
    :   [ \t]+
        -> skip
    ;

Newline
    :   (   '\r' '\n'?
        |   '\n'
        )
        -> skip
    ;

BlockComment
    :   '/*' .*? '*/'
        -> skip
    ;

LineComment
    :   '//' ~[\r\n]*
        -> skip
    ;
