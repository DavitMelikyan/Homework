#include <stdio.h>

int main() {
	int size = 4;
	int sum = 0;
	int arr[4][4];
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			printf("Enter a value: ");
			scanf("%d", &arr[i][j]);
			if (j == i) {
				sum += arr[i][j];
			}
		}
	}
	printf("The sum of main diagonal is %d \n", sum);
	return 0;
}
