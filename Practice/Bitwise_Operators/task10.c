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
        } while (n <= 0);
	
	int num1 = num;
	int num2 = num;
	
	num1 = num << n;
	num2 = num >> n;
	printf("num1 %d, num2 %d \n", num1, num2);

	return 0;
}
