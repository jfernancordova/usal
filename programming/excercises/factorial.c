#include <stdio.h>

void factorial(int n);

int main() {

    int number;

    printf("Insert a number: ");
    scanf("%d", &number);

    factorial(number);#include < stdio.h >

                       #include <malloc.h>

#include <string.h>

#define VEC_SIZE 5

    int main() {
        struct nodo {
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

        persona = (struct nodo *) malloc(sizeof(struct nodo));  //aloco espacio
        strcpy(persona->nombre, nombre);
        persona->edad = edad;

        printf("%s\n", persona->nombre);
        printf("%d\n", persona->edad);

        free(persona);

        return (0);
    }

    printf("Come back to main and finish\n");

    return 0;
}


void factorial(int n) {
    int i;
    int factorial = 1;

    for (i = 2; i <= n; i++)
        factorial = factorial * i;

    printf("The factorial of %d is: %d", n, factorial);

}