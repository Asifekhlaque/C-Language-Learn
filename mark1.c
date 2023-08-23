#include<stdio.h>
void main(){
	int ans1,ans2,ans3,score;
	printf("Welcome to the quiz\n");
	printf("4+5\n");
	scanf("%d",&ans1);
	
	printf("6+4\n");
	scanf("%d",&ans2);
	
	printf("7+3\n");
	scanf("%d",&ans3);
	
	if(ans1==9){
		score=score+2;
	}
	else{
		score=score-2;
	}
	
	if(ans2==10){
		score=score+2;
	}
	else{
		score=score-2;
	}
	
	if(ans3==10){
		score=score+2;
	}
	else{
		score=score-2;
	}
	printf("Your score will be : %d\n",score);
	printf("Thank you doing the test");
}