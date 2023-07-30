//QUESTION 15
#include <stdio.h>
//Write a function to make a power function.

int dopower(int n, int power);
int main()
{
  int n, power;
  	printf("Enter Your Number :\n");
  	scanf("%d", &n);
  	printf("Enter Your Power :\n");
  	scanf("%d", &power);
  	printf("%d To The Power %d => %d", n, power, dopower(n, power));
  	return 0;
}
	
int dopower(int n, int power){
	int answer;
	answer = pow(n, power);
	return answer;
	
}