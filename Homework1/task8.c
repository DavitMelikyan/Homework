#include <stdio.h>

int main() {
  char somech = "\0";
  printf("Enter some character:");
  scanf("%c", &somech);
  int numch = ("%d", somech);
  int sum = numch + 32;
  printf("%c", sum);

  return 0;
}
