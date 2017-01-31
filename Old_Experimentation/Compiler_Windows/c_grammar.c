translation-unit:
external-declaration
translation-unit external-declaration
external-declaration:
function-definition
declaration
function-definition:
declaration-specifiersopt declarator declaration-listopt compound-statement
declaration:
declaration-specifiers init-declarator-listopt;
declaration-list:
declaration
declaration-list declaration
declaration-specifiers:
storage-class-specifier declaration-specifiersopt
type-specifier declaration-specifiersopt
type-qualifier declaration-specifiersopt
storage-class specifier: one of
auto register static extern typedef
type specifier: one of
void char short int long float double signed
unsigned struct-or-union-specifier enum-specifier typedef-name
194
type-qualifier: one of
const volatile
struct-or-union-specifier:
struct-or-union identifieropt { struct-declaration-list }
struct-or-union identifier
struct-or-union: one of
struct union
struct-declaration-list:
struct declaration
struct-declaration-list struct declaration
init-declarator-list:
init-declarator
init-declarator-list, init-declarator
init-declarator:
declarator
declarator = initializer
struct-declaration:
specifier-qualifier-list struct-declarator-list;
specifier-qualifier-list:
type-specifier specifier-qualifier-listopt
type-qualifier specifier-qualifier-listopt
struct-declarator-list:
struct-declarator
struct-declarator-list , struct-declarator
struct-declarator:
declarator
declaratoropt : constant-expression
enum-specifier:
enum identifieropt { enumerator-list }
enum identifier
enumerator-list:
enumerator
enumerator-list , enumerator
enumerator:
identifier
identifier = constant-expression
declarator:
pointeropt direct-declarator
direct-declarator:
identifier
(declarator)
direct-declarator [ constant-expressionopt ]
195
direct-declarator ( parameter-type-list )
direct-declarator ( identifier-listopt )
pointer:
* type-qualifier-listopt
* type-qualifier-listopt pointer
type-qualifier-list:
type-qualifier
type-qualifier-list type-qualifier
parameter-type-list:
parameter-list
parameter-list , ...
parameter-list:
parameter-declaration
parameter-list , parameter-declaration
parameter-declaration:
declaration-specifiers declarator
declaration-specifiers abstract-declaratoropt
identifier-list:
identifier
identifier-list , identifier
initializer:
assignment-expression
{ initializer-list }
{ initializer-list , }
initializer-list:
initializer
initializer-list , initializer
type-name:
specifier-qualifier-list abstract-declaratoropt
abstract-declarator:
pointer
pointeropt direct-abstract-declarator
direct-abstract-declarator:
( abstract-declarator )
direct-abstract-declaratoropt [constant-expressionopt]
direct-abstract-declaratoropt (parameter-type-listopt)
typedef-name:
identifier
statement:
labeled-statement
expression-statement
compound-statement
selection-statement
196
iteration-statement
jump-statement
labeled-statement:
identifier : statement
case constant-expression : statement
default : statement
expression-statement:
expressionopt;
compound-statement:
{ declaration-listopt statement-listopt }
statement-list:
statement
statement-list statement
selection-statement:
if (expression) statement
if (expression) statement else statement
switch (expression) statement
iteration-statement:
while (expression) statement
do statement while (expression);
for (expressionopt; expressionopt; expressionopt) statement
jump-statement:
goto identifier;
continue;
break;
return expressionopt;
expression:
assignment-expression
expression , assignment-expression
assignment-expression:
conditional-expression
unary-expression assignment-operator assignment-expression
assignment-operator: one of
= *= /= %= += -= <<= >>= &= ^= |=
conditional-expression:
logical-OR-expression
logical-OR-expression ? expression : conditional-expression
constant-expression:
conditional-expression
logical-OR-expression:
logical-AND-expression
logical-OR-expression || logical-AND-expression
197
logical-AND-expression:
inclusive-OR-expression
logical-AND-expression && inclusive-OR-expression
inclusive-OR-expression:
exclusive-OR-expression
inclusive-OR-expression | exclusive-OR-expression
exclusive-OR-expression:
AND-expression
exclusive-OR-expression ^ AND-expression
AND-expression:
equality-expression
AND-expression & equality-expression
equality-expression:
relational-expression
equality-expression == relational-expression
equality-expression != relational-expression
relational-expression:
shift-expression
relational-expression < shift-expression
relational-expression > shift-expression
relational-expression <= shift-expression
relational-expression >= shift-expression
shift-expression:
additive-expression
shift-expression << additive-expression
shift-expression >> additive-expression
additive-expression:
multiplicative-expression
additive-expression + multiplicative-expression
additive-expression - multiplicative-expression
multiplicative-expression:
multiplicative-expression * cast-expression
multiplicative-expression / cast-expression
multiplicative-expression % cast-expression
cast-expression:
unary expression
(type-name) cast-expression
unary-expression:
postfix expression
++unary expression
--unary expression
unary-operator cast-expression
sizeof unary-expression
sizeof (type-name)
198
unary operator: one of
& * + - ~ !
postfix-expression:
primary-expression
postfix-expression[expression]
postfix-expression(argument-expression-listopt)
postfix-expression.identifier
postfix-expression->+identifier
postfix-expression++
postfix-expression--
primary-expression:
identifier
constant
string
(expression)
argument-expression-list:
assignment-expression
assignment-expression-list , assignment-expression
constant:
integer-constant
character-constant
floating-constant
enumeration-constant