//QUESTION 8
#include <stdio.h>
//Write a program to check if the given number is a natural number(n>0).

int main()
{
 int n;
 printf("enter number\n");
 scanf("%d", &n);
 
 if(n>0){
 	printf("yes this is a natural number(n>0)/n");
 }else{
 	printf("wrong input");
 }
  return 0;
}
