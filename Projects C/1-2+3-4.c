#include<stdio.h>
main(){
	int i , n , S=1;
	printf(" saise le nombre : ");
	scanf("%d",&n);
	printf("S=1");
	
	for(i=2;i<=n;i++){
		if ( i%2==0){
			S-=i;
			printf("-%d",i);
			
			
		}	else{
					S+=i;
					printf("+%d",i);
				}	
				}

printf("\n");
system("pause");
}
