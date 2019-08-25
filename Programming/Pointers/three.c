#include <stdio.h>

void swap(int *a, int *b);

int main() {

    int a, b;

    printf("\nI'm in main and insert data to swap\n");

    printf("Insert the first data: ");
    scanf("%d", &a);

    printf("Insert the second data: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("Come back to main and finish\n");

    printf("The new a value is: %d the new b value is: %d\n", a, b);

    return 0;
}


void swap(int *a, int *b) {
    int temp;
    printf("\nProcessing\n");

    temp = *a;
    *a = *b;
    *b = temp;
}