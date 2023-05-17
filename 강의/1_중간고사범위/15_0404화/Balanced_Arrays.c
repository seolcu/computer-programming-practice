#include <stdio.h>

int main()
{
    /*
    Balanced array는 값이 홀수개인 배열이다.
    배열의 정중앙에 위치한 값을 기준으로,
    그 왼쪽에 위치한 값은 모두 정중앙의 값보다 작아야 하고
    오른쪽에 위치한 값은 모두 정중앙의 값보다 커야 한다.
    Ex) {2, 6, 4, 9, 11, 13, 19}
    */

    // 배열의 길이는 홀수여야 함
    int length;
    printf("Enter the odd length: ");
    scanf("%d", &length);

    int array[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter the value %d: ", i);
        scanf("%d", &array[i]);
    }

    // 일단 Balanced array라고 가정하기
    int isBalanced = 1;

    // 정중앙의 인덱스
    int middleIndex = length / 2;

    for (int i = 0; i < length; i++)
    {
        // (인덱스는 왼쪽인데 값은 크거나 같은 경우) 또는 (인덱스는 오른쪽인데 값은 작거나 같은 경우)
        if ((i < middleIndex && array[i] >= array[middleIndex]) || (i > middleIndex && array[i] <= array[middleIndex]))
        {
            isBalanced = 0;
        }
    }

    if (isBalanced == 1)
    {
        printf("It is Balanced array\n");
    }
    else
    {
        printf("It is not Balanced array\n");
    }

    return 0;
}