#include <stdio.h>

int main()
{
    /*
    Odd array = {2, 3, 9};
    Even array = {2, 4, 6};
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

    // 일단 Even array라고 가정하기
    int isOdd = 0;

    for (int i = 0; i < length; i++)
    {
        // 홀수가 하나라도 있으면 Odd array임
        if (array[i] % 2 != 0)
        {
            isOdd = 1;
        }
    }

    if (isOdd == 1)
    {
        printf("It is Odd array\n");
    }
    else
    {
        printf("It is Even array\n");
    }

    return 0;
}