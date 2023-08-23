#include<stdio.h>
void main(){
	//Nestide if
	// Write a programe if user put the correct password then he can enter the marks to show the output
	int pass,mark;
	printf("Enter the password");
	scanf("%d",&pass);
	if(pass==123){
		printf("Enter a marks");
		scanf("%d",&mark);
		if(mark>=500){
			printf("Pass");
		}
		else{
			printf("Fail");
		}
	}
}