#include <stdio.h>

int main() {
        const int size = 10;
        int arr[size] = {};
        int IsTrue = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a number: ");
                scanf("%d", arr + i);
        }
	for (int i = 0; i < size - 1; ++i) {
		if (arr[i] > arr[i + 1]) {
			IsTrue = 1;
		} else {
			IsTrue = 0;
			break;
		}
	}
	if (IsTrue) {
		printf("Yes \n");
	} else {
		printf("No \n");
	}
	return 0;
}
