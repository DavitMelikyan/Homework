#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &a);
        } while (a <= 0);

	do {
                printf("Enter a number: ");
                scanf("%d", &b);
        } while (b <= 0);

	a = a ^ b;
	b = a ^ b;
	a = b ^ a;
	printf("%d %d", a, b);

	return 0;
}
