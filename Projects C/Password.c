#include<stdio.h>
main()
{
	int  Pass = 1234, P , a=0 ;
	printf(" saise le mot de passe =\n");

	do {
		scanf("%d", &P);
			if(P == Pass){
	
				printf("Hello!");
				break;
				}else{
					printf("error  \n");
				
					a++;
						if (a==3)
							system("cls");
				printf(" try again later : \n");
		
						
				}
	
	
			}
		while(a<=3);
	





		printf("\n");
		system("pause");
	
}
