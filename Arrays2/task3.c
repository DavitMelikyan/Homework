#include <stdio.h>

int main() {
        const int size = 5;
        char arr[size] = {};
        char tmp = "/0";
        int i1 = 0;
        int i2 = 0;
        for (i1 = 0; i1 < size; ++i1) {
                printf("Enter a char: ");
                scanf(" %c", arr + i1);
        }
        for (i2 = 0; i2 < size / 2; ++i2) {
                tmp = arr[i2];
                arr[i2] = arr[size - (i2 + 1)];
                arr[size - (i2 + 1)] = tmp;
        }
        printf("The reversed word is %s \n", arr);
        return 0;
}
