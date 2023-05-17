#include <stdio.h>

void tok(char *s, char delimeter)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == delimeter)
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

int main()
{
    char str[] = "abc-cba-bac";
    tok(str, '-');
    return 0;
}