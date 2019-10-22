%swipl -s two.pl
sub([],0).

%devuelve un valor restando la lista de pares 
sub([X|L],Y):- par(X), sub(L,Y1), Y is X-Y1.

%solo elementos pares basado en la regla
sub([X|L],Y):- not(par(X)), sub(L, Y).

%condicional de si es par o no
par(N):- N mod 2 =:= 0.
