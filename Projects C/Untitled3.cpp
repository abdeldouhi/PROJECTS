#include<stdio.h>
main(){
	int a,b,choix;
	printf(" a =");
	scanf("%d",&a);
	printf(" b =");
	scanf("%d",&b);
	printf("1-addition/n 2-sustraction/n 3-multuplication/n 4-modulo/n 5-division/n");
	scanf("%d",&choix);
	if(choix==1){
        	printf("%d+%d=%d",a,b,a+b);
        }
	else{
        if(choix==2)
            printf("%d-%d=%d",a,b,a-b);
       
		if(choix=3){
        	printf("%d*%d=%d",a,b,a*b);
		}
		else{
			if (choix==4){
				printf("%d mod %d=%d",a,b,a%b);
			}
			else{ 
				if(choix==5 && b!=0){
					printf("%d/%d=%d",a,b,a/b);
				}
				else{
					printf("error");
				}
			}
		}
	}
system("pause");	
}
	
