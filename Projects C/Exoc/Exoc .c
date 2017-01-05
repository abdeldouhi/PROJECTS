#include<stdio.h>
main(){
	int X , M , Y ;
	printf("entre M , X , Y : ");
	scanf("%d %d %d",&M , &X , &Y);
	int A[X][M] , B[M][Y] , C[X][Y] , i , j , k ;
	
	for(i=0 ; i<X ; i++){
		for(j=0 ; j<M ; j++){
			printf("A[%d][%d]=\t",i,j);
			scanf("%d",&A[i][j]);
								}	
							}
	
	for(i=0 ; i<M ; i++){
		for(j=0 ; j<Y ; j++){
			printf("A[%d][%d]=\t",i,j);
			scanf("%d",&B[i][j]);				
								}		
							}
	for(i=0 ; i<X ; i++){
		for(j=0 ; j<Y ; j++){
			C[i][j]=0;
			for(k=0 ; k<M ; k++ ){
				C[i][j]+=A[i][k] * B[k][j] ;
			
			}	
		}		
	}
	
	for(i=0 ; i<X ; i++){
		for(j=0 ; j<Y ; j++){
			printf("C[%d][%d] = %d \n",i,j,C[i][j]);	
		}		
	}	
		
	
	getch();
      }
