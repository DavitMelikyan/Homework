#include <stdio.h>

int main() {
        const int size = 10;
        int arr[size] = {};
        int target = 7;
	int itarg = 0;
	int IsTrue = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a number: ");
                scanf("%d", arr + i);
        }
	for (int i = 0; i < size; ++i) {
		if (arr[i] == target) {
                        IsTrue = 1;
                        itarg = i;
			break;
		}
	}
	if (IsTrue) {
		printf("The index of target is %d! \n", itarg);
	} else {
		printf("-1 \n");
	}
	return 0;
}
