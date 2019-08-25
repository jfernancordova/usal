#include <stdio.h>

int main() {
    char c;
    char *p;
    c = 'a';
    p = &c;

    printf("SHOW C: %c\n", c);
    printf("SHOW C but from the pointer: %c\n", *p);

    return 0;
}