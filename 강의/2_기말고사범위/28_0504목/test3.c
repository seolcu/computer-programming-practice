#include <stdio.h>

int accumulator(int size, int array[size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *&array[i];
    }
    return sum;
}

int main()
{
    int sizeofA;
    printf("Size of array: ");
    scanf("%d", &sizeofA);

    int arrayA[sizeofA];
    for (int i = 0; i < sizeofA; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arrayA[i]);
    }

    int sum = accumulator(sizeofA, arrayA);
    printf("sum: %d\n", sum);

    return 0;
}