#include <stdio.h>

int main() {
        const int size = 10;
        int arr[size - 1] = {};
        int num = 0;
        int NotMissing = 1;
        for (int i = 0; i < size - 1; ++i) {
                printf("Enter a number: ");
                scanf("%d", arr + i);
        }
        for (int j = 1; j <= size; ++j) {
                for (int i = 0; i < size - 1 && NotMissing == 1; ++i) {
                        if (j != arr[i]) {
                                if (i == size - 2) {
                                        num = j;
                                        NotMissing = 0;
                                        break;
                                }
                                continue;
                        } else {
                                break;
                        }
                }
        }
        printf("The missing number is %d \n", num);
        return 0;
}
