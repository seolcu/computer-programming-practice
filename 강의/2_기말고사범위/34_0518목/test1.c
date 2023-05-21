#include <stdio.h>

int sizeOfString1(char *string)
{
    int count = 0;
    while (string[count])
    {
        count++;
    }
    return count;
}

int sizeOfString2(char *string)
{
    int count;
    for (count = 0; string[count]; count++)
        ;
    return count;
}

int main()
{
    char str[] = "Hello";
    printf("%d %d\n", sizeOfString1(str), sizeOfString2(str));
    return 0;
}