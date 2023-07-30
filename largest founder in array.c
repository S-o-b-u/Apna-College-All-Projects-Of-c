//QUESTION 20
#include <stdio.h>
//Write a program to print the largest number in an array.

int main()
{
	int arr[10];
		printf("Enter The Array =>");
	for(int i=0; i<=9; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	 for(int i=0; i<=9; i++)
	{
      if(arr[0]<arr[i])
	  {
      	arr[0]=arr[i];
	  }
   	}
   	printf("Largest One Is => %d", arr[0]);
	
   return 0;
}
	
