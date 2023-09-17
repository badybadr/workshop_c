#include <stdio.h>
#include <stdlib.h>

int main()
{
      float moyenne ;
    printf("entrer la moyenne d'eleve ");
    scanf("%f",&moyenne) ;

    if ( moyenne < 10 )
        printf("mension recale") ;
   else if( moyenne >= 10 && moyenne < 12 )
   printf("mension passale") ;
   else if ( moyenne >= 12 && moyenne < 14 )
    printf("mension assez bien ") ;
    else if ( moyenne >= 14 && moyenne < 16 )
    printf("mension bien") ;
    else
    printf("mension tres bien") ;
    return 0;
}
