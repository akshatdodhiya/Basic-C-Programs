#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isHappy(int number);
int getSumSquare(int n);

int main(void)
{
    int num, valid;

    printf("********** Happy Number Program ***********\n\n");
    printf("A happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit.\n");
    system("pause");
    system("cls");

    do
    {
        printf("Enter a number: ");
        fflush(stdin);
        valid = scanf("%d", &num);
    }
    while (!valid || num < 0);

    printf("%d is %sa happy number.\n", num, isHappy(num) ? "" : "not ");

    system("pause");
    system("exit");
    return 0;
}

int isHappy(int number)
{
    int temp = number;
    while (temp > 9)
    {
        temp = getSumSquare(temp);
    }

    return (temp == 1? 1: 0);
}

int getSumSquare(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += (int) pow(n%10, 2);  // Get the square of digit and add to sum
        n /= 10;
    }

    return sum;
}