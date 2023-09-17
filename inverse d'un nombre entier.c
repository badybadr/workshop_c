#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  inverse = 0 ;
    int nombre ;
    printf("entrer un nombre entier : ");
    scanf("%d",&nombre) ;
    while ( nombre != 0){
     inverse = (inverse * 10) + (nombre %10) ;
       nombre = nombre / 10 ;
         }
     printf("linverse de se nombre est : %d ",inverse) ;

    return 0;
}
