#include <stdio.h>
//Write a program to check if given character is digit or not.
void main() 
{
	int n;
	printf("enter number or digit :\n");
	scanf("%d", &n);
	
	switch(n) {
		case 1 : printf("yes this is a digit");
		   break;
			case 2 : printf("yes this is a digit");
			   break;
			   	case 3 : printf("yes this is a digit");
			   	   break;
					case 4 : printf("yes this is a digit");
					   break;
						case 5 : printf("yes this is a digit");
						   break;
							case 6 : printf("yes this is a digit");
							   break;
								case 7 : printf("yes this is a digit");
								   break;
									case 8 : printf("yes this is a digit");
									   break;
										case 9 : printf("yes this is a digit");
										   break;
										
	}
	
}

//alternative way 1;
#include <stdio.h>
#include <ctype.h>
//Write a program to check if given character is digit or not.
int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch);

  // Check if the character is a digit using the `isdigit()` function.
  if (isdigit(ch)) {
    printf("The character %c is a digit.\n", ch);
  } else {
    printf("The character %c is not a digit.\n", ch);
  }

  return 0;
}

//alternative way 2;
#include <stdio.h>
//Write a program to check if given character is digit or not.
int main() {
  char ch;

  printf("Enter a character: ");
  scanf("%c", &ch); //u can enter only on character;

 if(ch>0 || ch<=9) 
 {
   printf("yes %c is a digit :)", ch);
 } 
  else {
 	printf("that's not a digit :(");
 }

  return 0;
}
