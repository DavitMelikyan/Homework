#include <stdio.h>

int main() {
	int num = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num <= 0);
	
	int n = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &n);
        } while (n < 0);
	
	num = num | 1 << n;
	printf("The number is %d", num);
	return 0;
}
