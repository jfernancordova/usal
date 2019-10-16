%swipl -s one.pl

long([],0).
long([_|T],L):- long(T,N), L is N+1.

sum([],0).
sum([X|F],S):- sum(F,B), S is B + X.

promedio(M,P):- long(M,L), sum(M,S), P is S/L.

maximo(X,Y,X) :- X >= Y.
maximo(X,Y,Y) :- X < Y.
max([X],X).
max([X,Y|L],Z) :- max([Y|L],U), maximo(X,U,Z).

minimo(X,Y,X) :- X =< Y.
minimo(X,Y,Y) :- X > Y.

min([X], X).
min([X,Y|L], T) :- min([Y|L], P), minimo(X,P,T).
