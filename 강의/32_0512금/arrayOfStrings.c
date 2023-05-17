#include <stdio.h>

void printNames(int count, char **nameArray)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", nameArray[i]);
    }
}

int main()
{
    char *arr[4] = {"chanam", "linus", "jjack8", "piku"};
    printNames(4, arr);
    return 0;
}