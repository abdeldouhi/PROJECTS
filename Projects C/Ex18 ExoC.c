#include<stdio.h>
main(){
	int t[50] , Max = 1 , Min = 1 , Vm =0 , i=0 , tMax , tMin ;
	printf("saise le tableau ");
	do{
		scanf("%d",&t[i]);
		
	if( Max < t[i]  ){

		Max = t[i] ;
		tMax = i ;	}
	if( Min > t[i] ){

		Min = t[i] 	;
		tMin = i;	}
	Vm+=t[i];
		i++;
	}while( i<50 && t[i-1]!=0 );
	printf("Max : %d sa position est : %d \n Min = %d sa position est : %d \n Vm = %d",Max , tMax , Min , tMin , Vm/(i-1));
getch();	
}
