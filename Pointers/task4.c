#include <stdio.h>

int main() {
	int num1 = 30;
	int num2 = 47;
	int tmp = 0;
	int *ptr = &tmp;

	printf("before swap %d, %d \n", num1, num2);
	*ptr = num1;
	num1 = num2;
	num2 = *ptr;
	printf("after swap %d, %d \n", num1, num2);
	
	return 0;
}
