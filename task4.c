#include <stdio.h>

int main() {
   int daysinp = 0;
   printf("Enter some value: ");
   scanf("%d", &daysinp);
   int years = (daysinp / 365);
   int months = (daysinp / 30) - (years * 12);
   int daysout = daysinp - (years * 365) - (months * 30);
   printf("%d days = %d years, %d months, %d days \n", daysinp, years, months, daysout);
 
   return 0;
} 
