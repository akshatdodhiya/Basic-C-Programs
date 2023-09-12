#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countWords(char *str);

int main(void)
{
    char str[100000];  // Declare a character array that can handle maximum 100000 characters
    int valid;

    printf("********** Words Counter Program ***********\n\n");

    do
    {
        printf("Enter the string: ");
        fflush(stdin);
        valid = scanf("%[^\n]", str);
    }
    while (!valid);

    printf("The number of words present in the string is: %d\n", countWords(str));

    system("pause");
    return 0;
}

int countWords(char *str)
{
    int cnt = 0;

    for(int i=0; i<(int)strlen(str);i++)
    {
        if(str[i] == ' ' || str[i] == '\n')  // Add the counter for word if it is followed by <space> or <new-line> (last word)
            cnt++;
    }

    return cnt;
}
