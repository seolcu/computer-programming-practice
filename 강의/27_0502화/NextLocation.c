#include <stdio.h>

int *NextLocation(int *i)
{
    return i++;
}

int main()
{
    int a;
    printf("%d %d", &a, NextLocation(&a));
    return 0;
}