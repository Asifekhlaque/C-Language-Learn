#include<stdio.h>
void main(){
	int num1, num2,khushi,output;
	
	printf("Enter first number");
	scanf("%d",&num1);
	printf("Enter second number");
	scanf("%d",&num2);
	printf("Press 1 for add\nPress 2 for Sub\nPress 3 for mult\nPress 4 for div\n");
	scanf("%d",&khushi);
	switch(khushi){
		case 1:
			output=num1+num2;
			printf("Sum=%d",output);
			break;
		case 2:
			output=num1-num2;
			printf("Sub=%d",output);
			break;
		case 3:
			output=num1*num2;
			printf("mult=%d",output);
			break;
		case 4:
			output=num1/num2;
			printf("div=%d",output);
			break;
		default:
		    printf("Invaild input");
		    exit(0);				
	}

}