#include <stdio.h>

int main() {
	char letter = 0;
        printf("Enter a number: ");
        scanf("%c", &letter);
	
	letter = letter ^ 32;
	printf("%c", letter);

	return 0;
}
