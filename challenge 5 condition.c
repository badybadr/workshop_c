#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     int N, Annee , Mois , Jrs , Hrs,Min ,Sec , choix ;
    printf("entrer le nombre d'annee ");
    scanf("%d",&N) ;

    printf("choisisez l'unite de temps 1 pour Mois 2 pour Jours, 3 Hrs , 4 Min et 5 pour Sec ") ;
    scanf("%d",&choix) ;

    switch (choix){
    case 1 :
     Mois = 12 * N ;
    printf("il ya %d mois dans ce nombre d'annee :",Mois);
    break;
    case 2 :
      Jrs = 365 * N ;
    printf("il ya %d jour dans ce nombre d'annee :",Jrs);
    break;
    case 3 :
    Hrs = 8760 * N ;
    printf("il ya %d mois dans ce nombre d'annee :",Hrs);
    break;
    case 4 :
    Min = 525600 * N ;
    printf("il ya %d mois dans ce nombre d'annee :",Min);
    break;
    case 5 :
        Sec = 31536000 * N ;
    printf("il ya %d mois dans ce nombre d'annee :",Sec);
    break;
    default :
        printf("choix invalid") ;
        break;

    }
}
