#include <stdio.h>

int main() {
    FILE *file;
    char character;
    int cont = 0;

    file = fopen("test.txt", "rb");

    if (file == NULL) {
        printf("\nError, something wrong. \n\n");
    } else {

        printf("\nThe content is \n\n");

        while (feof(file) == 0) {
            character = fgetc(file);
            cont++;
            printf("->%c-%x----%d\n", character, character, cont);

        }
    }
    fclose(file);
    printf("\n%d", cont);
    return 0;
}