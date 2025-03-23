#include <stdio.h>

int main() {
	int a = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &a);
        } while (a <= 0);

	int b = 0;
	do {
                printf("Enter a number: ");
                scanf("%d", &b);
        } while (b <= 0);
	
	int res = 0;
	int oper = 0;
	printf("Choose an operation to complete \n 1 - and \n 2 - or \n  3 - xor \n 4 - not \n 5 - << \n 6 - >> \n Enter the operation: ");
	scanf("%d", &oper);
	switch (oper) {
		case 1:
			res = a & b;
			break;
		case 2:
			res = a | b;
			break;
		case 3:
			res = a ^ b;
			break;
		case 4:
			a = ~a;
			b = ~b;
			printf("Num1 = %d \n Num2 = %d \n", a, b);
			return 0;
		case 5:
			res = a << b;
			break;
		case 6:
			res = a >> b;
			break;
		default:
			printf("Error: Invalid operator");
			break;
	}
	printf("The result is %d", res);
	
	return 0;
}
