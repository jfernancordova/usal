#include <stdio.h>

int main() {

    int array[3][4];
    int i;
    int j;

    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 3; j++) {
            printf("Insert data for the element %i,%i: ->", i, j);
            scanf("%i", &array[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
            if (j == 3)
                printf("%i\n", array[i][j]);
            else
                printf("%i-", array[i][j]);

    return 0;
}