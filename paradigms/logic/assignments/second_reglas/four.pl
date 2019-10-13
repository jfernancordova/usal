%swipl -s four.pl

entrada(paella).
entrada(gazpacho).
entrada(consome).
carne(filete_de_cerdo).
carne(pollo_asado).
pescado(trucha).
pescado(bacalao).
postre(flan).
postre(nueces_con_miel).
postre(naranja).
calorias(paella, 200).
calorias(gazpacho, 150).
calorias(consome, 300).
calorias(filete_de_cerdo, 400).
calorias(pollo_asado, 280).
calorias(trucha, 160).
calorias(bacalao, 300).
calorias(flan, 200).
calorias(nueces_con_miel, 500).
calorias(naranja, 50).

plato_principal(P):- carne(P); pescado(P).

comida(Entrada, Principal, Postre):- entrada(Entrada), plato_principal(Principal), postre(Postre).

valor(Entrada, Principal, Postre, Valor):- calorias(Entrada, X), calorias(Principal,Y), calorias(Postre, Z), sumar(X, Y, Z, Valor).

sumar(X, Y, Z, Res):- Res is X + Y + Z.

menor(X, Y):- X < Y.

/*
Entrada, Principal y Postre es una comida equilibrada si es comida, tenga valor y sea menor.
Una Entrada Principal y Postre es comida si tiene entrada, plato principal y postre.
Una Entrada, Principal, Postre y Valor es valuable si tiene calorias y pueda sumar.
X e Y es menor si X es menor a Y.
*/
comida_equilibrada(Entrada, Principal, Postre):- comida(Entrada, Principal,Postre), valor(Entrada, Principal, Postre, Valor), menor(Valor, 800).

