#include <stdio.h>

void receiveAndMakeMatrix(int row, int col, int mtx[row][col])
{
    for (int r = 0; r < row; r++)
    {
        printf("-----row index %d-----\n", r);
        for (int c = 0; c < col; c++)
        {
            printf("Enter [%d][%d]: ", r, c);
            scanf("%d", &mtx[r][c]);
        }
    }
}

int main()
{
    int rowA, colA;
    printf("Enter the row of matrix A: ");
    scanf("%d", &rowA);
    printf("Enter the column of matrix A: ");
    scanf("%d", &colA);

    int matrixA[rowA][colA];
    printf("\n=====Assigning matrix A=====\n");
    receiveAndMakeMatrix(rowA, colA, matrixA);

    printf("\n=====result=====\n");
    for (int r = 0; r < rowA; r++)
    {
        for (int c = 0; c < colA; c++)
        {
            printf("%d\t", *(matrixA[r] + c));
        }
        printf("\n");
    }

    return 0;
}