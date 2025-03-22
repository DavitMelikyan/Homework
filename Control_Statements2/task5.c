#include <stdio.h>

int main() {
	int n = 0;
	int countl = 0;
	int countw = 0;
	do {
	printf("Enter the lenghth: ");
	scanf("%d", &n);
	} while (n <= 0);

	while (countl < n) {
		countw = 0;
		while (countw < n) {
			printf("*");
			++countw;
		}
		printf("\n");
		++countl;
	}
	return 0;
}
