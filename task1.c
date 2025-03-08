#include <stdio.h>

int main() {
 int  a = 15;
 int  b = 10;
 int  c = 0;
 c = a;
 a = b;
 b = c;
 printf("a is %d and b is %d", a, b);
}
