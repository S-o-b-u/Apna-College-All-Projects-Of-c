#include <stdio.h>
#include <stdlib.h>
#include<string.h>

///*  Write a program to print the highest frequency
//character in a string.  */
                     
int  main()
{
	char str[200];
	int i, j;
	int count=0;
	int maxcount =0;
	char maxrepeatedchar;
	
	printf("Enter Your String Here => ");
	fgets(str, 200, stdin);
	
	for(i=0; i<strlen(str); i++){
		count = 0;
		for(j=0; j<strlen(str); j++){
			if(str[i]==str[j]){
				count++;
			}
		}
		if(maxcount<count){
			maxcount = count;
			maxrepeatedchar=str[i];
		}
	}
	
	printf("In The Meantioned String The highest Frequency Character Is %c || & It's Frequency Is = %d\n", maxrepeatedchar, maxcount );
    printf("THANK YOU :)");
    printf("============");

	return 0;
}