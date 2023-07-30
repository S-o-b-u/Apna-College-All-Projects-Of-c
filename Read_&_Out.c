#include<stdio.h>
//Write a program to read a string from a file & output to the user.

int main()
{
	FILE *fptr;
	//open
	char ch;
	fptr = fopen("My_Project.txt", "r");
	if(fptr == NULL){
		printf("File Does Not Exist :(");
	}else{
           ch = fgetc(fptr);
           while(ch != EOF) 
		   {
           printf("%c", ch);
           ch = fgetc(fptr);
           }
       	}
	  printf("\n");
      fclose(fptr);
	return 0;
}