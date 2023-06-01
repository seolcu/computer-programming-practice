#include <stdio.h>

enum boolean
{
    false,
    true,
};

int equality(int a, int b)
{
    if (a == b)
        return true;
    else
        return false;
}

int main()
{
    printf("%d\n", equality(1, 1));
    return 0;
}