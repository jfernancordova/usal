#include <stdio.h>

int main() {
    int a, b;
    a = b = 0;

    a++;
    printf("a++ in isolation: %d\n", a);

    ++a;
    printf("++a in isolation: %d\n", a);

    //With another instruction

    b = a++;
    printf("a : %d -- b : %d\n", a, b);


    b = ++a;
    printf("a : %d -- b : %d\n", a, b);


    return 0;

}