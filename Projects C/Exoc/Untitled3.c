#include<stdio.h>

void nejma(int N ){
	int i , j; 
	for(i=0 ; i<=N ;i++){	
		for(j=0 ; j<=i ; j++)
			printf("*");
			printf("\n");}
	for(i=0 ; i<=N ;i++){	
		for(j=N-1 ; j>=i ; j--)
			printf("*");
			printf("\n");
	}

}

main(){
	int N ;
	scanf("%d",&N);
	nejma(N);
	
	getch();
}
