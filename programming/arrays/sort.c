#include <stdio.h>

#define SIZE 10

void selection(int number[]);

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

    selection(number);

    printf("\nCome back to main and finish\n");
    return 0;
}


void selection(int number[]) {
    int i;
    int j;
    int n = SIZE;
    int aux;
    int min;

    for (i = 0; i <= (n - 1) - 1; i++) {
        min = i;
        for (j = i + 1; j <= n - 1; j++) {
            if (number[j] < number[min])
                min = j;
        }
        aux = number[i];
        number[i] = number[min];
        number[min] = aux;

    }

    printf("show the sorted number\n");

    for (i = 0; i <= SIZE - 1; i++) {
        printf("->%d<-\n", number[i]);
    }

}