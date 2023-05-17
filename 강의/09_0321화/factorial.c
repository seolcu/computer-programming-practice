#include <stdio.h>

int main()
{
	int n;
	printf("select int n: ");
	scanf("%d", &n);

	int res = 1;

	// while로 쓰는 경우
	int i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}

	// for으로 쓰는 경우
	/*
	for (int i = 1; i <= n; i++)
	// {
	// 	res = res * i;
	// }
	*/

	printf("factorial %d is %d\n", n, res);
	return 0;
}
