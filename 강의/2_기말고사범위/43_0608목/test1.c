#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Abin = fopen("A.bin", "rb");
    FILE *Bbin = fopen("B.bin", "rb");
    FILE *Obin = fopen("O.bin", "wb");

    // file open checking
    if (Abin == NULL || Bbin == NULL || Obin == NULL)
    {
        printf("Error: Could not open files\n");
        exit(-1);
    }

    // file size checking
    int tmp, sizeofA, sizeofB;
    for (sizeofA = 0; fread(&tmp, sizeof(int), 1, Abin) == 1; sizeofA++)
        ;
    for (sizeofB = 0; fread(&tmp, sizeof(int), 1, Bbin) == 1; sizeofB++)
        ;
    rewind(Abin);
    rewind(Bbin);

    if (sizeofA != sizeofB)
    {
        printf("Error: size not equal\n");
        exit(-1);
    }

    // find the smallest -> write.
    int smallest, smallestNotDefined = 1;
    while (1)
    {
        // find the minimum bigger than the previous minimum.
        int target, nextSmallest, nextSmallestNotDefined = 1;
        for (int targetIndex = 0; targetIndex < sizeofA + sizeofB; targetIndex++)
        {
            if (targetIndex < sizeofA)
                fread(&target, sizeof(int), 1, Abin);
            else if (targetIndex < sizeofA + sizeofB)
                fread(&target, sizeof(int), 1, Bbin);

            // initialize
            if (nextSmallestNotDefined)
            {
                if (smallestNotDefined)
                {
                    nextSmallest = target;
                    nextSmallestNotDefined = 0;
                    smallestNotDefined = 0;
                }
                else if (target > smallest)
                {
                    nextSmallest = target;
                    nextSmallestNotDefined = 0;
                }
            }

            // compare
            else if (target < nextSmallest && target > smallest)
            {
                nextSmallest = target;
            }
        }

        // done
        if (nextSmallestNotDefined)
            break;

        // not done
        else
        {
            smallest = nextSmallest;
            fwrite(&smallest, sizeof(int), 1, Obin);
            rewind(Abin);
            rewind(Bbin);
        }
    }

    fclose(Abin);
    fclose(Bbin);
    fclose(Obin);
    return 0;
}