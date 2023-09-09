// Calculate tax for a given amount and remove inclusive tax from a given amount

#include <stdio.h>
#include <stdlib.h>

void calInclusiveTax();
void calExclusiveTax();
int getInputs();

float amount, tax, taxRate, finalAmount;

int main(void)
{
    int choice;

    printf("********** Tax Calculator Program ***********\n\n");

    choice = getInputs();

    if(choice)
        calInclusiveTax();
    else
        calExclusiveTax();

    system("pause");
    return 0;
}

int getInputs()
{
    int choice, valid;

    do
    {
        printf("Enter the amount: ");
        fflush(stdin);
        valid = scanf("%f", &amount);
    }
    while (!valid);

    do
    {
        printf("The amount is\n");
        printf("1. Inclusive of tax\n");
        printf("2. Exclusive of tax\n");
        printf("--> ");
        fflush(stdin);
        valid = scanf("%d", &choice);
    }
    while (!valid || choice > 2 || choice < 1);

    do
    {
        printf("Enter the tax rate: ");
        fflush(stdin);
        valid = scanf("%f", &taxRate);
    }
    while (!valid);

    return choice;
}

void calInclusiveTax()
{
    finalAmount = (amount / (100 + taxRate)) * 100;
    tax = amount - finalAmount;

    printf("The %.2f%% tax on amount %.3f is: %.2f\n", taxRate, amount, tax);
    printf("The amount before tax is: %.3f\n\n", finalAmount);
}

void calExclusiveTax()
{
    tax = amount * (taxRate / 100);
    finalAmount = amount + tax;

    printf("The %.2f%% tax on amount %.3f is: %.2f\n", taxRate, amount, tax);
    printf("The amount after tax is: %.3f\n\n", finalAmount);
}