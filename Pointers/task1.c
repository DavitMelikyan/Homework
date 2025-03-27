#include <stdio.h>

int main() {
	int num = 13;
	int *ptr = &num;

	printf("The adress of a variable is %d \n", ptr);
	printf("The adress of a variable is %d \n", &num);	

	printf("The value of a variable is %d \n", *ptr);
	printf("The value of a variable is %d \n", num);

	return 0;
}
