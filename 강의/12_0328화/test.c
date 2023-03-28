#include <stdio.h>

int main()
{
	int a;
	printf("enter an int a: ");
	scanf("%d", &a);
	if (a >= 0)
	{
		printf("The absolute value of a is %d\n", a);
	}
	else
	{
		printf("The absolute value of a is %d\n", a * (-1));
	}
	return 0;
}
