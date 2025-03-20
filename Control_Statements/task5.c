#include <stdio.h>

int main () {
	int num = 0;
	int res = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num > 0) {
	res = (res * num);
	num--;
}
	printf("The result is %d \n", res);
	return 0;
}
