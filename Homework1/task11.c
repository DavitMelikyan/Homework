#include <stdio.h>

int main() {
  int C = 0;
  printf("Enter the temperature in Celsius:");
  scanf("%d", &C);
  printf("The temperature in Fahrenheit is %d", (C * 9/5) + 32);

  return 0;
}
