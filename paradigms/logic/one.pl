%swipl -s one.pl

%plus
plus(A, B, S):-S is A + B.

%mult
plusMult(A,B,M,R):-R is (A+B) * M.

%min
min(A,B,Mi):-Min is A, A < B, !.
min(A,B,Mi):-Min is B, B < A, !.