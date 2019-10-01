#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define VEC_SIZE 5

int main()
{
    struct nodo
    {
        char nombre[100];
        int edad;
    };

    struct nodo *persona;
    char nombre[100];
    int edad;
    int i;

    printf("Ingrese nombre:");
    gets(nombre);
    printf("\nIngrese edad:");
    scanf("%d", &edad);

    persona= (struct nodo *) malloc(sizeof(struct nodo ));  //aloco espacio
    strcpy(persona->nombre, nombre);
    persona->edad=edad;

    printf("%s\n", persona->nombre);
    printf("%d\n", persona->edad);

    free(persona);

    return(0);
}