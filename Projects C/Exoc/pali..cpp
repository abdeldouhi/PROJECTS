#include<stdio.h>
int pali ( int t[] , int n){
	
	int i , a = 0 
	for(i=0 ; i<n/2 ; i++)
		if( t[0+i] != t[n-i] )
			return 0;
			
	return 1;
}

main(){
	int n;
	scanf("%d",&n);
	int t[n]  ; 
	for(i=0 ; i<n ; i++)
		scanf("%d",&t[i]);
	
	printf("%d", pali (  t ,  n));
	
getch();
}
