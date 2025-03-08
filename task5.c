#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %d\n", num, (num & (num - 1)) == 0);

    return 0;
}
// If the output is 1 then the number is a power of 2, if the output is 0 then the number is not a power of 2
