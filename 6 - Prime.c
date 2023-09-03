#include <stdio.h>

int checkPrime(int number);

int main(void)
{
    int number, isValid = 0, isPrime = 0;

    printf("********** Prime Number Program ***********\n\n");

    do
    {
        printf("Enter a positive integer: ");
        fflush(stdin);
        isValid = scanf("%d", &number);
    }
    while (number <= 0 || !isValid);  // Validate the input

    isPrime = checkPrime(number);  // Check if the number is prime

    if(isPrime || number == 1)
    {
        printf("%d is a prime number.", number);
    }
    else
    {
        printf("%d is not a prime number.", number);
    }
}

int checkPrime(int number)
{
    for(int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;  // Return 0(false) if the number is divisible by any number other than 1 and itself
        }
    }

    return 1;  // Return 1(true) if the number is not divisible by any number other than 1 and itself
}