#include <stdio.h>

int main() {
        int n = 0;
        int countl = 0;
        int countw = 0;
        do {
        printf("Enter the lenghth: ");
        scanf("%d", &n);
        } while (n <= 0);

        while (countl < n) {
		countw = 0;
		if (countl == 0 || countl == (n - 1)) {
			while (countw < n) {
				printf("*");
				++countw;
			}		
		} else {
			for (int i = 1; i <= n; ++i) {
				if (i == 1 || i == n) {
					printf("*");
				} else {
					printf(" ");
				}
			}
 		}		
		printf("\n");
		++countl;
	}

        return 0;
}
