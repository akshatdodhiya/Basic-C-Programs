#include <stdio.h>

void generateTable(float multiplier, int limit);

int main(void)
{
    float multiplier;
    int limit, isValid = 0;

    printf("********** Multiplication Table Program ***********\n\n");

    // Get two inputs altogether
    do
    {
        printf("Enter the number, limit: ");
        fflush(stdin);
        isValid = scanf("%f, %d", &multiplier, &limit);
    }
    while(!isValid);

    generateTable(multiplier, limit);

    fflush(stdin);
    getchar();
    return 0;
}

void generateTable(float multiplier, int limit)
{
    printf("\nMultiplication table for %g\n", multiplier);

    // Print table in mathematical format
    for(int i=1; i<=limit; i++)
    {
        printf("%g x %i = %g\n", multiplier, i, (multiplier*(float)i));
    }
}

/*
 * Learning: %g format specifier is used to remove all the trailing zeroes from float or double data types
 */
