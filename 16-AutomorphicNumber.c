#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isAutomorphic(int num);

int main(void)
{
    int num, valid;

    printf("********** Automorphic Number Program ***********\n\n");
    printf("An automorphic number is a number whose square ends with the number itself.\n");
    system("pause");
    system("cls");

    do
    {
        printf("Enter a number: ");
        valid = scanf("%d", &num);
    }
    while (!valid);

    printf("%d is %san automorphic number.\n", num, isAutomorphic(num)?"":"not ");

    system("pause");
    return 0;
}

int isAutomorphic(int num)
{
    int square, rem, cnt = 0, temp = num;

    while (temp > 0)
    {
        temp /= 10;
        cnt++;
    }

    square = (int) pow(num, 2);
    rem = square % (int) pow(10, cnt);

    return (num == rem? 1 : 0);
}