#include <stdio.h>

int main()
{
    // 피연산자 개수 정하기
    int operandsQuantity;
    printf("How many operands?: ");
    scanf("%d", &operandsQuantity);

    // 연산자 정하기
    char operator;
    printf("Enter an operator(+, -, *, /): ");
    scanf(" %c", &operator);

    // 첫 수 받기
    float result;
    printf("Enter a number 1: ");
    scanf("%f", &result);

    for (int i = 1; i < operandsQuantity; i++)
    {
        float tmp;
        printf("Enter a number %d: ", i + 1);
        scanf("%f", &tmp);
        switch (operator)
        {
        case '+':
            result += tmp;
            break;
        case '-':
            result -= tmp;
            break;
        case '*':
            result *= tmp;
            break;
        case '/':
            if (tmp != 0)
            {
                result /= tmp;
            }
            else
            {
                // 0으로 나눈 경우 에러
                printf("Error! Cant divide with 0!\n");
            }
            break;
        default:
            // 잘못된 연산자 에러
            printf("Error! Invalid operator!\n");
        }
    }

    printf("The result is: %f\n", result);
    return 0;
}