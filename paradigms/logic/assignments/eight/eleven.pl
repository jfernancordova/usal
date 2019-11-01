%swipl -s eleven.pl

par(X) :- 0 is mod(X, 2).
impar(X) :- 1 is mod(X, 2).

prod(_,[],[]):-!.
prod(M, [X|XS], [Y|YS]):- par(X), prod(M, XS, YS), Y is (X*M).
prod(M, [X|XS], [Y|YS]):- impar(X), prod(M, XS, YS), Y is X.