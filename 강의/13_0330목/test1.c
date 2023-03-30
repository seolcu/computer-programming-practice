// 설규원 202322071
#include <stdio.h>

int main()
{
    int inputNum, result;

    printf("Enter an int to reverse: ");
    scanf("%d", &inputNum);

    result = inputNum % 10;

    while (inputNum >= 10)
    {
        inputNum /= 10;
        result = result * 10 + (inputNum % 10);
    }

    printf("%d\n", result);

    return 0;
}
