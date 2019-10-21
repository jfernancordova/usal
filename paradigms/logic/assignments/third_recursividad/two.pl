%swipl -s two.pl

sub([],0).
sub([X|L],Y):- par(X), sub(L,Y1), Y is X-Y1.
sub([X|L],Y):- not(par(X)), sub(L, Y).
par(N):- N mod 2 =:= 0.
