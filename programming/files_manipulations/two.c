#include <stdio.h>

int main() {
    FILE *fp;

    char character;

    fp = fopen("file.txt", "w+");

    printf("\nInsert something to this file: ");

    while ((character = getchar()) != '\n') {
        fputc(character, fp);
    }

    fclose(fp);

    return 0;
}