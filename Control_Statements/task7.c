#include <stdio.h>

int main(){

	int num = 0;
	int count = 0;
	int tens = 1;
	printf("Enter a number:");
	scanf("%d", &num);
	int num2 = num;
	int num3 = 0;
	while (num2 > 0) {
		num2 /= 10;
		++count;
}
	--count;
	while (count > 0) {
		tens = tens * 10;
		--count;
}
	while (tens > 0) {
		num3 = num / tens;
		num = num % tens;
		tens /= 10;
		printf("%d, ", num3);
}
	printf("\n");
	return 0;
}
