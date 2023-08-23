#include<stdio.h>
void main(){
	int pass,ans1,ans2,ans3,marks=0;
	printf("Welcome to quiz\nEnter your password\n");
	scanf("%d",&pass);
	if(pass==123){
		printf("3+2\n");
		scanf("%d",&ans1);
		if(ans1==5){
			printf("Correct\n");
			marks++;
		}
		else{
			printf("not correct\n");
			
		}
		
		printf("9+2\n");
		scanf("%d",&ans2);
		if(ans2==11){
			printf("Correct\n");
			marks++;
		}
		else{
			printf("not correct\n");
			
		}
		
		printf("3+8\n");
		scanf("%d",&ans3);
		if(ans3==11){
			printf("Correct\n");
			marks++;
		}
		else{
			printf("not correct\n");
			
		}
		printf("Marks= %d",marks);
	}
	
}