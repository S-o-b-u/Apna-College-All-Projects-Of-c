//QUESTION 10
#include<stdio.h>
//Write a program to check if a number is prime or not.
void main() 
{
	int n, mark;
	printf("enter number\t");
	scanf("%d", &n);
	mark = 0;
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			mark = 1;
			break;
		}
		
	}
	if(mark==0){
		printf("yes this is a prime number :)");
	}if(mark==1){
		printf("not a prime number dude! :(");
	}
}
