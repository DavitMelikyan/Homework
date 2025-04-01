#include <stdio.h>

int main() {
 int  a = 0;
 int  b = 0;
 printf("Enter some values: ");
 scanf("%d" "%d", &a, &b);
 int  c = 0;
 c = a;
 a = b;
 b = c;
 printf("a is %d and b is %d", a, b);

 return 0;
}
