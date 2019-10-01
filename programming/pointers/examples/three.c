
#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define VEC_SIZE 5

int main()
{
    int *vec;
    int i;

    vec=(int *) malloc(VEC_SIZE*sizeof(int));

    for(i=0; i< VEC_SIZE; i++)
        vec[i]=i;

    for(i=0; i< VEC_SIZE; i++)
        printf("%d", vec[i]);




    free(vec);


    return(0);
}
