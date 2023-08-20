#include<stdio.h>
void main(){
	//Differce between For ,while and do-while
	int i,m=0,n; // Importent thing while loop ko insilation karna parta hai tub wo run kara ga other wise nhi
	for(i=0;i<=5;i++){
		printf("%dFor loop\n",i);
	}
	while(m<=5){// Ya condition ko check kar ka he value ko loop ma chalata hai 
		printf("%dWhile loop\n",m);
		m++;
	}
	do//Do while palha value to increase karta hai fir value ko increase kar ta hai
	{
		printf("%dDo-while loop\n",n);
		n=n+1;
	}while(n<=5);
}