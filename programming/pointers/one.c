#include <stdio.h>

void show_presentation(int *a);

int main() {
    int a;
    printf("I am in main\n");
    printf("Insert a number to show: ");
    scanf("%d", &a);

    show_presentation(&a);

    printf("Come back to main and finish\n");

    printf("The main parameter is: %d", a);

    return 0;
}

void show_presentation(int *a) {
    printf("Processing\n");
    printf("The value is: %d\n", *a);
    *a = 232;
    printf("Change the parameter to 232 %d\n", *a);
}