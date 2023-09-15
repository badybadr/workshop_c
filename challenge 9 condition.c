#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char caracter ;
  printf("entrer un caracter :") ;
    scanf("%c",&caracter) ;
        if( caracter >='A' &&  caracter <= 'Z' )
        printf("l'alphabet est majuscile ");
    else if (caracter >= 97 && caracter <= 122 ) {
        printf("l'alphabet est minuscule ");
    } else
    printf("le caractere n'appartient pas a les alphabets ") ;
    return 0;
}
