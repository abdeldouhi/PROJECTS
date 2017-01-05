#include<stdio.h>
int t[10] ;
void remplir (  ){
	int i ;
		for(i=0 ; i<10 ; i++){

		printf("t[%d] = \t",i)	;
		scanf("%d",&t[i]);
		}	
}
int chercher  (  ){

	int i , A   ;
	printf("entre A : ");	
	scanf("%d",&A);
		for(i=0 ; i<10 ; i++){
			if(A==t[i])
				{
				printf ("%d est dans le tabeau",A);
				return 1;
				}

		
		
		
		} 	
		
	
				printf("%d est introuvable ",A);	
				return 0;	
		
		
		
		
		}

int max (  ) {
int M , i ;
	M = t[0] ;	
	for(i=0 ; i<10 ; i++){			
		if(M>t[i] )
			M=t[i] ;
		}
	return M ;
	
}

int min (  ) {
	int m , i;
	m = t[0] ;
for(i=0 ; i<10 ; i++){			
		if(m<t[i] )
			m=t[i]	;		
		}
		return m ;
}

int tab ( ) {
	int i , j , Z; 
	for ( i = 0 ; i<10 ; i++){
		for (j = 0 ; j<10 ; j++)
			if(t[j]<t[i]){
				Z = t[i];
				t[i]=t[j];
				t[j] = Z;		
					}	
				}
		for( i =0 ; i<10 ; i++)
			printf("%d \t",t[i]);
		}
void tab2 (){
	int i , Z , p ;
	
	do{
	p=0;	
	
	for( i =0 ; i<9 ; i++){

		if(t[i]>t[i+1]){
			Z = t[i];
			t[i]=t[i+1];
			t[i+1]=Z;
			p=1;
						}
					}	
		}while(p!=0);		
	for(i=0 ; i<10 ; i++)
		printf("%d \t", t[i]);
}
void menu (  ) {
system("pause");
system("cls");
printf("\n 1/ remplir le tableau ");
printf("\n 2/ cherche A ");
printf("\n 3/ cherche Max");
printf("\n 4/ cherche Min");
printf("\n 5/ triee par selection ");
printf("\n 6/ triee par bulle ");
printf("\n 7/ Quitter");
	
	
}

main(){
int A ;
do{
	menu () ;
	scanf("%d",&A);
	if ( A == 1)
		remplir();
	if ( A == 2)
		chercher () ;
	if ( A == 3)
	
		printf("le max est : %d",max());
	if ( A == 4)
		printf("le minx est : %d",min());
	if ( A == 5)
		tab();
	if ( A == 6)
		
		tab2 ();
		
	
	
}while( A < 7)	;
printf("le system va termine");
getch();
}
