%swipl -s introduction.pl

eatmeat(lion).
eatmeat(pork).

eatvegetable(cow).
eatvegetable(pork).

carnivoro(X):-eatmeat(X), not(eatvegetable(X)).

herviboro(X):-eatvegetable(X), \ + eatmeat(X).

omnivero(X):-eatmeat(X), eatvegetable(X).

ayuno(X):-not(eatvegetable(X)), not(eatvegetable(X)).