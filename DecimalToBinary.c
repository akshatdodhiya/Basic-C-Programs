#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main()
{
    int decimal, valid;

    printf("********** Decimal to Binary Converter Program ***********\n\n");


    do
    {
        printf("Enter a decimal number: ");
        valid = scanf("%d", &decimal);
    }
    while (!valid);

    printf("Binary equivalent: %lld", convertDecimalToBinary(decimal));

    system("pause");
    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int i = 0;

    while (n != 0)
    {
        binaryNumber += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }
    return binaryNumber;
}