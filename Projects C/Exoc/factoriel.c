#include<stdio.h>

int factoriel ( int A  ){
int i ,  S=1 ;
	for(i=A; i>0 ; i--){
		S*=i;
		
	}
		return	S;
}
main(){
	int x;
	printf("entre A :");
	scanf("%d",&x);
	
	printf("A!=%d",factoriel(x));
	
	getch();
	
	
	
	
	
	
	
	
}
