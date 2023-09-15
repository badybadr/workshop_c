#include <stdio.h>
#include <stdlib.h>

int main()
{   char Alphabet ;
     printf("entrer un alphabet :");
     scanf("%c",&Alphabet) ;

     switch(Alphabet){

     case 'A' :
     case 'E' :
     case 'I' :
     case 'O' :
     case 'Y' :
     case 'a' :
     case 'e' :
     case 'i' :
     case 'u' :
     case 'y' :

     printf("l'alphabet que vous saisiez est un voyelle :") ;
      break ;
        default :
         printf("l'alphabet est un consonne ") ;
     }

    return 0;
}
