#include <stdio.h>

//Prototype
int numberCube(int number);

int main() {
    int i, cube;

    for (i = 0; i < 20; i += 2) {
        cube = numberCube(i);
        printf("The cube of %d is %d\n", i, cube);
    }

    return 0;
}

int numberCube(int number) {
    return (number * number * number);
}