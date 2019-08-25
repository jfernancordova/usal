#include <stdio.h>

//Prototype
long potentialForTwo(int number);

int main() {
    int i;
    long value;

    for (i = 0; i < 31; i++) {
        value = potentialForTwo(i);
        printf("2 elevated to %d is: %ld\n", i, value);
    }

    return 0;

}

long potentialForTwo(int number) {
    int t;
    long value = 1;

    for (t = 0; t < number; t++)
        value *= 2;
    return (value);
}
