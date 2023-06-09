// 이 코드는 어떻게 바이너리 파일을 만드는지를 담은 참고코드입니다.
// 제출하지 않습니다.

#include <stdio.h>

int main()
{
    FILE *Abin = fopen("A.bin", "wb");
    FILE *Bbin = fopen("B.bin", "wb");

    int Aarray[4] = {34, 25, 3, 4};
    int Barray[4] = {100, 3, 24, 6};

    for (int i = 0; i < 4; i++)
        fwrite(&Aarray[i], sizeof(int), 1, Abin);

    for (int i = 0; i < 4; i++)
        fwrite(&Barray[i], sizeof(int), 1, Bbin);

    fclose(Abin);
    fclose(Bbin);
    return 0;
}