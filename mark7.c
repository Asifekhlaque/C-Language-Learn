#include<stdio.h>
void factoral(int a);

void main(){
	int num;
	printf("Enter the number which you want to make it's factoral\n");
	scanf("%d",&num);
	factoral(num);
	
}
void factoral(int a){
	int i,fact=1;
	if(a<=9){
		for(i=1;i<=a;i++){
		    fact=fact*i;
		    printf("Number are %d\n",i);
		}
			printf("The factoral is %d",fact);
	}
	else{
		printf("Value not match please enter single digit number");
	}
}