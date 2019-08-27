#include <stdio.h>

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *pa;
    int *pb;
    int x;

    pa = &a[0];
    pb = pa;

    x = *pa;

    printf("x is: %d\n", x);

    printf("pa+1 is: %d\n", *(pa + 1));

    printf("*(a+3) is: %d\n", *(a + 3));

    printf("pb+1 is: %d\n", *(pb + 1));

    return 0;
}
