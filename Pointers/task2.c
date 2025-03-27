#include <stdio.h>

int main() {
	int num1 = 17;
	int num2 = 18;
	int *ptr1 = &num1;

	printf("The value before change = %d \n", *ptr1);
	*ptr1 = 30;
	printf("The value after change = %d \n", *ptr1);

	return 0;
}
