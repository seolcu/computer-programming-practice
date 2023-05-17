#include <stdio.h>

int stringLength(char *string)
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
    char str[100] = "Hello";
    printf("%d\n", stringLength(str));
    return 0;
}