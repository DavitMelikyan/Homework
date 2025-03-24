#include <stdio.h>

int main() {
	int n = 0;
	int res = 0;
	int y = 0;
	int x = 1; 
	int count = 2;
	do {
		printf("Enter a number: ");
		scanf("%d", &n);
	} while (n < 0);
	
	if (n < 2) {
		printf("The number is %d \n", n);
		return 0;
	}
	while (count <= n) {
		res = x + y;
		y = x;
		x = res;	
		++count;
	}
	printf("The number is %d \n", res);
	return 0;
}
