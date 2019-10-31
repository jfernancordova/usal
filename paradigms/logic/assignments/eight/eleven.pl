%swipl -s eleven.pl

prod([],1).
prod([N|L],X) :- par(N), prod(L,X1), X is X1 * N.
prod([_N|L],X) :- not(par(_N)), prod(L,X).
par(N):-N mod 2 =:= 0.

