#include<stdio.h> // This is used to add function to the code like printf and scanf and many more
void main(){
// Simple Calculter
int num1,num2,op,add,mult,sub,div; // We have declaring all the variable
while(1){ //For run this in infinit time

printf("Press 1 for add\nPress 2 for Sub\nPress 3 for mult\nPress 4 for div\nPress 5 for exit"); //Message
printf("\nEnter a first number\n");
scanf("%d",&num1);
printf("\nEnter Second number\n");
scanf("%d",&num2);
printf("Enter the operation or condintion\n");
scanf("%d",&op);
if(op==1){
	add=num1+num2;
	printf("Sum will be %d",add);
}
else if(op==2){
	sub=num1-num2;
	printf("Sub %d",sub);
}
else if(op==3){
	mult=num1*num2;
	printf("mult %d",mult);
}
else if(op==4){
	div = num1/num2;
	printf("Div %d",div);
}
else if(op==5){
	exit(0); // If user press 5 the then the code terminate
}
else{
	printf("Invalid message");
}
}
}