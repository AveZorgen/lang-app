grammar calc;
INT: [0-9]+;
SEP: ';';
NEWLINE:'\r'? '\n' -> skip;
WS : [ \t]+ -> skip;
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
prog: expr # OneLineProg
 | prog SEP expr # MultLineProg
 ;
expr: expr op=(MUL | DIV) expr # MulDiv
 | expr op=(ADD | SUB) expr # AddSub
 | INT # int
 | '(' expr ')' # parens
 ;
