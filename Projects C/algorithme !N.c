#include<stdio.h>
main(){
	int i , n , S=1;
	printf("saisie un nombre : ");
	scanf("%d",&n);
	printf("!%d=",n);
	for(i=n;i>=2;i--){		
		S*=i;
	if(n==i)
		printf("%d",i);
		else{
			printf("x%d",i);
		}	
	}
	printf("x1");
	printf("=%d",S);













printf("\n");
system("pause");
}
