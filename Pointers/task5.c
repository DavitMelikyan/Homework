#include <stdio.h>

int main() {
	int num = 5;
	int *ptrn = NULL;
	if (ptrn == NULL) {
		printf("Null \n");
	}
	
	ptrn = &num;
	printf("The value is %d \n", *ptrn);

	return 0;
}
