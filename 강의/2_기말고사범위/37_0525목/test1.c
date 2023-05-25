#include <stdio.h>
#include <math.h>

typedef struct
{
    double real;
    double imag;
} complex;

complex addition(complex a, complex b)
{
    complex result = {a.real + b.real,
                      a.imag + b.imag};
    return result;
}

complex subtraction(complex a, complex b)
{
    complex result = {a.real - b.real,
                      a.imag - b.imag};
    return result;
}

complex multiplication(complex a, complex b)
{
    complex result = {a.real * b.real - a.imag * b.imag,
                      a.real * b.imag + a.imag * b.real};
    return result;
}

complex division(complex a, complex b)
{
    complex result = {(a.real * b.real + a.imag * b.imag) / (pow(b.real, 2) + pow(b.imag, 2)),
                      (a.imag * b.real - a.real * b.imag) / (pow(b.real, 2) + pow(b.imag, 2))};
    return result;
}

void display(complex com)
{
    if (com.imag < 0)
        printf("%lf%lfi\n", com.real, com.imag);
    else
        printf("%lf+%lfi\n", com.real, com.imag);
}

void copyStringRange(char *destination, char *target, int startIndex, int endIndex)
{
    int destinationIndex = 0;
    for (int i = startIndex; i < endIndex; i++)
    {
        destination[destinationIndex] = target[i];
        destinationIndex++;
    }
    destination[destinationIndex] = '\0';
}

int parseStringToInt(char *string)
{
    int result = 0;
    for (int i = 0; string[i]; i++)
    {
        result *= 10;
        // ASCII: char 0 == int 48, char 1 == int 49, ..., char 9 == int 57
        // thus, char - 48 => int number.
        result += (string[i] - 48);
    }
    return result;
}

double parseStringToDouble(char *string)
{
    // checking if the string contains dot(.)
    int lengthOfString = 0, isDot = 0, whereDot;
    for (int i = 0; string[i]; i++)
    {
        if (string[i] == '.')
            isDot = 1, whereDot = i;
        lengthOfString++;
    }

    double result = 0;
    if (isDot)
    {
        char intPartString[whereDot], decimalPartString[lengthOfString - whereDot - 1];
        copyStringRange(intPartString, string, 0, whereDot);
        copyStringRange(decimalPartString, string, whereDot + 1, lengthOfString);
        result = parseStringToInt(intPartString) + parseStringToInt(decimalPartString) * pow(0.1, lengthOfString - whereDot - 1);
    }
    else
    {
        result = parseStringToInt(string);
    }
    return result;
}

complex parseStringToComplex(char *string)
{
    int lengthOfString = 0, wherePlus;
    for (int i = 0; string[i]; i++)
    {
        if (string[i] == '+')
        {
            wherePlus = i;
        }
        lengthOfString++;
    }
    char realPartString[wherePlus], imagPartString[lengthOfString - wherePlus - 1];
    copyStringRange(realPartString, string, 0, wherePlus);
    copyStringRange(imagPartString, string, wherePlus + 1, lengthOfString - 1);
    complex result = {parseStringToDouble(realPartString), parseStringToDouble(imagPartString)};
    return result;
}

// Ex. argv == {"[output]", "4", "2+3i", "4+4i", "5+6i", "9+4i"}
int main(int argc, char **argv)
{
    int quantity = argc - 2;
    complex complexInputArray[quantity];
    for (int i = 0; i < quantity; i++)
    {
        complexInputArray[i] = parseStringToComplex(argv[i + 2]);
    }

    printf("Choose an operator(+, -, *, /): ");
    char operator;
    scanf(" %c", &operator);

    complex result = complexInputArray[0];
    for (int i = 1; i < quantity; i++)
    {
        switch (operator)
        {
        case '+':
            result = addition(result, complexInputArray[i]);
            break;
        case '-':
            result = subtraction(result, complexInputArray[i]);
            break;
        case '*':
            result = multiplication(result, complexInputArray[i]);
            break;
        case '/':
            result = division(result, complexInputArray[i]);
            break;
        default:
            printf("Error: invalid operator\n");
        }
    }

    printf("The result is ");
    display(result);

    return 0;
}