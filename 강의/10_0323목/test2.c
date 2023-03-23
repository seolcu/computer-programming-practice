#include <stdio.h>

int main()
{
    // 피연산자 개수 정하기
    int operandsQuantity;
    printf("How many operands?: ");
    scanf("%d", &operandsQuantity);

    float operandsList[operandsQuantity];
    for (int i = 0; i < operandsQuantity; i++)
    {
        float inputOperand;
        printf("Enter num %d: ", i + 1);
        scanf("%f", &inputOperand);
        operandsList[i] = inputOperand;
    }

    char operator;
    printf("Enter an operator(+, -, *, /): ");
    scanf(" %c", &operator);

    float value = operandsList[0];
    for (int i = 1; i < operandsQuantity; i++)
    {
        switch (operator)
        {
        case '+':
            value += operandsList[i];
            break;
        case '-':
            value -= operandsList[i];
            break;
        case '*':
            value *= operandsList[i];
            break;
        case '/':
            if (operandsList[i] != 0)
            {
                value /= operandsList[i];
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

    printf("The value is: %f\n", value);
    return 0;
}