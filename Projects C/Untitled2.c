#include<stdio.h>

void nejma(int N ){
	int i , j; 
	for(i=0 ; i<N ;i++){
		printf("\n");
		for(j=0 ; j<N ; j++)
			printf("*");
	}
}
main(){
	int N ;
	scanf("%d",&N);
	nejma(N);
	
	getch();
}
