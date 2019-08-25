#include <stdio.h>

void show_array(int array[]);

int main() {

    int array[5] = {10, 11, 12, 13, 14};
    int i;

    printf("\nI am in main and I'm showing the array content\n");

    for (i = 0; i <= 4; i++)
        printf("%d-", array[i]);

    show_array(array);

    printf("Come back to main and finish\n");

    printf("Show the modified array. I am in main\n");

    for (i = 0; i <= 4; i++)
        printf("%d->", array[i]);

    return 0;

}


void show_array(int array[]) {
    int j;
    printf("\nProcessing\n");

    array[2] = 1233;

    for (j = 0; j <= 4; j++)
        printf("%d-", array[j]);

}