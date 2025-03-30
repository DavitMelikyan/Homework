#include <stdio.h>

int main() {
	int size = 10;
	int max = 0;
	int arr[size];
	for (int i = 0; i < size; ++i) {
		printf("Enter a value: ");
		scanf("%d", &arr[i]);
	}
	max = arr[0];
        for (int i = 0; i < size; ++i) {
                if (arr[i] > max) {
                        max = arr[i];
                }
        }

	printf("The maximum of your array is %d \n", max);
	return 0;
}
