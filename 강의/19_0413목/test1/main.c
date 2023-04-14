// 설규원 202322071
#include <stdio.h>

void receiveAndMakeMatrix(int row, int col, int matrix[row][col])
{
	for (int j = 0; j < row; j++)
	{
		printf("-----row index %d-----\n", j);
		for (int i = 0; i < col; i++)
		{
			int tmpNum;
			printf("Enter [%d][%d]: ", j, i);
			scanf("%d", &tmpNum);
			matrix[j][i] = tmpNum;
		}
	}
}

void dotProduct(int row, int mid, int col, int matA[row][mid], int matB[mid][col], int matC[row][col])
{
	for (int selectedY = 0; selectedY < col; selectedY++)
	{
		for (int selectedX = 0; selectedX < row; selectedX++)
		{
			int tmpNum = 0;
			for (int i = 0; i < mid; i++)
			{
				tmpNum += matA[selectedY][i] * matB[i][selectedX];
			}
			matC[selectedX][selectedY] = tmpNum;
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
		for (int j = 0; j < rowA; j++)
		{
			for (int i = 0; i < colB; i++)
			{
				printf("%d\t", matrixC[j][i]);
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
