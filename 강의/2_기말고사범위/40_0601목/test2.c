#include <stdio.h>
#include <math.h>

typedef struct
{
    double real;
    double imag;
} complex;

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
    int sign = 1;
    int result = 0;
    for (int i = 0; string[i]; i++)
    {
        if (string[i] == '+')
            sign = 1;
        else if (string[i] == '-')
            sign = -1;
        else
        {
            result *= 10;
            // ASCII: char 0 == int 48, char 1 == int 49, ..., char 9 == int 57
            // thus, char - 48 => int number.
            result += (string[i] - 48);
        }
    }
    return sign * result;
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
        char intPartString[whereDot], decimalPartString[lengthOfString - whereDot];
        copyStringRange(intPartString, string, 0, whereDot);
        copyStringRange(decimalPartString, string, whereDot, lengthOfString);
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
    int lengthOfString = 0, operatorIndex;
    for (int i = 0; string[i]; i++)
    {
        if (i != 0)
            if (string[i] == '+' || string[i] == '-')
                operatorIndex = i;
        lengthOfString++;
    }
    char realPartString[operatorIndex], imagPartString[lengthOfString - operatorIndex];
    copyStringRange(realPartString, string, 0, operatorIndex);
    copyStringRange(imagPartString, string, operatorIndex, lengthOfString - 1);
    complex result = {parseStringToDouble(realPartString), parseStringToDouble(imagPartString)};
    return result;
}

void writeComplexToFile(complex com, FILE *fptr)
{
    if (com.imag < 0)
        fprintf(fptr, "%lf%lfi\n", com.real, com.imag);
    else
        fprintf(fptr, "%lf+%lfi\n", com.real, com.imag);
}

// Ex. argv == {"[output]", "4", "2+3i", "4+4i", "5+6i", "9+4i"}
int main(int argc, char **argv)
{
    int quantity = argc - 2;
    complex arrayofStructures[quantity];
    for (int i = 0; i < quantity; i++)
        arrayofStructures[i] = parseStringToComplex(argv[i + 2]);

    FILE *fptr = fopen("complex.txt", "w");
    for (int i = 0; i < quantity; i++)
        writeComplexToFile(arrayofStructures[i], fptr);
    fclose(fptr);
    return 0;
}