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
Entrada, Principal y Postre es una comida equilibrada si es comida, tenga valor y sea menor a 800.

Una Entrada Principal y Postre es comida si tiene entrada, plato principal y postre.
Una Entrada, Principal, Postre y Valor es valuable si tiene calorias y pueda sumar.
X e Y es menor si X es menor a Y.
*/
comida_equilibrada(Entrada, Principal, Postre):- comida(Entrada, Principal,Postre), valor(Entrada, Principal, Postre, Valor), menor(Valor, 800).

calorias(paella). % La Paella no satisface el hecho calorias(Entrada, X) por falta del segundo argumento. Se hace backtracking hasta el último punto de decisión.
calorias(trucha).  % La Trucha no satisface el hecho calorias(Entrada, X) por falta del segundo argumento. Se hace backtracking hasta el último punto de decisión.
entrada(X). % La entrada X satisface el hecho entrada(X), dando como resultado X = Paella.
calorias(Z,200). %La Z Y 200, satisface el hecho entrada(X), dando como resultado Z = Paella.
plato_principal(trucha). % La Trucha satisface la regla plato principal.
valor(consome,bacalao,flan,U). % El Consome, Bacalao, Flan y U, satisface la regla balor, dando como resultado U = 800.
comida_equilibrada(trucha,bacalao,flan). % La Truca, El Bacalao y el Flan no satisface la regla comida_equilibrada.
comida_equilibrada(trucha,bacalao,flan,Z). % La Truca, El Bacalao y el Flan no satisface la regla comida_equilibrada. Argumento Z erroneo.
comida_equilibrada(gazpacho,filete_de_cerdo,naranja). % El gazpacho, filete de cerdo y naranja satisface la regla comida_equilibrada.
comida_equilibrada(gazpacho,filete_de_cerdo,naranja,X). % El gazpacho, filete de cerdo y naranja no satisface la regla comida_equilibrada. Argumento X erroneo.