#include <stdio.h>

int main()
{
    // 문제: 1부터 n까지의 합이 n(n+1)/2라는 것을 증명하라

    // n 정하기
    int n;
    printf("Choose any value of n(int):");
    scanf("%d", &n);

    // 공식으로 구한 값
    int sigma = n * (n + 1) * 0.5;

    // 반복문 변수 정하기
    int count = 1;
    int sum = 0;
    while (count <= n)
    {
        sum += count;
        count++;
    }

    if (sum == sigma)
    {
        printf("It is true\nThe sum(== sigma) is: %d\n", sum);
    }
    else
    {
        printf("It is false\nsum: %d != sigma: %d\n", sum, sigma);
    }

    return 0;
}