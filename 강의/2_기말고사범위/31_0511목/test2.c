#include <stdio.h>

#define size 5

int main()
{
    int a[size] = {12, 4, 16, 18, 22};
    int *p;
    p = &a[size - 1];

    // 1
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(p - i));
    }

    // 2
    for (int j = size; j > 0; j--)
    {
        printf("%d\n", *(p + j - size));
    }

    return 0;
}