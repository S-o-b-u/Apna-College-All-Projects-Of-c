#include<stdio.h>
//Write a program to replace lowercase letters with uppercase & vice versa in a string.

char printstr1(char str1[]);
char printstr2(char str2[]);

void main()
{
	char str1[200], str2[200];
	printf("Enter Your 1st Sentence Here(should be uppercase) => \n");
	fgets(str1, 200, stdin);
	
	printstr1(str1);
	
	printf("Enter Your 2nd Sentence Here(should be lowercase) => \n");
	fgets(str2, 200, stdin);
	
	printstr2(str2);
}

char printstr1(char str1[])
{
		for(int i=0; str1[i]!='\0'; i++)
	{	
	    if(str1[i]>='a' && str1[i]<='z'){
	    	str1[i]=str1[i]-32;
		}
	}
	printf("Your Replaced String Is => \n");
	printf("%s", str1);
}

char printstr2(char str2[])
{
		for(int i=0; str2[i]!='\0'; i++)
	{	
	    if(str2[i]>='A' && str2[i]<='Z'){
	    	str2[i]=str2[i]+32;
		}
	}
	printf("Your Replaced String Is => \n");
	printf("%s", str2);
}