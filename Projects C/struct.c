#include<stdio.h>
#include<math.h>

struct Point{
    int x , y;
};

double distance(struct Point a, struct Point b){
    return sqrt(
            pow((b.x - a.x) ,2) + pow((b.y - a.y) ,2)
    ) ;
}
main()
{
    printf("Programme qui permet de  calculer la distance entre deux Points :\n\n") ;
    struct Point p1 , p2;

    printf("Saisir les coordonnes du premier Point : \n") ;
    scanf("%d %d" , &p1.x , &p1.y) ;

    printf("Saisir les coordonnes du deuxieme Point : \n") ;
    scanf("%d %d" , &p2.x , &p2.y) ;


    printf("P1 (%d , %d) , P2 (%d , %d)\n" , p1.x , p1.y , p2.x , p2.x) ;
    printf("la distance entre P1 (%d , %d) et  P2 (%d , %d) est %lf" , p1.x , p1.y , p2.x , p2.y , distance(p1 , p2)) ;


}
