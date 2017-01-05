#include<stdio.h>
void tab ( int t[] , int n){
	int i , Z , p ;
	
	do{
	p=0;	
	
	for( i =0 ; i<n-1 ; i++){

		if(t[i]>t[i+1]){
			Z = t[i];
			t[i]=t[i+1];
			t[i+1]=Z;
			p=1;
				}
	}
	}	while(p!=0);
		

		
	for(i=0 ; i<n ; i++)
		printf("%d \t", t[i]);

}
main(){
	int i , t[10] ;
	for(i=0 ; i<10 ; i++){
		printf("t[%d]", i);
		scanf("%d",&t[i]);
	}
	tab ( t , 10 );
	getch();
	
	
}
