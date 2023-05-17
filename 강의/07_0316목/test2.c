#include <stdio.h>

int main()
{
	char *str;
	printf("아무거나 입력: ");

	// 한 줄을 받아들이는 함수
	fgets(str, 20, stdin);

	printf("%s\n", str);
	return 0;
}
