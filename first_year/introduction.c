#include <stdio.h>

int main() {
    int num;

    printf("Hello, World!");
    printf("\n");

    printf("10 > 5 is : %i\n", 10 > 5);
    printf("\n");

    printf("Result is: %i", 5 > 2);
    printf("\n");

    printf("Please, enter a number: ");
    scanf("%i", &num);
    printf("Your number is: %i\n", num);

    char letter;

    printf("Please, enter a letter: ");
    letter = getchar();
    printf("\n You have introduced the letter: %c", letter);

    return 0;
}