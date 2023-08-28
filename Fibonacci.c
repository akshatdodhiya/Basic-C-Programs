#include <stdio.h>

int fibonacci(int n);  // Function prototype

int main(void)
{
    int position, isValid;

    printf("********** Fibonacci Series Program ***********\n\n");

    //Get desired input
    do
    {
        printf("Enter the position: ");
        fflush(stdin);
        isValid = scanf("%d", &position);
    }
    while(!isValid);

    printf("The corresponding number to the position %d in fibonacci series is: %d", position, fibonacci(position));

    fflush(stdin);
    getchar();
    return 0;
}

// Recursive function to find the Nth positioned number is fibonacci series
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-2) + fibonacci(n-1);
}
