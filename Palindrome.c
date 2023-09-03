#include <stdio.h>

int getPalindrome(int number);

int main(void)
{
    int rangeStart, rangeEnd, isValid = 0;

    printf("********** Palindrome Range Program ***********\n\n");

    do
    {
        printf("Enter the start of the range: ");
        fflush(stdin);
        isValid = scanf("%d", &rangeStart);
    }
    while (rangeStart <= 0 || !isValid);  // Validate the input

    do
    {
        printf("Enter the end of the range: ");
        fflush(stdin);
        isValid = scanf("%d", &rangeEnd);
    }
    while (rangeEnd <= rangeStart || !isValid);  // Validate the input

    printf("\nPalindrome numbers between %d and %d are:\n", rangeStart, rangeEnd);

    for(int i=rangeStart, cnt = 0; i<=rangeEnd; i++)
    {
        if(getPalindrome(i))
        {
            if (cnt++ > 0)  // Format the output
            {
                printf(", ");
            }
            printf("%d", i);
        }
    }

    fflush(stdin);
    getchar();
    return 0;
}

int getPalindrome(int number)
{
    int temp = number, reverse = 0;

    while(temp != 0)
    {
        reverse = reverse * 10 + temp % 10;  // Reverse the number digit by digit
        temp /= 10;
    }

    return reverse == number ? 1 : 0; // Ternary operator to return 1(true) or 0(false)
}