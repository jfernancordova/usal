#include <stdio.h>
#include <string.h>

#define LENGTH 20

int main() {
    char string_original[LENGTH] = "Here we go!!!";
    char string_target[LENGTH];

    strcpy(string_target, "constant string");
    printf("%s\n", string_target);

    strcpy(string_target, string_original);
    printf("%s", string_target);

    return 0;
}