#include <stdio.h>

//Prototype
float product(float array[]);

int main() {
    float array[5] = {1.2, 4.5, 7.05, 6.14, 0.09876};
    float product;

    product = product(array);
    printf("The product from array is: %f\n", product);

    return 0;
}

float product(float array[]) {
    int t;
    float temp;

    temp = array[0];

    for (t = 1; t < 5; t++)
        temp *= array[t];
    return (temp);
}