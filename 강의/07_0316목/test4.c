#include <stdio.h>

int main()
{
	int a, b;
	printf("정수 두개를 입력하세요: ");
	scanf("%d %d", &a, &b);

	// A
	if (a > b)
	{
		printf("%d는 %d보다 큽니다\n", a, b);
	}
	else
	{
		if (a < b)
		{
			printf("%d는 %d보다 작습니다\n", a, b);
		}
		else
		{
			printf("%d는 %d와 같습니다\n");
		}
	}

	// B
	if (a > b)
	{
		printf("%d는 %d보다 큽니다\n", a, b);
	}
	else if (a < b)
	{
		printf("%d는 %d보다 작습니다\n", a, b);
	}
	else
	{
		printf("%d는 %d와 같습니다\n");
	}
	return 0;
}
