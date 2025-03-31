#include <stdio.h>

int main() {
	const int size = 5;
	char arr[size] = {};
	for (int i = 0; i < size; ++i) {
		printf("Enter a char: ");
		scanf(" %c", arr + i);
		arr[i] = arr[i] & 223;
	}
	printf("%s \n", arr);
	return 0;
}
