#include <stdio.h>

int main() {
	int num = 0;
	int mask = 0;
	int n = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num <= 0);

	do {
                printf("Enter the mask: ");
                scanf("%d", &mask);
        } while (mask <= 0);

	do {
                printf("Enter the n: ");
                scanf("%d", &n);
        } while (n <= 0);

	mask = mask << n;
	num = num & mask;
	printf("%d", num);
	return 0;
}
