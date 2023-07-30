//QUESTION 6
#include <stdio.h>
//Write a program to print the smallest number of two.
int main()
{
  int a, b;
  printf("enter a & b\n");
  scanf("%d %d", &a, &b);
  
  if(a<b){
  	printf("smaller one is %d\n", a);
  }if(b<a){
    printf("smaller one is %d\n", b);	
  }

  return 0;
}