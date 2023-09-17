#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i ;

  do {
       printf("entrer un nombre :") ;
     scanf("%d",&N) ;

      }while(N<0) ;

    if(N%2==0)
          printf("le nombre est un nombre non premier");
    else
        printf("le nombre est nombre premier ");


     return 0 ;
     }
