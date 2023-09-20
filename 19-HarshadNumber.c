#include <stdio.h>
#include <stdlib.h>

int isHarshad(int n);

int main(void)
{
    int num, valid;

    printf("********** Harshad Number Program ***********\n\n");
    printf("A harshad number is a number which is divisible by the sum of its digits.\n");
    system("pause");
    system("cls");

    do
    {
        printf("Enter a number: ");
        fflush(stdin);
        valid = scanf("%d", &num);
    }
    while (!valid || num < 0);

    printf("%d is %sa Harshad number.\n", num, isHarshad(num) ? "" : "not ");

    system("pause");
    system("exit");
    return 0;
}

int isHarshad(int n)
{
    int sum = 0, temp = n;

    while (temp > 0)
    {
        sum += (temp % 10);  // Extract digits and add to sum
        temp /= 10;
    }

    return (n % sum == 0? 1: 0);  // Return 1 if Harshad, else 0
}