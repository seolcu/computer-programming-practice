#include <stdio.h>
#include <math.h>
#define MAX_CHAR 100

int stringLength(char *string)
{
    int count;
    for (count = 0; string[count]; count++)
        ;
    return count;
}

int compare(int length1, int length2, char *string1, char *string2)
{
    if (length1 == length2)
    {
        for (int i = 0; i < length1; i++)
        {
            if (abs(string1[i] - string2[i]) != 32 && string1[i] != string2[i])
                return 0;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str1[MAX_CHAR], str2[MAX_CHAR];
    printf("First string: ");
    scanf("%s", str1);
    printf("Second string: ");
    scanf("%s", str2);

    int isEqual = compare(stringLength(str1), stringLength(str2), str1, str2);
    if (isEqual)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    return 0;
}
