#include<stdio.h>
main() {
	int N , G , i , S=1 ; 
	printf("saisie le nombre des chifres :");
	scanf("%d", &N);
	printf("saisie les chifres :");
	for(i=1;i<=N;i++){
		if(i==1)
		scanf("%d",&S);
		else{
				scanf("%d",&G);
				if(G>S)
			S=G	;
		}
			
																		
					}
	printf("le plus rand chifre est : %d",S);
			
			
		
	printf("\n") ;
	system("pause")	;
	}
