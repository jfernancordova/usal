#include <stdio.h>

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *pa;
    int x;

    pa = &a[0];

    x = *pa;

    printf("x is: %d\n", x);

    return 0;
}