//QUESTION 19
#include <stdio.h>
//In an array of numbers, find how many times does a number 'x' occurs.

int main()
{
	int arr[10];
	int count;

	printf("Enter Your Array => ");
	
	for(int i=0; i<=9; i++){
		scanf("%d", &arr[i]);
	}
		count=0;
	//suppose the x = 5 then...
    for(int i=0; i<=9; i++){
    
    	printf("==%d==\n", arr[i]);
    		if(arr[i]==5){
		count++;
			}
	}
	printf("Total Number Of X is => %d", count);
   return 0;
}
	
