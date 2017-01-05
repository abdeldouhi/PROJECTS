#include<stdio.h>
main()
{
	int Max , Min , Som , Moy , N , i=1  ;	
		
		printf("saisie les nombres :");
		scanf("%d",&N);
		Max = Min = Som = N ;
		while(N!=0){
	
			scanf("%d",&N);
			Som+=N;
			if(N>Max && N!=0)
				Max=N;
			if(N<Min && N!=0)
			    Min=N;
			i++;
			
				}
			Moy=Som/i;
			printf("Max = %d\n   Min = %d\n  Som = %d\n   Moy = %d\n  ", Max,Min, Som , Moy);
			    
			    
	getch();
	
}
