#include <stdio.h>  
int main()  
{  
    // declare a variable  
    int asciTable;  
    printf (" The complete ASCII table of the characters in the C ");  
    for (asciTable = 0; asciTable < 255; asciTable++)  
    {  
        printf (" \n The value of '%c' character is: %d\n", asciTable, asciTable);  
          
    }  
    return 0;  
}  