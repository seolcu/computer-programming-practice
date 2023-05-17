// 설규원 202322071
#include <stdio.h>

void searchLargestAndSmallest(int *largestPt, int *smallestPt, int size, int array[size])
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

        // largestPt = &array[i]와 같은 식은 largestPt가 가르키는 주소만 바꿔줄 뿐, main함수의 largest에 영향을 주지 않으므로 조심!
        if (isLargest)
            *largestPt = array[i];
        if (isSmallest)
            *smallestPt = array[i];
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