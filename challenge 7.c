#include <stdio.h>
#include <stdlib.h>

int main()
{
       int n , y,p , v ;
     printf("entre un nombre de trois chiffres ");
     scanf ("%d",&n);

     y = n%10 ;
     p = (n%100)/10 ;
     v = (n/100) ;

     printf("%d",y) ;
     printf("%d",p) ;
     printf("%d",v) ;



    return 0;
}
