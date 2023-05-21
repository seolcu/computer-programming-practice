#include <stdio.h>

void receiveAndMakeMatrix(int row, int col, int mtx[row][col])
{
	for (int r = 0; r < row; r++)
	{
		printf("-----row index %d-----\n", r);
		for (int c = 0; c < col; c++)
		{
			int tmpNum;
			printf("Enter [%d][%d]: ", r, c);
			scanf("%d", &tmpNum);
			mtx[r][c] = tmpNum;
		}
	}
}

void dotProduct(int row, int mid, int col, int mtxA[row][mid], int mtxB[mid][col], int mtxC[row][col])
{
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			int tmpNum = 0;
			for (int m = 0; m < mid; m++)
			{
				tmpNum += mtxA[r][m] * mtxB[m][c];
			}
			mtxC[r][c] = tmpNum;
		}
	}
}

int main()
{
	int rowA, colA, rowB, colB;

	printf("Enter the row of matrix A: ");
	scanf("%d", &rowA);
	printf("Enter the column of matrix A: ");
	scanf("%d", &colA);

	printf("Enter the row of matrix B: ");
	scanf("%d", &rowB);
	printf("Enter the column of matrix B: ");
	scanf("%d", &colB);

	if (colA == rowB)
	{
		// 행렬곱 조건 만족

		int matrixA[rowA][colA];
		int matrixB[rowB][colB];
		int matrixC[rowA][colB];

		// 행렬에 값 할당하기

		printf("\n=====Assigning matrix A=====\n");
		receiveAndMakeMatrix(rowA, colA, matrixA);
		printf("\n=====Assigning matrix B=====\n");
		receiveAndMakeMatrix(rowB, colB, matrixB);

		// 행렬곱

		dotProduct(rowA, colA, colB, matrixA, matrixB, matrixC);

		// 출력

		printf("\n=====result=====\n");
		for (int r = 0; r < rowA; r++)
		{
			for (int c = 0; c < colB; c++)
			{
				printf("%d\t", matrixC[r][c]);
			}
			printf("\n");
		}
	}
	else
	{
		// A의 열과 B의 행의 길이가 다름: 행렬곱 조건 불만족
		printf("The two matrixs are not able to be multiplied\n");
	}

	return 0;
}
