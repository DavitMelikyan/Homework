#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int count = 0;
	printf("Enter some value: ");
	scanf("%d", &a);
	printf("Enter another value: ");
	scanf("%d", &b);
	for( int x = a; x <= b; x++){
	if( x % 5 == 0) {
	count++;
        } else {
	continue;
}
}
	printf("%d \n", count);
	return 0;
}
