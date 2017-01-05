#include<stdio.h>
main()
{
int  Pass = 1234, P , a=0 ;
printf(" saise le mot de passe =\n");
while(a<3){
a++;
scanf("%d",&P);
if (P == Pass){
printf("Hello!"); 
break;
}else{
system("cls");
printf("retry\n");

if(a=3)
printf("try again later\n");
} 
}

		printf("\n");
		system("pause");
}

