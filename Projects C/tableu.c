#include<stdio.h>
main(){
	int t[5] , i  , x  ;
	printf("sasie t : ");
			for(i=0; i<5 ; i++){
		scanf("%d" , &t[i]);
							}
		printf("enter x :");
		scanf("%d",&x);
		for(i=0;i<5 ; i++){
			if(t[i]==0)continue;
				else
					printf(" %d\t ",x/t[i]  );
							}

			
getch();
	}
