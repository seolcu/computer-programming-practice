#include <stdio.h>

int main()
{
    // 문제: while loop를 활용해 1부터 1000000까지 출력하라

    int a = 1;
    while (a <= 1000000)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}