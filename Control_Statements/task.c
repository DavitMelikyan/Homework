#include <stdio.h>

int main() {
	int revnumunit = 0;
	int num = 0;
	scanf("%d", &num);
	if (num >= 100 && num <= 999) {
            revnumunit = (num/100) * 100;
            printf("%d", revnumunit);
}
	return 0;
}
