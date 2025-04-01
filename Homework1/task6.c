#include <stdio.h>

int main() {
  char a = "/0";
  printf("Enter any letter: ");
  scanf("%c", &a);
  printf("%c\n", (a^32));
  
  return 0;
}
