#include<stdio.h>
main(){
int celibataire,salaire,Nmde;
float x;
	printf("célibataire\n Oui= 1\n Non = 2\n ");
	scanf("%d", &celibataire);
	printf("Nombre d'enfants est");
	scanf("%d",&Nmde);
	printf("le salaire est : ");
	scanf("%d",&salaire);
	if(celibataire==1){
		x=salaire*0.20;
	}
	else{ 
	x=salaire*0.25;
	}
	x=x+(Nmde*0.1*salaire);
	if(salaire<6000){
		x=x+(salaire*0.1);
	}
	if(x>(salaire*0.5)){
	
	printf("la participation = %f ",(salaire*0.5));
	}
	    else{
	    	printf("la participation = %f", x);
		}	
    printf("\n");	
	system("pause");
}
