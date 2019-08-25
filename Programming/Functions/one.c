#include <stdio.h>

//Prototype
int subtract(int x, int y);

int main() {
    int a = 5;
    int b = 93;
    int c;

    printf("I am in main\n");

    c = substract(a, b);
    printf("Come back to main and finish\n");

    printf("The difference is: %d\n", c);

    return 0;

}

int subtract(int x, int y) {
    printf("I'm in function\n");
    return (x - y);
}