#include <stdio.h>

int main(int argc, char *argv[]) {
    int j;
    printf("argc: %d\n", argc);
    for (j = 0; j <= argc - 1; j++)
        printf("PARAMETER %d->%s\n", j, argv[j]);

    return 0;
}
