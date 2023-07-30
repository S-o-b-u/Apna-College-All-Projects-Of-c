//QUESTION 17
#include <stdio.h>
//Write a program in C to print the elements of an array in reverse order.
int main()
{
	int arr[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//lets print it in reverse...
	printf("==ARRAY REVERSE==\n");
	printf("\n");
	for(int i=9; i>=0; i--){
		printf("     ==%d==\n", arr[i]);
	}
   return 0;
}
	
