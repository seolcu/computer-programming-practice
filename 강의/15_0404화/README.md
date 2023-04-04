# Arrays(배열)

## 예제 3개

### 1. <a href="./Odd_Even_Arrays.c" download>Odd_Even_Arrays.c</a>

```C
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
```

### 2. <a href="./Complete_Arrays.c" download>Complete_Arrays.c</a>

```C
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
```

### 3. <a href="./Balanced_Arrays.c" download>Balanced_Arrays.c</a>

```C
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
```
