#include<stdio.h>
#include<string.h>
/* Format the information of 5 students (name,
marks, cgpa, course) in a table like structure in a file. */
                                                        
                                                         
int main()
{
	char name[50], course[50];
	int marks, n;
	float cgpa;
	
	printf("Enter Total Stduent Number => ");
	scanf("%d", &n);
	printf("==========================\n\n");	
	FILE *fptr;
	fptr=fopen("My_Project.txt", "a");
	
	if(fptr==NULL)
	{
		printf("ERROR!!");
	}
	
	for(int i=0; i<n; i++)
	{
		printf("For Student %d", i+1);
		printf("\nEnter Student Name => ");
		fflush(stdin);
	    gets(name);
	    
		printf("\nEnter Course => ");
		fflush(stdin);
		gets(course);
		
		printf("\nEnter Marks => ");
		scanf("%d", &marks);
		printf("\nEnter CGPA => ");	
		scanf("%f", &cgpa);
		
		fprintf(fptr, "Student Number : %d", i+1);
		fprintf(fptr, "\nName => %s \nCourse => %s \nMarks => %d \nCGPA => %f\n\n", name, course, marks, cgpa);
		fprintf(fptr, "-------------------------\n\n");
	}
	
	fclose(fptr);
}                             