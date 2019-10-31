%swipl -s nine.pl

persona(carlos,90,1.78).
persona(maria,54,1.65).
persona(jose,115,1.83).

imc(X,Y,R) :- R is X/(Y**2).  % La fórmula del índice de masa corporal es IMC = peso / altura 2

status(X):- delgado(X, 18.5); normal(X, 25); sobrepeso(X, 25); obeso(X, 30).

delgado(X,Y) :- Y < X .
normal(X,Y) :- X < Y.
sobrepeso(X,Y) :- Y =< X.
obeso(X,Y) :- X >= Y.

personaimc(Nombre, IMC, Estado) :- persona(Nombre, Estado, Y), imc(Estado, Y, IMC), status(Estado). 

%personaimc(jose,(34.33963390964197),115).




