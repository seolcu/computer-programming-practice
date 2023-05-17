#include <stdio.h>

void stringCopy(char target[100], char source[100])
{
    int i = 0;
    while (source[i])
    {
        target[i] = source[i];
        i++;
    }
}

int main()
{
    char t[100], s[100] = "asdf";
    stringCopy(t, s);
    printf("%s\n", t);
    return 0;
}