#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,n ,estpremier=1 ;
    printf("entrer un nombre :  ");
     scanf("%d",&n) ;
      for(i=2;i<=n/2;i++){
        estpremier = 0 ;
        break ;
      }
      if(n%i==0){
          estpremier ==0 ;
        printf("le nombre est non premier ") ;
      }
      else
        printf("le nombre est premier ") ;

        return 0 ;
}
