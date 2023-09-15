#include <stdio.h>
#include <stdlib.h>

int main()
{     int A , B , T ;
     printf("entrer le premies nombre :");
     scanf("%d",&A) ;
     printf("entrer le deuxieme nombre :");
     scanf("%d",&B) ;

      if(A == B){
       printf("les deux nombres sont identiques") ;
       T = (A + B ) * 3 ;
       printf("le triple de c'est nombres est : %d ",T) ;
      }
       else
        printf("les nombres sont pas identiques") ;

    return 0;
}
