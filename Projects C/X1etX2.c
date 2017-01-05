    #include <stdio.h>
    #include<math.h>
    main(){
	int a,b,c,D;
	scanf("%d%d%d", &a,&b,&c);
	D=(b*b)-4*a*c;
	printf("Delat=%d",D);
	if(D>0){
	int X1,X2;
	X1=((-b)-sqrt(D))/(2*a);
	X2=((-b)+sqrt(D))/(2*a);
	printf("X1=%d et X2=%d", X1 , X2);
	getch();
	}
	
	
	
	
	
	
	
	
	
	
}
