#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isNeon(int n);

int main(void)
{
    int valid, num;

    printf("********** Neon Number Program ***********\n\n");
    printf("Neon number is a number whose sum of digits of square ends with the number itself.\n");
    system("pause");
    system("cls");
    do
    {
        printf("Enter a number: ");
        valid = scanf("%d", &num);
    } while (!valid);

    printf("%d is %sa neon number.\n", num, isNeon(num)? "" : "not ");

    fflush(stdin);
    system("pause");
    return 0;
}

int isNeon(int n)
{
    int sum = 0, square = n * n;

    while (square > 0)
    {
        sum += square % 10;
        square /= 10;
    }

    return (sum == n? 1 : 0);
}
