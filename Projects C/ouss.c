#include<stdio.h>
main(){
	FILE *res ;
	int A ;
	printf("entre A :");
	scanf("%d", &A);
	int t[A+1][A+1] , i , j ;
	for(i=0 ; i<A+1 ; i++ ){
		for(j=0 ; j<A+1 ; j++){
			t[i][j]=0;		}	
			}
	for(i=0 ; i<A+1 ; i++){
		t[i][0]=t[i][i]=1;
	}
	
	for(i=2 ; i<A+1 ; i++){
		for(j=1 ; j<=i ; j++){
		t[i][j]=t[i-1][j]+t[i-1][j-1]	;
		}
	}

	res = fopen( "notes.txt" , "w" );
	for(i=0 ; i<A+1 ; i++){
		for(j=0 ; j<=i; j++){

			fprintf(res ,"%d ", t[i][j]);
		}
		fprintf(res , "\n");
	}
	fclose(res);
	
	
	
	
	
}
