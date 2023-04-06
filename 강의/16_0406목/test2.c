#include <stdio.h>

int main() {
	int size;
	printf("How many element? (bigger than 10): ");
	scanf("%d", &size);

	int numList[size];

	for (int i = 0; i < size; i++) {
		printf("Enter an int number %d: ", i);
		scanf("%d", &numList[i]);
	}

	int midIndex = size / 2, leftSum, rightSum;
	for (int i = 0; i < size; i++) {
		if (i < midIndex) {
			leftSum += numList[i];
		} else if (i >= midIndex) {
			rightSum += numList[i];
		}
	}

	if (leftSum > rightSum) {
		printf("The array is left-skewed\n");
	} else if (leftSum < rightSum) {
		printf("The array is right-skewed\n");
	} else {
		printf("The array is balanced\n");
	}
	return 0;
}
