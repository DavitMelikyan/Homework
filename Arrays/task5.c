#include <stdio.h>

int main() {
        int size = 10;
        int max = 0;
	int min = 0;
        int arr[size];
        for (int i = 0; i < size; ++i) {
                printf("Enter a value: ");
                scanf("%d", &arr[i]);
        }
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		} else if (arr[i] < min) {
			min = arr[i]; 
		}
	}
        printf("The sum of minimum and maximum of your array is %d \n", max + min);
        return 0;
}
