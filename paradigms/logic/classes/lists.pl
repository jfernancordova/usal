%swipl -s long.pl

long([], 0):-!.

long([_|XS], L):-long(XS, S), L is S + 1.