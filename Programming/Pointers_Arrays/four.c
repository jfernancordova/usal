#include <stdio.h>

int my_strlen(char *s);

int main() {
    char string[20] = "my_string";
    int size;

    size = my_strlen(string);
    printf("The size is: %d\n", size);
}

int my_strlen(char *s) {
    int n;
    for (n = 0; *s != '\0'; s++) {
        n++;
    }
    return n;
}