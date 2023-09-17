#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet ;
    printf("entrer un alphabet ");
    scanf("%c",&alphabet) ;

    if( alphabet >='A' &&  alphabet <= 'Z' ){
     printf("L'alphabet est majuscule ");
    }
    else
    printf("l'alphabet est minuscule") ;
    return 0;
}
