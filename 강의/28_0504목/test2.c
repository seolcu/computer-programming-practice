// 설규원 202322071
#include <stdio.h>

void searchLargestAndSmallest(int *largest, int *smallest, int size, int array[size])
{
    for (int i = 0; i < size; i++)
    {
        // 일단 최대, 최소일 것이라고 가정
        int isLargest = 1, isSmallest = 1;

        // 검사할 값(array[i])와 모든 값을 비교
        for (int j = 0; j < size; j++)
        {
            if (array[i] > array[j])
                isSmallest = 0;
            if (array[i] < array[j])
                isLargest = 0;
        }

        // largest = &array[i]와 같은 식은 안 되니 조심! (왜 그런지는 나도 잘 몰라요! 누가 좀 알려주세요!)
        if (isLargest)
            *largest = array[i];
        if (isSmallest)
            *smallest = array[i];
    }
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

    int largest, smallest;
    searchLargestAndSmallest(&largest, &smallest, sizeofA, arrayA);
    printf("largest: %d\nsmallest: %d\n", largest, smallest);

    return 0;
}