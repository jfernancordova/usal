#include <stdio.h>
#include <malloc.h>

int main()
{
	int *i;
	
	i=(int *) malloc(sizeof(int));
	*i=123;
	
	printf("%d", *i);
	
	free(i);
	
	
	return(0);
}