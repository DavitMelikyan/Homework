#include <stdio.h>

int main() {
	int size = 10;
	int arr[size];
	int min = 0;
	for (int i = 0; i < size; ++i) {
                printf("Enter a value: ");
                scanf("%d", &arr[i]);
	}
	min = arr[0];
	for (int i = 0; i < size; ++i) {
                if (arr[i] < min) {
                        min = arr[i];
                }
        }
        printf("The minimum of your array is %d \n", min);
        return 0;
}
