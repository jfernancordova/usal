#include <stdio.h>

int main() {

    int array[10];
    int i;

    for (i = 0; i <= 9; i++) {
        printf("Insert element %i: ->", i);
        scanf("%i", &array[i]);
    }

    for (i = 0; i <= 9; i++)
        printf("%i-", array[i]);

    return 0;
}