#define FILAS 3
#define COLS 5


#include <stdio.h>
#include <malloc.h>

int main()
{

    int i,j;
    int **matriz;

// reservo memoria para las filas
    matriz = (int **)malloc (FILAS*sizeof(int *));

// reservo memoria para las columnas
    for (i=0;i<FILAS;i++)
        matriz[i] = (int *) malloc (COLS*sizeof(int));

    for(i=0; i < FILAS; i++)
        for(j=0; j < COLS; j++)
            matriz[i][j]=i*j;


    for(i=0; i < FILAS; i++)
        for(j=0; j < COLS; j++)
            printf("MATRIZ[%d][%d]=%d\n", i,j,matriz[i][j]);

    return 0;
}