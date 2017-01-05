#include<stdio.h>
#include<math.h>
struct point {
	int x , y ;
}

main(){
	int dist ;
	struct point p1 , p2 ;
	scanf("%d %d", &p1.x , &p1.y) ;
	scanf("%d %d", &p2.x , &p2.y) ;
	
	printf("Dist entre a et b est : %lf", sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
	
getch();
}
		
	
	
	









