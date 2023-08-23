#include<stdio.h>
void main(){
    int i,even,odd,countev,countod;       
	for(i=1;i<=20;i++){
		if(i%2==0){
			even+=i;
			countev++;
		}
		else{
			odd+=i;
			countod++;
		}
	}
	printf("the sum of all even number is : %d\n",countev);
	printf("the sum of all odd number is : %d\n",odd);
}