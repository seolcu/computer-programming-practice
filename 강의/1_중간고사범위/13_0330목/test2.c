#include <stdio.h>
#include <math.h>

int main()
{
    int quantity;
    double SD, mean, sum = 0.0, sumOfSquare = 0.0;
    printf("How many numbers to compute?: ");
    scanf("%d", &quantity);

    for (int i = 0; i < quantity; i++)
    {
        double inputNum;
        printf("Enter the number %d:", i + 1);
        scanf("%lf", &inputNum);
        sum += inputNum;
        sumOfSquare += inputNum * inputNum;
    }

    mean = sum / quantity;
    SD = sqrt(sumOfSquare / quantity - mean * mean);

    printf("The standart deviation is: %lf\n", SD);

    return 0;
}