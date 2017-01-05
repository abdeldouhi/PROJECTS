#include<stdio.h>
main(){
	int S , A , R , X , K=200;
	printf("sasie la somme a décomposé : \n ");
	scanf("%d",&S);
	do{
		X=S/K;
		if(X!=0){
			printf(" %d billets de %d", X ,K);
			 }
			K/=2;
			S%=K;
		if(K=25)
			K=20;
			
		
	}while( K!=0 );
getch();
}
