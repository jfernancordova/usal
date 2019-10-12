%swipl -s one.pl

operario(marcos). operario(candelaria). operario(ramon). operario(nelida).
operario(roberto). supervisor(andrea). supervisor(andres). gerente(bruno).

%X es Gerente de Y si Y es Operario o Y es Supervisor.
gacde(X,Y) :- gerente(X), ( operario(Y) ; supervisor(Y) ).

%X es Supervisor de Y si Y es Operario.
sacde(X,Y) :- supervisor(X), operario(Y).

% X es jerarquia de Y si X es Supervisor de Y si Y es Operario o X es Gerente de Y si Y es Operario o Y es Supervisor.
jerarquia(X,Y) :- gacde(X,Y) ; sacde(X,Y).