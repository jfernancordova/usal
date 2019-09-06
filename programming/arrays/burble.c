#include <stdio.h>

#define SIZE 10

void burble(int number[]);

int main() {

    int number[SIZE];
    int i;

    for (i = 0; i <= SIZE - 1; i++) {
        printf("Insert 1 digit for the position %d: ", i);
        scanf("%d", &number[i]);
    }

    printf("show the complete number\n");

    for (i = 0; i <= SIZE - 1; i++) {
        printf("->%d<-\n", number[i]);
    }

    burble(number);

    printf("\nCome back to main and finish\n");

    return 0;
}

void burble(int number[]) {
    int i;
    int j;
    int n = SIZE;
    int aux;

    for (i = 0; i <= (n - 1) - 1; i++)
        for (j = 0; j <= (n - 1) - (i + 1); j++)

            if (number[j] > number[j + 1]) {
                aux = number[j];
                number[j] = number[j + 1];
                number[j + 1] = aux;
            };

    printf("show the sorted number\n");

    for (i = 0; i <= SIZE - 1; i++) {
        printf("->%d<-\n", number[i]);
    }

}