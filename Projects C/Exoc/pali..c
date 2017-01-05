#include<stdio.h>
int pali ( int t[] , int n){
	
	int i , a = 0 ;
	for(i=0 ; i<n/2 ; i++)
		if( t[i] != t[n-i-1] )
			return 0;
			
	return 1;
}

main(){
	int n , i;
	scanf("%d",&n);
	int t[n]  ; 
	for(i=0 ; i<n ; i++)
		scanf("%d",&t[i]);
	
	printf(">>%d", pali (  t ,  n));
	
getch();
}
