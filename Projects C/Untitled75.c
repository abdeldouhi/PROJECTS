#include<stdio.h>
main(){
	FILE *res ;
	int A , i , N , c ;
	printf("entre le nombre : ");
	scanf("%d", &A);
	int t[A] ;
	res = fopen("notes.txt" , "r");
		for(i=0 ; i < A ; i++ )
			fscanf(res, "%d ",&t[i]);
	fclose(res);	
	do{
		N=0;
		for(i=0 ; i<A-1 ; i++){
			if(t[i]<t[i+1]){
				c=t[i+1];
				t[i+1]=t[i];
				t[i]=c;
				N=1;
			}
			
		}
	
	}while(N==1);
	
	res = fopen ("notes.txt" , "a");
		for(i=0 ; i<A ; i++){
			fprintf(res, "%d ", t[i]);
			
		}
		fclose(res);
		getch();
	
}
