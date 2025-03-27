#include <stdio.h>

int main() {
	char ch = 'a';
	char *ptrch = &ch;
	
	printf("The address before increment = %d \n" , ptrch);
	++ptrch;
	printf("The address after increment = %d \n" , ptrch);
	
	return 0;
}
