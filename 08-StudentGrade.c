#include <stdio.h>

float getMarks(int subNumber);
int getGradingScheme();
float getAvgMarks();
const char * getLetterGrade(float average);

int main(void)
{
    int gradingChoice;
    float average;

    printf("********** Student Grades Program ***********\n\n");

    gradingChoice = getGradingScheme();  // Get user's choice of grading scheme

    average = getAvgMarks();  // Get overall percentage

    switch(gradingChoice)
    {
        case 1:
            printf("The overall CGPA of the student is: %.1f\n", average/10);
            break;

        case 2:
            printf("The overall GPA of the student is: %.1f\n", (average/100)*4);
            break;

        case 3:
            printf("The overall percentage of the student is: %.2f\n", average);
            break;

        case 4:
            printf("The letter grade of the student is: %s", getLetterGrade(average));
            break;
    }


    fflush(stdin);
    getchar();
    return 0;
}

int getGradingScheme()
{
    int valid, gradingChoice;

    // Get the type of grading scheme
    do
    {
        printf("<-- Choices -->\n");
        printf("1. CGPA - Cumulative Grade Point Average\n");
        printf("2. GPA - Grade Point Average\n");
        printf("3. Percentage\n");
        printf("4. Letter Grading\n");

        printf("Enter your choice: ");
        fflush(stdin);
        valid = scanf("%d", &gradingChoice);
    }
    while(!valid || gradingChoice > 4 || gradingChoice < 1);

    return gradingChoice;
}

float getMarks(int subNumber)
{
    float marks;
    int valid;

    do
    {
        printf("Enter the marks (out of 100) for subject %d: ", subNumber);
        fflush(stdin);
        valid = scanf("%f", &marks);
    }
    while(!valid && marks >= 0 && marks <= 100);

    return marks;
}

float getAvgMarks()
{
    int valid, totalSubjects;
    float sum = 0.0f;

    // Get total number of subjects
    do
    {
        printf("Enter the number of subjects: ");
        fflush(stdin);
        valid = scanf("%d", &totalSubjects);
    }
    while(!valid || totalSubjects < 0);

    for (int i = 1; i <= totalSubjects; i++)
    {
        sum += getMarks(i);  // Add marks of each subjects
    }

    return (sum / totalSubjects);  // Return average
}

const char * getLetterGrade(float average)
{
    average = (int) average;  // Convert to int for comparison

    if(average >= 80 && average <=100)
        return "A+";

    else if(average >= 70 && average <= 79)
        return "A";

    else if(average >= 65 && average <= 69)
        return "B+";

    else if(average >= 60 && average <= 64)
        return "B";

    else if(average >= 55 && average <= 59)
        return "C+";

    else if(average >= 50 && average <= 54)
        return "C";

    else if(average >= 45 && average <= 49)
        return "D";

    else if(average >= 40 && average <= 44)
        return "E";

    else
        return "F";
}