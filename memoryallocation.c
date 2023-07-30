#include <stdio.h>  
#include<stdlib.h>

/* Allocate memory for 500 integers using calloc &
then store first 500 natural numbers in that space. */

int  main()
{
	int *ptr = calloc(500, sizeof(int));
	
	for(int i=1; i<=500; i++){
		ptr[i-1]=i;
	}
	for(int i=0; i<500; i++)
	{
		printf("%d\n", ptr[i]);
	}	
	free(ptr);
	return 0;
}