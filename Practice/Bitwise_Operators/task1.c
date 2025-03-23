#include <stdio.h>

int main() {
	int num = 0;
	do {
		printf("Enter a number: ");
		scanf("%d", &num);
	} while (num < 0);
	
	if ((num | 1) == num) {
		printf("Number is odd \n");
	} else {
		printf("Number is even \n");
	}
	
	return 0;
} 
