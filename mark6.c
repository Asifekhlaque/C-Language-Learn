#include<stdio.h>
void main(){
	int x=100,y=300;
	y=y+x;
	x=y-x;
	y=y-x;
	printf("x=%d\n",x);
	printf("y=%d",y);
}