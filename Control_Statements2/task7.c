#include <stdio.h>

int main() {
	int num = 0;
	do {
		printf("Enter the height: ");
		scanf("%d", &num);
	} while (num < 0);
	for (int i = 0; i < (num - 1); i++){
		for (int j = 0; j < 2 * num - 1; j++){
			if (j == num - i - 1 || j == num - 1 + i) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		printf("* ");
	}
	printf("\n");
	return 0;
}
