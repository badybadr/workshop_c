#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     int J , M , A  ;
  printf("entrer la date jj/MM/AAAA") ;
    scanf("%d/%d/%d",&J,&M,&A) ;
     switch(M){
 case 1 :
    printf("Janvier ");
    break;
 case 2 :
    printf("fevrier");
    break;
      case 3 :
    printf("mars");
    break;
     case 4 :
    printf("avril");
    break;
     case 5 :
    printf("mai");
    break;
     case 6:
    printf("juin");
    break;
     case 7 :
    printf("juillet");
    break;
     case 8 :
    printf("Aout");
    break;
     case 9 :
    printf("novembre");
    break;
     case 10 :
    printf("octobre");
    break;
     case 11 :
    printf("septembre");
    break;
    case 12 :
    printf("decembre");
    break;
     default :
     printf("nombre incorrect") ;
     }

    return 0;
}
