//QUESTION 12
#include <stdio.h>
//Write a function to find sum of digits of a number.
 
 int digitsum(int num);
	
 void main()
{
	int num;
	printf("Enter Your Number :\n");
	scanf("%d", &num);
	printf("Final Sum Value Of %d = %d", num, digitsum(num));
		
 }

 int digitsum(int num){
 	
 	int sum, remainder;
 	sum=0;
 	while(num!=0){
 		remainder=num%10;
 		sum+=remainder;
 		num=num/10;
	 }
	 return sum;
 }