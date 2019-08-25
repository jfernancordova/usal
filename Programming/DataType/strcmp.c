#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hola";
    char string2[] = "Hola";
    char string3[] = "aaa";
    char string4[] = "bbb";
    char string5[] = "ccc";

    if (strcmp(string1, string2) == 0)
        printf("The strings are equals\n");

    if (strcmp(string3, string4) < 0)
        printf("string3 is less than string4\n");

    if (strcmp(string5, string4) > 0)
        printf("string5 is grater than string4\n");

    return 0;

}