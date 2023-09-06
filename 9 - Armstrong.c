#include <stdio.h>
#include <math.h>

int getNumber(void);
int getResult(int number);

int main(void)
{
    int number, result;

    number = getNumber();
    result = getResult(number);

    printf("%d is %s Armstrong number.\n", number, number == result ? "an" : "not an");

    fflush(stdin);
    getchar();
    return 0;
}

int getNumber(void)
{
    int number, valid;
    do
    {
        printf("Enter a number: ");
        fflush(stdin);
        valid = scanf("%d", &number);
    } while (!valid);

    return number;
}

int getResult(int number)
{
    int result = 0;
    while (number > 0)
    {
        result += pow(number % 10, 3);
        number /= 10;
    }

    return result;
}