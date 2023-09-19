#include <stdio.h>
#include <stdlib.h>

int isDuck(int n);

int main(void)
{
    int valid, num;

    printf("********** Duck Number Program ***********\n\n");
    printf("Duck number is a number which contains 0 and the number itself is not 0.\n");
    system("pause");
    system("cls");
    do
    {
        printf("Enter a number: ");
        fflush(stdin);
        valid = scanf("%d", &num);
    } while (!valid);

    printf("%d is %sa duck number.\n", num, isDuck(num)? "" : "not ");

    fflush(stdin);
    system("pause");
    return 0;
}

int isDuck(int n)
{
    int digit, zeroPresent = 0;

    while (n > 0)
    {
        digit = n % 10;
        if (digit == 0)
        {
            zeroPresent = 1;
            break;
        }
        n /= 10;
    }

    return (zeroPresent == 1? 1 : 0);
}