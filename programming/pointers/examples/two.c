#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char *c;

    c=(char *) malloc(sizeof(char));
    *c='A';

    printf("%c", *c);

    free(c);


    return(0);
}