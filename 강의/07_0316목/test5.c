#include <stdio.h>

int main()
{
	double a, b;
	printf("두 수를 입력하세요: ");
	scanf("%lf %lf", &a, &b);

	char c;
	printf("계산 부호를 입력하세요(+, -, *, /): ");

	// char 한글자를 받을 때에는 앞에 공백 하나가 필요함.
	scanf(" %c", &c);

	switch (c)
	{
	case '+':
		printf("%lf\n", a + b);
		break;
	case '-':
		printf("%lf\n", a - b);
		break;
	case '*':
		printf("%lf\n", a * b);
		break;
	case '/':
		if (b != 0)
		{
			printf("%lf\n", a / b);
		}
		else
		{
			printf("유효하지 않은 입력");
		}
		break;
	}
	return 0;
}
