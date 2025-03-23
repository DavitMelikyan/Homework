#include <stdio.h>

int main() {
	int num = 0;
	int n = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num <= 0);

	do {
                printf("Enter a number: ");
                scanf("%d", &n);
        } while (n <= 0);
	
	if (num & 1 << n) {
		printf("Yes");
	} else {
		printf("No");
	}
	
	return 0;
}
