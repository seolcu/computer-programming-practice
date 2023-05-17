#include <stdio.h>

void strCat(char *destination, char *more)
{
    int i = 0;
    while (destination[i])
    {
        i++;
    }

    int j = 0;
    while (more[j])
    {
        destination[i + j] = more[j];
        j++;
    }
}

int main()
{
    char d[100] = "Hello";
    strCat(d, " and more");
    printf("%s\n", d);
    return 0;
}