#include <stdio.h>

int main()
{
	int sizeA;
	printf("Enter the size of ordered array A: ");
	scanf("%d", &sizeA);
	int arrayA[sizeA];
	for (int i = 0; i < sizeA; i++)
	{
		printf("Enter an number %d for ordered array A: ", i);
		scanf("%d", &arrayA[i]);
	}

	int sizeB;
	printf("Enter the size of ordered array B: ");
	scanf("%d", &sizeB);
	int arrayB[sizeB];
	for (int i = 0; i < sizeB; i++)
	{
		printf("Enter an number %d for ordered array B: ", i);
		scanf("%d", &arrayB[i]);
	}

	// 길이 고정
	int combined[sizeA + sizeB];
	int resultSize = sizeA + sizeB;

	for (int i = 0; i < sizeA; i++)
	{
		combined[i] = arrayA[i];
	}

	for (int i = 0; i < sizeB; i++)
	{
		// i: 검사하고자 하는 B값의 인덱스
		for (int j = 0; j < sizeA + sizeB; j++)
		{
			// j: 비교하고자 하는 combined의 값의 인덱스

			// 값이 겹침
			if (arrayB[i] == combined[j])
			{
				resultSize--;
				break;
				// 검사하고자 하는 B값보다 combined의 값의 커짐
			}
			else if (arrayB[i] < combined[j])
			{
				int tmp[sizeA + sizeB];
				for (int k = 0; k < sizeA + sizeB; k++)
				{
					if (k < j)
					{
						// tmp의 앞부분과 combined의 앞부분 동일
						tmp[k] = combined[k];
					}
					else if (k == j)
					{
						// tmp에 B값 삽입
						tmp[k] = arrayB[i];
					}
					else if (k > j)
					{
						// tmp의 뒷부분에 combined의 뒷부분 삽입, 누락될뻔한 값 포함
						tmp[k] = combined[k - 1];
					}
				}

				for (int k = 0; k < sizeA + sizeB; k++)
				{
					combined[k] = tmp[k];
				}

				break;
				// 마지막 수인데 B값이 가장 큰 경우
			}
			else if (arrayB[i] > combined[j] && combined[j] > combined[j + 1])
			{
				combined[j + 1] = arrayB[i];
				break;
			}
		}
	}

	// 배열 크기 줄이기
	int result[resultSize];
	for (int i = 0; i < resultSize; i++)
	{
		result[i] = combined[i];
		printf("%d, ", result[i]);
	}

	return 0;
}
