#include <stdio.h>

int main() {
        int size = 10;
        int arr[size];
	int imin = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a value: ");
                scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; ++i) {
                if (arr[i] < arr[imin]) {
			imin = i;
                }
        }
        printf("Index of the minimum of your array is %d \n", imin);
        return 0;
}
