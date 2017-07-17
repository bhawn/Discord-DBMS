//Define the DML grammer
grammar dml;
program              : (query | command)+ ;
//queries
query                : relation_name ' <- ' expr';' ;
relation_name        : identifier ;
identifier           : ALPHA(ALPHA | DIGIT | '_')* ;
expr                 : atomic_expr
                     |selection
                     |projection
                     |renaming
                     |union1
                     |difference
                     |product
                     |natural_join 
                     ;
atomic_expr          : relation_name    # atomicRelationName 
                     | '('expr')'       # atomicParens
                     ;
selection            : 'select' '('condition')' atomic_expr ;
condition            : conjunction(' || ' conjunction)* ;
conjunction          : comparison(' && ' comparison)* ;
comparison           : operand op operand   # comparisonOperation
                     | '(' condition ')'    # comparisonParens
                     ;
op                   : '=='
                     | '!='
                     | '>'      
                     | '<' 
                     | '<=' 
                     | '>=' 
                     ;
operand              : attribute_name | literal ;
attribute_name       : identifier ;
literal              : WORD | integer ;
WORD                 : '"' (~["])+ '"';
projection           : 'project' '('attribute_list')' atomic_expr ;
attribute_list       : attribute_name(','attribute_name)* ;
renaming             : 'rename' '('attribute_list')' atomic_expr ;
union1               : atomic_expr '+' atomic_expr ;
difference           : atomic_expr '-' atomic_expr ;
product              : atomic_expr '*' atomic_expr ;
natural_join         : atomic_expr '&' atomic_expr ;
//commands
command              : 
                     (   open_cmd 
                       | close_cmd 
                       | write_cmd 
                       | exit_cmd 
                       | show_cmd 
                       | create_cmd 
                       | update_cmd 
                       | insert_cmd
                       | delete_cmd  
                       | list_cmd )
                    ';'
                     ;
open_cmd             : 'OPEN' relation_name ;
close_cmd            : 'CLOSE' relation_name ;
write_cmd            : 'WRITE' relation_name ;
exit_cmd             : 'EXIT' ;
show_cmd             : 'SHOW' atomic_expr ;
create_cmd           : 'CREATE TABLE' relation_name '('typed_attribute_list')' 'PRIMARY KEY' '('attribute_list')' ;
update_cmd           : 'UPDATE' relation_name 'SET' attribute_name '=' literal(','attribute_name '=' literal)* 'WHERE' condition ;
insert_cmd           : 'INSERT INTO' relation_name 'VALUES FROM' '('literal(','literal)*')'
                     | 'INSERT INTO' relation_name 'VALUES FROM RELATION' expr 
                     ;
delete_cmd           : 'DELETE FROM' relation_name 'WHERE' condition ;
list_cmd             : 'LIST' list_type ;
list_type            : 'TABLES' | 'VIEWS' | 'ALL' ;
typed_attribute_list : attribute_name type (','attribute_name type)* ;
type                 : 'VARCHAR' '('integer')' | 'INTEGER' ;
integer              : (DIGIT)+ ;
ALPHA                : [A-Za-z];
DIGIT                : [0-9];
EQUAL                : '==' ;
NOTEQUAL             : '!=' ;
GREATERTHAN          : '>'  ;
LESSTHAN             : '<'  ;
GREATERTHANOREQUAL   : '<=' ;
LESSTHANOREQUAL      : '>=' ;
WS                   : [ \t\r\n]+ -> skip ; // skip spaces, tabs, newlines