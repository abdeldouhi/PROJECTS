#include<stdio.h>
main()
{
	char Password , P , a=1 ;
	printf(" saise le mod de passe = ");
	scanf("%char ", &Password);
	do 
		{
			if ( P == Password) {
				printf("Bonjour");
							}
			else{ 
			printf("error pls try again :");
			a++ ;
			
			}	
				
				
					
				}while (a<=3)	;	
		

	
		printf("\n")
		system("pause");
	
}
