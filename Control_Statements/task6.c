#include <stdio.h>

int main(){
	int num = 0;
	int revnum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (num > 0) {
		revnum = num % 10;
		printf("%d", revnum);
		num /= 10;
}
	printf("\n");
	return 0;
}
