%swipl -s ten.pl

count(X,[],0).
count(X,[X|L],C):- !,count(X,L,C1), C is C1+1.
count(X,[Y|L],C):- count(X,L,C).

%count(1, [1,1,1,2,3,4,5,6,7], R).
