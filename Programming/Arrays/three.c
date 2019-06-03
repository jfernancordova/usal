#include <stdio.h>

int main() {
    int array[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int i;
    int j;

    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 3; j++)
            if (j == 3)
                printf("%i\n", array[i][j]);
            else
                printf("%i-", array[i][j]);

    return 0;
}