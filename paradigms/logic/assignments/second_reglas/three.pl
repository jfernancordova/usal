%swipl -s three.pl

operario(marcos). operario(candelaria). operario(ramon). operario(nelida).
operario(roberto). supervisor(andrea). supervisor(andres). gerente(bruno).

%X es Gerente de Y si Y es Operario o Y es Supervisor.
gacde(X,Y) :- gerente(X), ( operario(Y) ; supervisor(Y) ).

/*
gacde(marcos,candelaria).

Marcos no satisface la primera meta gerente(X). Se hace backtracking hasta el último punto de decisión.
Candelaria satisface la segunda meta operario(Y).
Candelaria no satisface la tercera meta supervisor(Y). Se hace backtracking hasta el último punto de decisión.

gacde(X,Y) tiene como resultado false.
*/

%X es Supervisor de Y si Y es Operario.
sacde(X,Y) :- supervisor(X), operario(Y).

/*
sacde(andrea,nelida).

Andrea satisface la primera meta supervisor(X).
Nelida satisface la segnda meta operario(Y).

sacde(X,Y) tiene como resultado Andrea y Nelida.
*/

% X es jerarquia de Y si X es Supervisor de Y si Y es Operario o X es Gerente de Y si Y es Operario o Y es Supervisor.
jerarquia(X,Y) :- gacde(X,Y) ; sacde(X,Y).

/*
jerarquia(bruno,ramon).

Bruno y Ramon satisface la primera meta gacde(X,Y).
Bruno satisface la primera meta gerente(X).
Ramon satisface la segunda meta operario(Y).

jerarquia(X,Y) tiene como resultado Bruno y Ramon.
*/
