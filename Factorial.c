/*
Created by Akshat on 8/25/2023.
*/

#include <stdio.h>

int main()
{
    int num, factorial = 1;
    int isValid = 0;  // Variable that checks validity of user's input

    printf("********** Factorial Number Program ***********\n\n");

    do {
        printf("Enter the number --> ");
        fflush(stdin);
        isValid = scanf("%d", &num);  // scanf() returns 1 (true) if the desired value is entered by the user, and 0(false) if input received is undesired
    } while(!isValid);

    // Find factorial and store in variable
    for(int i=2; i<=num; i++)
    {
        factorial = factorial * i;
    }

    printf("The factorial of %d is %d", num, factorial);

    fflush(stdin);  // Clears the output buffer
    getchar();  // To prevent window from abruptly closing without the user being able to see the output
    return 0;
}