#include <stdio.h>

int main() {
	int num = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num < 0);
	
	num = num << 1;
	printf("The number is %d \n", num);

	return 0;
}	
