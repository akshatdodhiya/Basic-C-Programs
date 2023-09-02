#include <stdio.h>

int checkPrime(int number);

int main(void)
{
    int number, isValid = 0, isPrime = 0;

    do
    {
        printf("Enter a positive integer: ");
        fflush(stdin);
        isValid = scanf("%d", &number);
    }
    while (number <= 0 || !isValid);

    isPrime = checkPrime(number);

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
            return 0;
        }
    }

    return 1;
}