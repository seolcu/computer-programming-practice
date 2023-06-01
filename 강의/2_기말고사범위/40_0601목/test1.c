#include <stdio.h>

int isComposite(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 1;
    }
    return 0;
}

int main()
{
    int quantity;
    printf("How many numbers?(at least 20): ");
    scanf("%d", &quantity);
    while (quantity < 20)
    {
        printf("Error: You should give at least 20 numbers\n");
        printf("How many numbers?(at least 20): ");
        scanf("%d", &quantity);
    }

    int numbers[quantity];
    for (int i = 0; i < quantity; i++)
    {
        int tmp;
        printf("Enter number[%d](bigger than 1):", i);
        scanf("%d", &tmp);
        while (tmp <= 1)
        {
            printf("Error: give a number bigger than 1\n");
            printf("Enter number[%d](bigger than 1):", i);
            scanf("%d", &tmp);
        }
        numbers[i] = tmp;
    }

    FILE *primeFilePointer = fopen("prime.txt", "w");
    FILE *compositeFilePointer = fopen("composite.txt", "w");

    for (int i = 0; i < quantity; i++)
    {
        // prime
        if (isComposite(numbers[i]) == 0)
            fprintf(primeFilePointer, "%d ", numbers[i]);
        // composite
        else if (isComposite(numbers[i]) == 1)
            fprintf(compositeFilePointer, "%d ", numbers[i]);
    }

    fclose(primeFilePointer);
    fclose(compositeFilePointer);
    return 0;
}