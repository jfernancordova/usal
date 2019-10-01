#include <stdio.h>

int f(int n);

int main() {
    printf("f(5) = %d\n", f(5));
    return 0;
}

int f(int n) {
    int m;
    switch (n) {
        case 1:
            m = 2;
            break;
        case 2:
            m = 4;
            break;
        case 3:
            m = 8;
            break;
        default:
            m = 0;
            break;
    }
    return m;
}