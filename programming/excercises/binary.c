#include <stdio.h>

int main()
{
	int vector[10]={1,21,32,34,59,60,70,83,91,1010};
	int x, encontrado, i, centro, izquierda, derecha;

	printf("Ingrese valor a buscar: ", x);
	scanf("%d", &x);
	
	// Busqueda binaria
	encontrado=0;
	izquierda=0;
	derecha=9;
	
	while (!encontrado && izquierda <= derecha)
		{
			centro=(izquierda+derecha) / 2;
			if (x < vector[centro])
				derecha=centro-1;
			else if (x > vector[centro])
					izquierda=centro+1;
				 else
				 	encontrado=1;
		}
		
		if (encontrado)
			printf("\nValor %d encontrado en indice %d", x, centro);
		else
			printf("\nNO existe el valor %d en el vector", x);
			
	return 0;
}

