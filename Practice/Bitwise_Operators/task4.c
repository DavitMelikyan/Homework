#include <stdio.h>

int main() {
        int num = 0;
        int count = 0;
        do {
                printf("Enter a number: ");
                scanf("%d", &num);
        } while (num <= 0);
        int b = 1;
        while (b <= num)  {
                if ((num | b) == num) {
                        ++count;
                }
        b = b << 1;
        }
        
	if ((count | 1) == count) {
		printf("Your number is odd");
	} else {
		printf("Your number is even");
	}
        return 0;
}
