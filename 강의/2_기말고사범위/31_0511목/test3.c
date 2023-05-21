#include <stdio.h>

int countString(char *string)
{
    int i = 0;
    while (string[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char stringA[] = "Hello";
    printf("%d\n", countString(stringA));
}