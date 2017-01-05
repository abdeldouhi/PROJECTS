#include<stdio.h>
main(){
	int M , N ;
	printf("entre M et N :");
	scanf("%d %d",&M,&N);
	
	int t[N][M] , i , j ;
	for(i=0 ; i<N ; i++){
		for(j=0 ; j<M ; j++){
			printf("t[%d][%d] : \t",i,j);
			scanf("%d",&t[i][j] );			
						}
					}
	
	int tA[M][N] ;
	for(i=0 ; i<M ; i++){
		for(j=0 ;j<N ; j++){
		tA[i][j] = t[j][i]	;		
							}	
						}
	
	for(i=0 ; i<M ; i++){
		for(j=0 ;j<N ; j++){
			printf("tA[%d][%d] = %d \n",i,j,tA[i][j]);
							}	
						}
	
getch();	
}
