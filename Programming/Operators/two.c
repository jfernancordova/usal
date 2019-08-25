#include <stdio.h>

void calculate(float a, float b, int operator);

int main() {
    float a, b;
    int operator;

    printf("main\n");

    printf("Insert first number: ");
    scanf("%f", &a);

    printf("Insert second number: ");
    scanf("%f", &b);

    printf("Insert operator (1=+, 2=-, 3=*, 4=/): ");
    scanf("%d", &operator);

    calculate(a, b, operator);

    printf("Come back to main and finish\n");

    return 0;
}

void calculate(float a, float b, int operator) {
    float result;
    printf("I am in procedure\n");

    switch (operator) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
        default:
            result = a + b;
            break;
    }

    printf("The result is: %f\n", result);
}