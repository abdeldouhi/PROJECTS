#include<stdio.h>
void tri (int L){
	int c , i , j , nb ;
	for(i=0 ; i<=L ; i++){
		c = L - i;
		
		for(j=0 ; j<c ; j++)
			printf(" ");
			
		nb= 2*i+1;
		for(j=1 ; j<=nb ; j++)
			printf("*");
			
		printf("\n");
		
	}
	for(i=L-1 ; i>=0 ; i--){
		c = L - i;
		nb= 2*i+1;
		for(j=0 ; j<c ; j++)
			printf(" ");
			
		for(j=1 ; j<=nb ; j++)
			printf("*");
			
		printf("\n");
}

}
main(){
	int L ;
	scanf("%d",&L)	;
	tri(L);
getch();
}
