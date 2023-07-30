//QUESTION 1
#include <stdio.h>
//Write a program to calculate perimeter of rectangle.
void main() 
{
	int length, width;
	
	printf("enter length\n");
	scanf("%d", &length);
	printf("\n");
	printf("enter width\n");
	scanf("%d", &width);
	
	int perimeter = 2*(length+width);
	printf("perimeter of the rectangle is = %d", perimeter);
	
}