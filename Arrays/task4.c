#include <stdio.h>

int main() {
        int size = 10;
        int arr[size];
        int min = 0;
	int imin = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a value: ");
                scanf("%d", &arr[i]);
        }
        min = arr[0];
        for (int i = 0; i < size; ++i) {
                if (arr[i] < min) {
                        min = arr[i];
			imin = i;
                }
        }
        printf("Index of the minimum of your array is %d \n", imin);
        return 0;
}
