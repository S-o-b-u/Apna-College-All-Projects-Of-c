#include <stdio.h>
//Write a program to check if a given number is Armstrong number or not.
int main()
{
 int n, digit, temp, sum=0;
 printf("enter number\n");
 scanf("%d", &n); /* input must be carry only 3 digits otherwise
  u can change the logic(digit*digit) in the while loop given below; */
 
 temp = n;
 while(n>0) {
 	 digit = n % 10;
 	 sum += (digit*digit*digit);
 	 n /= 10;
 }
 if(temp == sum) {
 	printf("yes %d is an amstrong number :)", temp);
 } else{
 	printf("that's not an armstrong number");
 }
  return 0;
}
