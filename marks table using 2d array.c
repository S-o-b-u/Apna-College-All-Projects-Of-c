#include <stdio.h>
#include<string.h>

int main() {
    // Define the number of students and subjects
    int numStudents = 6;
    int numSubjects = 8;

    // Declare a 2D array to store student names and marks
    char studentNames[numStudents][30];
    int marks[numStudents][numSubjects];

    // Initialize student names
    strcpy(studentNames[0], "Student 1");
    strcpy(studentNames[1], "Student 2");
    strcpy(studentNames[2], "Student 3");
    strcpy(studentNames[3], "Student 4");
    strcpy(studentNames[4], "Student 5");
    strcpy(studentNames[5], "Student 6");

    // Initialize subject names
    char subjectNames[numSubjects][30];
    strcpy(subjectNames[0], "Subject 1");
    strcpy(subjectNames[1], "Subject 2");
    strcpy(subjectNames[2], "Subject 3");
    strcpy(subjectNames[3], "Subject 4");
    strcpy(subjectNames[4], "Subject 5");
    strcpy(subjectNames[5], "Subject 6");
    strcpy(subjectNames[6], "Subject 7");
    strcpy(subjectNames[7], "Subject 8");

    // Print the table headers
    printf("Student Names\t");
    for (int j = 0; j < numSubjects; j++) {
        printf("%s\t", subjectNames[j]);
    }
    printf("\n");

    // Input and print student marks
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", studentNames[i]);
        for (int j = 0; j < numSubjects; j++) {
            printf("Enter marks for %s: ", subjectNames[j]);
            scanf("%d", &marks[i][j]);
        }
    }
        printf("\n");
        
    // Print the table with student names and marks
    for (int i = 0; i < numStudents; i++) {
        printf("%s\t", studentNames[i]);
        for (int j = 0; j < numSubjects; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
