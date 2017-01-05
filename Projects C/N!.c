#include<stdio.h>
main(){
	int  S=1 , n   ;
	printf("saisie N :");
	scanf("%d",&n);
	printf("%d! = ",n);
	while(n>=1){

	S=S*n--;
	}
    printf(" %d",S);	
	getch();
	
    	
	
}
