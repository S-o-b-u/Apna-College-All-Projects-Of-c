#include<stdio.h>
/*
  Make a system that can store information of all
students, teachers & staff of your college in the form
of structures.
              */
 struct student{
	 int roll;
	 char name[50];
	 float marks;
};
struct teacher{
	 char name[50];
	 char experience[50];
	 char subject[50]
};
struct staff{
	 char name[50];
	 char work[50];
};

int main()
{
	int i;
	struct student s[5];
	struct teacher t[5];
	struct staff st[5];
	
	
	for(i=0; i<5; i++){
	
		s[i].roll = i+1;
		printf("\nFor Roll Number = %d\n", s[i].roll);	
		printf("Enter Student's Name = ");
		scanf("%s", &s[i].name);
		printf("Enter Marks = ");
		scanf("%f", &s[i].marks);
	}
	 
    printf("\n\nENTER YOUR TEACHER's INFORMATION => \n");		
	for(i=0; i<5; i++){
	
		printf("\nEnter Teacher's Name = ");
		scanf("%s", &t[i].name);
		printf("Enter Teacher's Subject = ");
		scanf("%s", &t[i].subject);
		printf("Enter His Or Her Experience = ");
		scanf("%s", &t[i].experience);
		
	}
	
    printf("\n\nENTER STAFF's INFORMATION => \n");
   	for(i=0; i<5; i++){
    		
		printf("\nEnter Staff's Name = ");
		scanf("%s", &st[i].name);
		printf("Enter Work = ");
		scanf("%s", &st[i].work);
	
		
	}
	
	printf("==========INFORMATION==========\n\n");
	
	printf("\nDISPLAYING STUDENT's INFORMATION => \n");
	 for (i = 0; i < 5; i++) {
	   	printf("\nRoll Number = %d\n", i+1);	
        printf("First name: %s\n", s[i].name);
        printf("Marks: %f", s[i].marks);
        printf("\n");
    }
    	printf("\nDISPLAYING TEACHER's INFORMATION => \n");
	 for (i = 0; i < 5; i++) {
       printf("\nTeacher's Name = %s\n", t[i].name);
       printf("Teacher's Subject = %s\n", t[i].subject);
       printf("His Or Her Experience = %s\n", t[i].experience);
       printf("\n");
    }
	
	printf("\nDISPLAYING STAFF's INFORMATION => \n");
	 for (i = 0; i < 5; i++) {
       printf("\nStaff's Name = %s\n", st[i].name);
       printf("Work = %s\n", st[i].work);
       
       printf("\n");
    }
	return 0;
} 

