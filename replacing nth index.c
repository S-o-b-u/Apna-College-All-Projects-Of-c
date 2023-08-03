#include <stdio.h>
//Write a program to insert an element at the end of an array.
int main()
{
	int n;
	printf("Enter The Array Limit =\n");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<=n; i++){
		printf("Enter The Index Value Of %d => ", i);
		scanf("%d", &arr[i]);
	}
	//now we change nth index from the array...
	printf("==Lets Change The nth Index==\n");
	printf("Enter The Last Value You Want Replace With nth Index\n");
	scanf("%d", &arr[n]);
	printf("==ARRAY IS REPLACED==\n");
	for(int i=0; i<=n; i++){
		printf("=%d=\n", arr[i]);
	}
	
   return 0;
}
	
