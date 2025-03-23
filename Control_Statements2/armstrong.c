#include <stdio.h>

int main() {
	int num = 0;
	int count = 0;
	int tens = 1;
	int res = 0;
	do {
		printf("Enter a number: ");
		scanf("%d", &num);
	} while (num <= 0);
	int num2 = num;
	int num3 = 0;
	int num4 = num;
	while (num2 > 0) {
		num2 /= 10;
		++count;
}
	--count;
	int count1 = count;
	while (count1 > 0) {
		tens = tens * 10;
		--count1;
}
	num2 = num;
	while (tens > 0) {
		num3 = num2 / tens;
		num2 = num % tens;
		tens /= 10;
		int digit = 1;
		int count2 = count;
		++count2;
		while (count2 > 0) {
			digit = digit * num3;
			--count2;
		}
		res = res + digit;
}
	if (res == num) {
		printf("Your number is an armstrong number! \n");
	} else {
		printf("Your number is not an armstrong number \n");
	}
	return 0;
}
