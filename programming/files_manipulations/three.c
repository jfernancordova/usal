#include <stdio.h>

int main() {
    FILE *file;
    char character;
    int cont = 0;

    file = fopen("test.txt", "rb");

    if (file == NULL) {

        printf("\nSomething wrong with the file. \n\n");

    } else {

        printf("\nThe content is \n\n");

        while (feof(file) == 0) {
            character = fgetc(file);
            cont++;
            printf("%c\n", character);
        }
    }
    fclose(file);
    printf("\nCOUNTER: %d", cont);
    return 0;
}