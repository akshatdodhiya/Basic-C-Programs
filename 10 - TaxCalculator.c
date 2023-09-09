// Calculate tax for a given amount and remove inclusive tax from a given amount

#include <stdio.h>
#include <stdlib.h>

void calInclusiveTax();
void calExclusiveTax();
int getInputs();

float amount, tax, taxRate, finalAmount;  // Global variables

int main(void)
{
    int choice;

    printf("********** Tax Calculator Program ***********\n\n");

    choice = getInputs();  // Get inputs from the user and return the choice for inclusive or exclusive amount

    if(choice)
        calInclusiveTax();
    else
        calExclusiveTax();

    system("pause");  // Pauses the execution of the program until receives the input from user
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
    while (!valid);  // Ask to re-enter until correct

    do
    {
        printf("The amount is\n");
        printf("1. Inclusive of tax\n");
        printf("2. Exclusive of tax\n");
        printf("--> ");
        fflush(stdin);
        valid = scanf("%d", &choice);
    }
    while (!valid || choice > 2 || choice < 1);  // Ask to re-enter until valid input is received

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
    finalAmount = (amount / (100 + taxRate)) * 100;  // Get amount before tax
    tax = amount - finalAmount;  // Get the inclusive tax from amount

    printf("The %.2f%% tax on amount %.3f is: %.2f\n", taxRate, amount, tax);
    printf("The amount before tax is: %.3f\n\n", finalAmount);
}

void calExclusiveTax()
{
    tax = amount * (taxRate / 100);  // Get tax on amount
    finalAmount = amount + tax;  // Get final amount after taxes

    printf("The %.2f%% tax on amount %.3f is: %.2f\n", taxRate, amount, tax);
    printf("The amount after tax is: %.3f\n\n", finalAmount);
}