#include <stdio.h>

int main(){
	int num = 0;
	int revnumunit = 0;
	int revnumtens = 0;
	int revnumhundreds = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num >= 0 && num <= 9) {
	 printf("%d \n",num);
	} else if(num >= 10 && num <= 99){
	 revnumunit = (num/10);
         revnumtens = (num - (num/10)*10)*10;
         printf("%d \n", (revnumunit + revnumtens));
	} else if(num >= 100 && num <= 999) {
	 revnumunit = (num/100);
	 revnumtens = ((num - ((num/100)*100))/10)*10;
	 revnumhundreds = ((num - ((num/100) * 100) - (((num - (num/100)*100)/10)*10)))*100;
	 printf("%d \n", (revnumunit + revnumtens + revnumhundreds));	
	} else {
	printf("Error: Please try again \n");
	}
	return 0;
}
