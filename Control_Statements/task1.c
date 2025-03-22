#include <stdio.h>

int main() {
	for (int i = 0; i <= 10; ++i) {
	printf("%d \n",i);
	}
	int a, b = 0;
	while (a <= 10) {
	printf("%d \n",a);
	++a;
	}
	do {
	printf("%d \n", b);
	++b;
	} while (b <= 10);

	return 0;
}
