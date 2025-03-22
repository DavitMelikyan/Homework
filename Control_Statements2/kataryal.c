#include <stdio.h>

int main() {
	int num = 0;
	int res = 0;
	do {
		printf("Enter a number: ");
		scanf("%d", &num);
	} while (num < 0);
	for (int x = 1; x <= num/2; ++x) {
		if (num % x == 0) {
			res = res + x;
		} else {
			continue;
		}
	}
	printf("The number is %d \n", res);
	if (res == num) {
		printf("Your number is perfect \n");
	} else {
		printf("Your number is not perfect \n");
	}
	return 0;
}
