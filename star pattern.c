#include<stdio.h>
/* 
a. Search on what a "nested loop" is & print this
pattern using it.

                *****
                *****
                *****
                *****

*/
void main()
{
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("*");
		}
		printf("\n");
	}
}
