// 설규원 202322071
#include <stdio.h>

int countString(char *string)
{
    int count = 0;
    while (*string++)
    {
        count++;
    }
    return count;
}

int main()
{
    char stringA[] = "Hello";
    printf("%d\n", countString(stringA));
}