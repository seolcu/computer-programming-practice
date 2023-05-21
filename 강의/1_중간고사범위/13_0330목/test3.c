#include <stdio.h>
#include <math.h>

int main()
{
    int inputNum;
    printf("Enter an int: ");
    scanf("%d", &inputNum);

    // Method 1
    printf("%d\n", inputNum * 1);

    // Method 2
    printf("%d\n", (inputNum + inputNum + inputNum + inputNum + inputNum) / 5);

    // Method 3
    int si;
    if (inputNum >= 0)
    {
        si = sqrt(inputNum * inputNum);
    }
    else
    {
        si = -1 * sqrt(inputNum * inputNum);
    }
    printf("%d\n", si);

    // Method 4
    double d = inputNum;
    int di = d;
    printf("%d\n", di);

    // Method 5
    char c = inputNum;
    printf("%d\n", c);

    return 0;
}
