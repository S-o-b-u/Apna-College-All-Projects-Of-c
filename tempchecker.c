//QUESTION 14
#include <stdio.h>
#include<math.h>
//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

void tempcheck(int n);

int main()
{
   int temp;
   printf("Enter Your Temperature => ");
   scanf("%d", &temp);
   tempcheck(temp);
   return 0;
}
	
void tempcheck(int n){
	int temp;
	temp=n;
	if(temp>20){
		 printf("Your Temperature Is => %d\n", temp);
		  printf("And It's WARM :)");
	}
	if(temp<=20){
		 printf("Your Temperature Is => %d\n", temp);
		  printf("And It's COLD :)");
	}
}	
	