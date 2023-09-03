#include <stdio.h>

void celsiusToFahrenheit();
void fahrenheitToCelsius();

int main()
{
    char choice;

    printf("********** Temperature Converter Program ***********\n\n");

    do
    {
        printf("Choose any one option\n");
        printf("--> a. Celsius to Fahrenheit\n");
        printf("--> b. Fahrenheit to Celsius\n");
        fflush(stdin);
        scanf("%c", &choice);

        switch (choice)
        {
            case 'a':
                celsiusToFahrenheit();  // Call function to proceed with conversion and display output
                break;

            case 'b':
                fahrenheitToCelsius();
                break;

            default:
                printf("Please enter a valid choice (a or b)\n\n");
                break;
        }
    }
    while(choice != 'a' && choice != 'b');

    fflush(stdin);
    getchar();  // Hold screen for user to see output
    return 0;
}

void celsiusToFahrenheit()
{
    float celsius, fahrenheit;
    int isValid;

    do
    {
        printf("Enter the value of Celsius: ");
        fflush(stdin);
        isValid = scanf("%f", &celsius);
    }
    while(!isValid);

    fahrenheit = (celsius * 9.0/5.0) + 32.0;  // Formula - Celsius to Fahrenheit

    printf("The value of Fahrenheit for %.3f degrees Celsius is: %.3f", celsius, fahrenheit);
}

void fahrenheitToCelsius()
{
    float celsius, fahrenheit;
    int isValid;

    do
    {
        printf("Enter the value of Fahrenheit: ");
        fflush(stdin);
        isValid = scanf("%f", &fahrenheit);
    }
    while(!isValid);
    celsius = (fahrenheit - 32.0) * 5.0/9.0;  // Formula - Fahrenheit to Celsius

    printf("The value of Celsius for %.3f degrees Fahrenheit is: %.3f", fahrenheit, celsius);
}

/*
--> Learning: If input a string of characters then C language only considers the first character and proceeds.
--> For example: when asked for choice, and user enters "abc" (without quotes) it considers the first character ('a') and executes the rest of the program.
--> The same works for integers as well, it considers only '123' from the input of '123.456'
*/