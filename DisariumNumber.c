#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isDisarium(int number);

int main(void)
{
    int num, valid;

    printf("********** Disarium Number Program ***********\n\n");
    printf("A disarium number is a number where the sum of its digits powered with their respective position is equal to the original number.\n");
    system("pause");
    system("cls");

    do
    {
        printf("Enter a number: ");
        fflush(stdin);
        valid = scanf("%d", &num);
    }
    while (!valid || num < 0);

    printf("%d is %sa disarium number.\n", num, isDisarium(num) ? "" : "not ");

    system("pause");
    system("exit");
    return 0;
}

int isDisarium(int number)
{
    int cnt, sum, temp;

    cnt = sum = 0;
    temp = number;

    while(temp > 0)
    {
        cnt++;  // Count the number of digits
        temp /= 10;
    }

    temp = number;

    while(temp > 0)
    {
        sum += pow(temp % 10, cnt--);  // Extract the digit and power it with its position
        temp /= 10;
    }

    return (sum == number? 1 : 0);  // Return 1 if sum is equal to the original number
}