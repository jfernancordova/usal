multiplicaFac(_, [], []).

multiplicaFac(F, [X | XS], [Y | YS]):-multiplicaFac(F, XS, YS), Y is F * X.