//QUESTION 16
#include <stdio.h>
//Write a program in C to find the maximum number between two numbers using a pointer.
int main()
{
  int no1, no2;
  int *ptr1, *ptr2;
   
   printf("Enter Your First Number : ");
   scanf("%d", &no1);
   printf("Enter Your Second Number : ");
   scanf("%d", &no2);
   
  ptr1=&no1;
  ptr2=&no2;
  
     if(*ptr1>*ptr2){
     	printf("Maximum is => %d", *ptr1);
	 }  else{
	 	printf("Maximum is => %d", *ptr2);
	 }
	 
   return 0;
}
	
