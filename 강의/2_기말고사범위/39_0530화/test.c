#include <stdio.h>

int main()
{
    FILE *fptr = fopen("test.txt", "w");
    char c = getchar();
    putc(c, fptr);
    fclose(fptr);
    return 0;
}