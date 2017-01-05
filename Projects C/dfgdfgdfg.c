#include<stdio.h>
main()
{
	int  Pass = 1234, P , a=0 ;
	printf(" saise le mot de passe =\n");

	while(a<=3){
							scanf("%d ", &P);
			if(P == Pass){
	
				printf("Hello!");
				break;
						}else{
					system("cls");
						printf("error  \n");
					
			
					a++;	}
								if (a==3){
			
							system("cls");
				printf(" try again later  \n");
				break;
						}
			}
	
	





		printf("\n");
		system("pause");
	
}
