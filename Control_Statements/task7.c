#include <stdio.h>

int main(){

	int num = 0;
	printf("Enter a number:");
	scanf("%d", &num);
	int numhundreds = (num/100);
	int numtens = (num - numhundreds*100)/10;
	int numunits = (num - numhundreds * 100 - numtens * 10);
	if(num >= 0 && num <= 9) {
	printf("%d \n",num);
	} else if(num <= 99) {
	// printf("%d, %d \n", (num / 10), (num - (num/10)*10));
	printf("%d, %d \n", numtens, numunits);
	} else if(num <= 999) {
	// printf("%d, %d, %d", num/100, ((num - (num/100)*100) - num - num/100*100 - num
	printf("%d, %d, %d \n", numhundreds, numtens, numunits);
	} else {
	printf("Error: Input smaller number \n");
	}
	return 0;
}
