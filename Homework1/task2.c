#include <stdio.h>

int main() {
  int daysinp = 0;
  printf("Print some value: ");
  scanf("%d", &daysinp);
  int years = (daysinp / 365);
  int weeks = (daysinp / 7) - (years * 52);
  int daysout = daysinp - (years * 365) - ( weeks * 7 );
  printf("%d days =  %d years, %d weeks and %d days \n", daysinp, years, weeks, daysout);

  return 0;
}
