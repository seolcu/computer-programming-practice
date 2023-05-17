#include <stdio.h>

int main()
{
	// A
	printf("%d%c%3.1f\n", 20, 'A', 3.1);

	// B
	printf("%d %c %3.1f\n", 20, 'A', 3.1);

	// C
	printf("%010.3f\n", 32.6);

	// D
	printf("%08.2f\n", 00255.15);
	return 0;
}
