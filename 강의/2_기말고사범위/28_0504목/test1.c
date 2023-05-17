// 설규원 202322071
#include <stdio.h>

int *search(int target, int size, int array[size], int *isFound)
{
    int *pointer;
    for (int i = 0; i < size; i++)
    {
        if (target == array[i])
        {
            pointer = &array[i];
            *isFound = 1;
        }
    }

    // null
    return pointer;
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
        printf("---> %d\n", &arrayA[i]);
    }

    int target;
    printf("what value to search: ");
    scanf("%d", &target);

    int isFound = 0;
    int *targetPointer = search(target, sizeofA, arrayA, &isFound);

    if (isFound == 1)
    {
        printf("the address of %d is %d\n", *targetPointer, targetPointer);
    }
    else
    {
        printf("Could not find %d\n", target);
    }

    return 0;
}