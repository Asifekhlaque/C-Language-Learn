#include<stdio.h>
void main(){
	int unit,bill;
	printf("Welcome to your local Electricity bill department\n");
	printf("If you spend unit<=0 or unit <=99 No charger \nIf you spend unit>=100 or unit<=199 Rs3 per unit \nIf ypu spend unit>200 or unit<=299 you have to pay  Rs4 per unit\nElse you have pay Rs6 per unit\n");
	printf("Enter your unit your have used in the month\n");
	scanf("%d",&unit);
	if(unit<=0 || unit <=99){
		printf("No charge");
	}
	else if(unit>=100 || unit<=199){
		bill=(unit-100)*3;
		printf("the bill is Rs%d",bill);
	}
	else if(unit>=200 || unit<=299){
		bill=(unit-200)*4;
		printf("Your bill is Rs%d",bill);
	}
	else{
		bill=(unit-400)*6;
		printf("Your bill is Rs%d",bill);
	}
}