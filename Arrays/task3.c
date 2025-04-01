#include <stdio.h>

int main() {
        int size = 5;
	int imax = 0;
        int arr[size];
        for (int i = 0; i < size; ++i) {
                printf("Enter a value: ");
                scanf("%d", &arr[i]);
        }
        for (int i = 0; i < size; ++i) {
                if (arr[i] > arr[imax]) {
			imax = i;
                }
        }

        printf("Index of the maximum of your array is %d \n", imax);
        return 0;
}

