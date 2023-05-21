#include <stdio.h>
#include "calc.h"

int main()
{
    int a, b, result;
    char op;

    printf("Enter two int: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = addition(a, b);
        break;
    case '-':
        result = subtraction(a, b);
        break;
    case '*':
        result = multiplication(a, b);
        break;
    case '/':
        result = division(a, b);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    printf("The result is: %d\n", result);
    return 0;
}