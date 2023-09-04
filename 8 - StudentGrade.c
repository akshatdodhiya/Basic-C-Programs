#include <stdio.h>

float getMarks(int subNumber);
int getGradingScheme();
float getAvgMarks();
char getLetterGrade(float average);

int main(void)
{
    int gradingChoice;
    float average;

    printf("********** Student Grades Program ***********\n\n");

    gradingChoice = getGradingScheme();

    average = getAvgMarks();  // Calculate overall percentage

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
            printf("The letter grade of the student is: ");
            char letterGrade[2] = getLetterGrade(average);
            for(int i=0; i<2; i++)
            {
                printf("%c", letterGrade[i]);
            }

            break;
    }


    fflush(stdin);
    getchar();
    return 0;
}

float getMarks(int subNumber)
{
    float marks;
    int isValid;

    do
    {
        printf("Enter the marks (out of 100) for subject %d: ", subNumber);
        fflush(stdin);
        isValid = scanf("%f", &marks);
    }
    while(!isValid && marks >= 0 && marks <= 100);

    return marks;
}

int getGradingScheme()
{
    int isValid, gradingChoice;

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
        isValid = scanf("%d", &gradingChoice);
    }
    while(!isValid || gradingChoice > 4 || gradingChoice < 1);

    return gradingChoice;
}

float getAvgMarks()
{
    int isValid, subCount;
    float sum = 0.0f;

    // Get total number of subjects
    do
    {
        printf("Enter the number of subjects: ");
        fflush(stdin);
        isValid = scanf("%d", &subCount);
    }
    while(!isValid || subCount < 0);

    for (int i = 1; i <= subCount; i++)
    {
        sum += getMarks(i);  // Add marks of each subjects
    }

    return (sum/subCount);
}

// TODO: Fix this function
char getLetterGrade(float average)
{
    char letter[2];

    average = (int) average;  // Convert to int for comparison

    if(average >= 80 && average <=100)
    {
        letter[0] = 'A';
        letter[1] = '+';
    }

    else if(average >= 70 && average <= 79)
    {
        letter[0] = 'A';
        letter[1] = ' ';
    }
    else if(average >= 65 && average <= 69)
    {
        letter[0] = 'B';
        letter[1] = '+';
    }
    else if(average >= 60 && average <= 64)
    {
        letter[0] = 'B';
        letter[1] = ' ';
    }
    else if(average >= 55 && average <= 59)
    {
        letter[0] = 'C';
        letter[1] = '+';
    }
    else if(average >= 50 && average <= 54)
    {
        letter[0] = 'C';
        letter[1] = ' ';
    }
    else if(average >= 45 && average <= 49)
    {
        letter[0] = 'D';
        letter[1] = ' ';
    }
    else if(average >= 40 && average <= 44)
    {
        letter[0] = 'E';
        letter[1] = ' ';
    }
    else if(average < 40)
    {
        letter[0] = 'F';
        letter[1] = ' ';
    }

    return (char) letter;
}