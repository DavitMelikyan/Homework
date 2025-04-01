#include <stdio.h>

int main() {
  int secondsinp = 0;
  printf("Enter some value: ");
  scanf("%d", &secondsinp);
  int hours = (secondsinp / 3600);
  int minutes = (secondsinp / 60) - (hours * 60);
  int secondsout = secondsinp - (hours * 3600) - (minutes * 60);
  printf("%d seconds = %d hours, %d minutes, %d seconds \n", secondsinp, hours, minutes, secondsout);
 
  return 0;
}
