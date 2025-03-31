#include <stdio.h>

int main() {
        const int size = 5;
        int arr[size] = {};
        int IsPaired = 1;
        int ielem = 0;
        for (int i = 0; i < size; ++i) {
                printf("Enter a number: ");
                scanf("%d", arr + i);
        }
        for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size && IsPaired == 1; ++j) {
                        if (j != i) {
                                if (arr[i] != arr[j]) {
                                       if (j == size - 1) {
                                                ielem = i;
                                                IsPaired = 0;
                                                break;
                                        }
                                        continue;
                                } else {
                                        break;
                                }
                        } else if (j == size - 1) {
                                ielem = i;
                                IsPaired = 0;
                                break;
                        } else {
                                continue;
                        }
                }
        }
        printf("The not paired number is %d \n", arr[ielem]);
        return 0;
}
