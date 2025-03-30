#include <stdio.h>

int main() {
	int size1 = 3;
	int size2 = 4;
	int sumr = 0;
	int arr[size1][size2];
	for (int i = 0; i < size1; ++i) {
		for (int j = 0; j < size2; ++j) {
			printf("Enter a value: ");
			scanf("%d", &arr[i][j]);
			sumr += arr[i][j];
		}
		printf("The sum of row %d is %d \n", i + 1, sumr);
		sumr = 0;
	}

	return 0;
}
