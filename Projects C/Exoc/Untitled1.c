#include<stdio.h>
int tab (  int t[]  , int n) {
	int i , j , Z; 
	for ( i = 0 ; i<n ; i++){
		for (j = 0 ; j<n ; j++)
			if(t[j]<t[i]){
				Z = t[i];
				t[i]=t[j];
				t[j] = Z;
				
			
					}

		
							}
		for( i =0 ; i<n ; i++)
			printf("%d \t",t[i]);
}
main(){
	int i , t[10] ; 
	for(i=0 ; i<10 ; i++){

		printf("t[%d] = \t",i)	;
		scanf("%d",&t[i]);
		}
		tab ( t , 10 ); 
		getch();
}
