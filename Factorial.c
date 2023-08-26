//
// Created by Akshat on 8/25/2023.
//

#include <stdio.h>

int main()
{
    int num, factorial = 1;
    int isValid = 0;

    printf("**********Factorial Program***********\n\n");

    do {
        printf("Enter the number --> ");
        fflush(stdin);
        isValid = scanf("%d", &num);
    } while(!isValid);

    for(int i=2; i<=num; i++)
    {
        factorial = factorial * i;
    }

    printf("The factorial of %d is %d", num, factorial);

    fflush(stdin);
    getchar();
    return 0;
}