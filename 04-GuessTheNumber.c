#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber();

int main()
{
    int guess, recvNumber, cnt = 1;

    printf("********** Guess The Number Game ***********\n\n");


    recvNumber = generateRandomNumber();  // Receive the generated random number

    while(cnt<6)
    {
        guess = -1;

        printf("Chance %i --> Guess the number: ", cnt);
        fflush(stdin);
        scanf("%d", &guess);

        if(guess == recvNumber)
        {
            printf("Yay! You guessed it right! :)\n");
        }
        else if(guess < recvNumber)
        {
            printf("Too low! Please guess something higher.\n");
        }
        else
        {
            printf("Too high! Please guess something lower.\n");
        }
        cnt++;
    }

    if(cnt == 6)
    {
        printf("Unfortunately, you could not guess the number. :(\n");
        printf("The number was: %i\n", recvNumber);
    }
    return 0;
}

int generateRandomNumber()
{
    int number;

    srand(time(0));  // Set timer to zero to initialise the random generator
    number = rand() % 100;  // Generate a random number between 0 and 100

    return number;
}