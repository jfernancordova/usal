#include <stdio.h>

// Wrong Swapping

// Prototype
void swapp(int a, int b);

int main()
{

    int a, b;

    printf("\nAsk to Swap\n");

    printf("Insert First Date: ");
    scanf("%d", &a);

    printf("Insert Second Date: ");
    scanf("%d", &b);

    swapp(a,b);

    printf("\nCome back in main\n");

    printf("The new value a is: %d and the new value b is: %d\n", a, b);

    return 0;

}

void swapp(int a, int b)
{
    int temp;
    printf("\nProcessing\n");

    temp = a;
    a = b;
    b = temp;

}