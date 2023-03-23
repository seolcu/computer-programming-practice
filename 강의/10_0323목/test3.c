#include <stdio.h>

int main()
{
    printf("---------March 2023---------\nSun Mon Tue Wed Thu Fri Sat \n");

    // startingDay: 1일의 요일, 0 = 일요일 ~ 6 = 토요일. 따라서 시작일 3은 수요일.
    int startingDay = 3;

    // 마지막 날짜
    int endDate = 31;

    for (int i = 0; i < startingDay; i++)
    {
        // 앞부분 공간 주기
        printf("    ");
    }

    int currentDate = 1;
    int currentDay = startingDay;
    while (currentDate <= endDate)
    {
        if (currentDate < 10)
        {
            // 날짜가 한자리 수인 경우
            printf("%d   ", currentDate);
        }
        else
        {
            // 날짜가 두자리 수인 경우
            printf("%d  ", currentDate);
        }

        // 토요일이 지나면 currentDay 값을 0으로 초기화하고 줄바꿈을 시킴
        currentDay++;
        if (currentDay == 7)
        {
            printf("\n");
            currentDay = 0;
        }

        currentDate++;
    }

    printf("\n");
    return 0;
}