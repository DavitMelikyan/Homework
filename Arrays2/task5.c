#include <stdio.h>

int main() {
 	const int size = 6;
	int arr1[size] = {};
	int arr2[size] = {};
	int AreEqual = 1;
	for (int i = 0; i < size; ++i) {
		printf("Enter a number for first array: ");
		scanf("%d", arr1 + i);
	}
	for (int i = 0; i < size; ++i) {
                printf("Enter a number for second array: ");
                scanf("%d", arr2 + i);
        }
	for (int i = 0; i < size; ++i) {
                if (arr1[i] == arr2[i]) {
			AreEqual = 1;
		} else {
			AreEqual = 0;
			break;
		}
	}
	if (AreEqual) {
		printf("The arrays are equal! \n");
        } else {
		printf("The arrays are not equal! \n");
	}
	return 0;
}
