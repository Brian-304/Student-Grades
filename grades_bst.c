/*
Brian Tabios
Professor Chowdhury
Week 2 Assignment: Print value and grades
Course: CS111
*/

#include <stdio.h> 

int main() 

{
    float percentage;
    char gradeF[20] = "Letter Grade: F";
    char gradeD[20] = "Letter Grade: D";
    char gradeC[20] = "Letter Grade: C";
    char gradeB[20] = "Letter Grade: B";
    char gradeA[20] = "Letter Grade: A";


    printf("Enter students percentage: ");
    scanf("%f", &percentage);


    if (percentage <= 60) 
    {
        printf("Percentage is: %.1lf", percentage);
        printf("\n");
        printf(gradeF);
    } 
    else if (percentage <= 70) 
    {
        printf("Percentage is: %.1lf", percentage);
        printf("\n");
        printf(gradeD);
    }
    else if (percentage <= 80)
    {
        printf("Percentage is: %.1lf", percentage);
        printf("\n");
        printf(gradeC);
    }
    else if (percentage <= 90)
    {
        printf("Percentage is: %.1lf", percentage);
        printf("\n");
        printf(gradeB);
    }
    else if (percentage <= 100)
    {
        printf("Percentage is: %.1lf", percentage);
        printf("\n");
        printf(gradeA);
        
        
    }
    


    // printf("Student grade is: %lf", f, d, c, b, a);

    return 0;

}