#include <stdio.h>

void checkCapicua(int number[]);

int main() {

    int number[5];
    int i;

    for (i = 0; i <= 4; i++) {
        printf("Insert an one digit number for the position %d: ", i);
        scanf("%d", &number[i]);
    }

    printf("Show the complete number\n");

    for (i = 0; i <= 4; i++) {
        printf("->%d<-\n", number[i]);
    }

    checkCapicua(number);

    printf("Come back to main and finish\n");

    return 0;
}


void checkCapicua(int number[]) {
    int i;
    int j;
    int isCapicua = 1;

    for (i = 0, j = 4; i < j; i++, j--) {
        if (number[i] != number[j]) {
            isCapicua = 0;
            break;
        }
    }

    if (isCapicua)
        printf("It is capicua!!!");
    else
        printf("It is not capicua!!!");
}