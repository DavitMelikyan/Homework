#include <stdio.h>

int main() {
        int n = 0;
        do {
                printf("Enter a number: ");
                scanf("%d", &n);
        } while (n < 0);

        int countl = 1;
        int countw = 0;
        int z = 1;

        while (countl <= n) {
                for (int i = 0; i <= countw && z <= n; i++) {
                        printf("%d ",z);
			++z;
                }
                printf("\n");
                ++countl;
                ++countw;
        }

        return 0;
}
