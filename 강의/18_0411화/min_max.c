#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int j, k, minimum, maximum;

    printf("Enter two int: ");
    scanf("%d %d", &j, &k);

    minimum = min(j, k);
    maximum = max(j, k);

    printf("minimum: %d\n", minimum);
    printf("maximum: %d\n", maximum);

    return 0;
}