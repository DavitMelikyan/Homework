#include <stdio.h>

int main() {
	int num = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num <= 0);

	if (num & (num - 1)) {
		printf("Number is not a power of 2 \n");
	} else {
		printf("Number is a power of 2 \n");
	}
	
	return 0;
}
