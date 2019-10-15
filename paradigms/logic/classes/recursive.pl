%swipl -s recursive.pl

%first alternative
potencia(_,0,1).

%second alternative potencia(_, 0, 1):-!.

potencia(Base, Exp, Pot):-Aux is Exp-1, potencia(Base, Aux, Temp), Pot is Base * Temp.