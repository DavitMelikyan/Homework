#include <stdio.h>

int main() {
        const int size = 5;
        int arr[size] = {};
        int tmp = 0;
	int even = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a number: ");
                scanf("%d", arr + i);
        }
	for (int i = 0; i < size; ++i) {
 		printf("%d   ", arr[i]);
        }
	printf("\n");
        for (int i = 0; i < size; ++i) {
                if (arr[i] % 2 == 0) {
			tmp = arr[even];
             		arr[even] = arr[i];
        	       	arr[i] = tmp;
			++even;
 	      	}
	}
	for (int i = 0; i < size; ++i) {
        	printf("%d   ", arr[i]);
	}
	printf("\n");
        return 0;
}

