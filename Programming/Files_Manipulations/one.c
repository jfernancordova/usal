#include <stdio.h>

int main() {
    FILE *file;
    char character;

    file = fopen("test.txt", "r");

    if (file == NULL) {
        printf("\nError, something wrong. \n\n");
    } else {
        printf("\nThe content is \n\n");

        while (feof(file) == 0) {
            character = fgetc(file);
            printf("%c", character);
        }
    }
    fclose(file);
    return 0;
}