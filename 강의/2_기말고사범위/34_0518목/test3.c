#include <stdio.h>
#define MAX_CHAR 100

int stringLength(char *string)
{
    int count;
    for (count = 0; string[count]; count++)
        ;
    return count;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int compare(char *string1, char *string2)
{
    // str1 < str2 => -1
    // str1 == str2 => 0
    // str1 > str2 => 1

    // check for differences
    for (int i = 0; i < min(stringLength(string1), stringLength(string2)); i++)
    {
        if (string1[i] < string2[i])
            return -1;
        else if (string1[i] > string2[i])
            return 1;
    }

    // Invoked when they have same elements along (Ex. pen & pencil). Then, longer is bigger.
    if (stringLength(string1) < stringLength(string2))
        return -1;
    else if (stringLength(string1) > stringLength(string2))
        return 1;
    else
        return 0;
}

void copyString(char *destination, char *target)
{
    for (int i = 0; i < stringLength(target); i++)
    {
        destination[i] = target[i];
    }
    destination[stringLength(target)] = '\0';
}

void swapString(char *string1, char *string2)
{
    char tmp[MAX_CHAR];
    copyString(tmp, string1);
    copyString(string1, string2);
    copyString(string2, tmp);
}

void sortNames(int quantity, char names[quantity][MAX_CHAR])
{
    // Bubble Sort
    for (int i = 0; i < quantity - 1; i++)
    {
        for (int j = 0; j < quantity - i - 1; j++)
        {
            if (compare(names[j], names[j + 1]) == 1)
            {
                swapString(names[j], names[j + 1]);
            }
        }
    }
}

// Ex. argv == {"[output]", "5", "Smith,", "Abel,", "Ashok,", "David,", "Liesbet"}
int main(int argc, char *argv[])
{
    int quantity = argc - 2;

    // array of pure names
    char names[quantity][MAX_CHAR];

    for (int i = 2; i < argc; i++)
    {
        char tmp[MAX_CHAR];
        copyString(tmp, argv[i]);
        for (int j = 0; tmp[j]; j++)
        {
            // remove comma
            if (tmp[j] == ',')
                tmp[j] = '\0';
        }
        copyString(names[i - 2], tmp);
    }

    sortNames(quantity, names);

    for (int i = 0; i < quantity; i++)
    {
        printf("%s ", names[i]);
    }
    printf("\n");

    return 0;
}