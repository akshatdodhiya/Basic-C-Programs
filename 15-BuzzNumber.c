// A buzz number is a number that either ends with 7 or is divisible by 7.

#include <stdio.h>
#include <stdlib.h>

int isBuzz(int num);

int main(void)
{
    int num, valid;

    do
    {
        printf("Enter a number: ");
        valid = scanf("%d", &num);
    }
    while (!valid);

    if (isBuzz(num))
        printf("%d is a buzz number.\n", num);
    else
        printf("%d is not a buzz number.\n", num);

    system("pause");
    return 0;
}

int isBuzz(int num)
{
    int rem, divisible;

    rem = num % 10;
    divisible = num % 7;

    return rem == 7 || divisible == 0? 1 : 0;
}