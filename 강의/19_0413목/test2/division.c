// 설규원 202322071
#include <stdio.h>
#include "calc.h"

int division(int a, int b)
{
    if (b == 0)
    {
        printf("Cant divide with 0\n");
        return 0;
    }
    else
    {
        return a / b;
    }
}