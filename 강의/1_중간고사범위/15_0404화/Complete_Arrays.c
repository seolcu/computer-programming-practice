#include <stdio.h>

int main()
{
    /*
    Complete array는 짝수 인덱스에서는 값이 짝수이고, 홀수 인덱스에서는 홀수임.
    Ex) {2, 3, 6, 9}
    */

    int length;
    printf("Enter the length: ");
    scanf("%d", &length);

    int array[length];
    for (int i = 0; i < length; i++)
    {
        printf("Enter the value %d: ", i);
        scanf("%d", &array[i]);
    }

    // 일단 Complete array라고 가정하기
    int isComplete = 1;

    for (int i = 0; i < length; i++)
    {
        // (인덱스는 짝수인데 값은 홀수인경우) 또는 (인덱스는 홀수인데 값은 짝수인 경우)
        if ((i % 2 == 0 && array[i] % 2 != 0) || (i % 2 != 0 && array[i] % 2 == 0))
        {
            isComplete = 0;
        }
    }

    if (isComplete == 1)
    {
        printf("It is Complete array\n");
    }
    else
    {
        printf("It is Incomplete array\n");
    }

    return 0;
}