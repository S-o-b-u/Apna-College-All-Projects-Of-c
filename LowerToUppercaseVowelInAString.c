#include <stdio.h>
//Write a program to convert all lowercase vowels to uppercase in a string.

int main()
{
	char str[200];
	printf("Enter Your Sentence Here => \n");
	gets(str);
	
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]=='a' || str[i]=='b' || str[i]=='c'||
	        str[i]=='d' || str[i]=='e'){
	        	str[i]=str[i]-32;
			}
	}
	printf("Vowel after converting into upper case => \n");
	puts(str);	
      
	   return 0;
}
	
