#include <stdio.h>

float getMarks(int subNumber);

int main(void)
{
    int subCount, isValid;
    float average, sum = 0.0f;

    printf("********** Student Grades Program ***********\n\n");


    // Get total number of subjects
    do
    {
        printf("Enter the number of subjects: ");
        fflush(stdin);
        isValid = scanf("%d", &subCount);
    }
    while(!isValid);

    for (int i = 1; i <= subCount; i++)
    {
        sum += getMarks(i);  // Add marks of each subjects
    }

    average = sum / subCount;  // Get overall percentage

    printf("The overall CGPA of the student is: %.1f\n", average/10);

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
        printf("Enter the marks for subject %d: ", subNumber);
        fflush(stdin);
        isValid = scanf("%f", &marks);
    }
    while(!isValid);

    return marks;
}