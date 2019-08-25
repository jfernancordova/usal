#include <stdio.h>

void factorial(int n);

int main() {

    int number;

    printf("Ingrese un number: ");
    scanf("%d", &number);

    factorial(number);

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