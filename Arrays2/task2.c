#include <stdio.h>

int main() {
	const int size = 5;
	int arr[size] = {};
	int count = 0;
	for (int i = 0; i < size; ++i) {
		printf("Enter a value: ");
		scanf("%d", arr + i);
		if (arr[i] % 2 == 1) {
			++count;
		} else {
			continue;
		}
	}
	printf("Count of odd numbers is %d \n", count);
	return 0;
}
