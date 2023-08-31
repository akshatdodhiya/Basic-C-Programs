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
    printf("Multiplication table for %f\n\n", multiplier);

    // Print table in mathematical format
    for(int i=1; i<=limit; i++)
    {
        printf("%f x %i = %f\n", multiplier, i, (multiplier*(float)i));
    }
}
