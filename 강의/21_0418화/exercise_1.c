#include <stdio.h>

void getSumAndAverage(int a, int b, int c, int *sum, double *average);

int main()
{
    int sum;
    double average;
    getSumAndAverage(1, 3, 5, &sum, &average);
    printf("%d %lf\n", sum, average);
    return 0;
}

void getSumAndAverage(int a, int b, int c, int *sum, double *average)
{
    *sum = a + b + c;
    *average = (a + b + c) / 3;
}
