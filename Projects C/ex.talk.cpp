#include<stdio.h>
main(){
int a=2 ,b=a++ ,c ;
c=b*(++a);
printf ("a=%d , b=%d , c=%d" , ++a,b+(c--),c);
}
