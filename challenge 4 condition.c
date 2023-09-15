#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
   float A , B , C , Delta , x , x1 , x2  ;
     printf("entrer la valeur de nombre A :");
     scanf("%f",&A) ;
     printf("entrer la valeur de nombre B :");
     scanf("%f",&B) ;
     printf("entrer la valeur de nombre C :");
     scanf("%f",&C) ;

    Delta = pow(B,2) - 4 * A * C ;

    if(Delta<0){
    printf("Delta admet aucune solution") ;
    } else if(Delta == 0 ){
      x = (-B/2 * A) ;
    printf("Delta admet une solution : %f ",x) ;
    }else{
    x1 = (-B -sqrt(Delta))/ 2 * A ;
    x2 = (-B +sqrt(Delta))/ 2 * A ;
   printf("Delta admet deux solutions : %.2f et %.2f ",x1,x2) ;
    }

    return 0;
}
