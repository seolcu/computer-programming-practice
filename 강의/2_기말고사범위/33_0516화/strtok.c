#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abc-cba-bac";
    char delim[] = "-";
    char *token = strtok(str, delim);

    while (token)
    {
        printf("%s\n", token);

        token = strtok(NULL, delim);
    }

    return 0;
}