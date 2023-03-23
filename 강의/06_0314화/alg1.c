#include <stdio.h>

int main()
{
	char *name;
	int age;
	printf("type your name\n");
	scanf("%s", name);
	printf("type your age\n");
	scanf("%d", &age);

	printf("your name: %s\nyour age: %d\nnext year: %d\n", name, age, age + 1);

	return 0;
}
