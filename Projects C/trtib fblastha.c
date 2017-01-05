#include<stdio.h>
main(){
	int N , i , j , X  ;
	scanf("%d",&N);
	int t[N+1];
	for ( i=0 ; i<N ; i++)
		scanf("%d",&t[i]);
	
			
	printf("sasie X :");
	scanf("%d",&X);
	for(i=0 ; i<N ; i++){
		if(X<t[i]){	
			for ( j = 0 ; j<N-i; j++) {
				t[N-j] = t[N-j-1];
			}	
			t[i]=X; 
			break;
		}
	}

	if(i==N)
	t[i]=X;



for(i=0 ; i<N+1 ; i++)
printf("t[%d]= %d \n",i,t[i]);
	
	
	
getch(); 	
}
