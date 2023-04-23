#include <stdio.h>

void getSumAndAverage(int num1, int num2, int num3, int *sumValue, double *averageValue);

int main()
{
    int a, b, c, sum;
    double average;

    printf("Enter three ints: ");
    scanf("%d %d %d", &a, &b, &c);

    getSumAndAverage(a, b, c, &sum, &average);
    printf("sum: %d\naverage: %lf\n", sum, average);

    return 0;
}

void getSumAndAverage(int num1, int num2, int num3, int *sumValue, double *averageValue)
{
    *sumValue = num1 + num2 + num3;
    *averageValue = *sumValue / 3;
}
