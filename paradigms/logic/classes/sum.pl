%swipl -s sum.pl

sum([], 0).
sum([X | XS ], S):-sum(XS, T), S is T + X.

mayorSum([],0).
mayorSum([X | XS], S):-X>10,mayorSum(XS, T), S is T + X.

mayorSum([X | XS], S):-mayorSum(XS, S).

mayorSum(Dato,[X | XS], S):-mayorSum(Dato, XS, S).
