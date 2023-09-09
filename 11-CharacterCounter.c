#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countCharacters(char *str);

int main()
{
    char str[1000];
    int valid;

    do
    {
        printf("Enter the string: ");
        fflush(stdin);
        valid = scanf("%s", &str);
    }
    while (!valid);


    printf("The number of characters present in string is: %d\n\n", countCharacters(str));

    system("pause");
    return 0;
}

int countCharacters(char *str)
{
    return (int)strlen(str);
}