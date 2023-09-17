#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A , B ;
    int menu ,i ;
    char choix ;
    int repeter = 1 ;
    do{
    const float Pi = 3.14 ;
    printf("----Calculatrice Menu ---\n") ;
    printf("1 - La somme  \n" ) ;
    printf("2- La soustraction \n") ;
    printf("3 - La multiplication \n" ) ;
    printf("4 - La division \n" ) ;
    printf("5 - Le reste d'une division \n" ) ;
    printf("6 - la puissance    \n  ") ;
    printf("7 - la racine carree \n  ") ;
     printf("8 - la logarithme  \n  ") ;

      printf("quelle operation voulez  vous faire :");
       scanf("%d",&menu) ;
       printf(" \n") ;
     printf("entrer la valeur du premier nombre :%f ",A);
     scanf("%f",&A) ;
     printf("entrer la valeur du deuxieme nombre :%f ",B);
     scanf("%f",&B) ;
     switch (menu){
     case 1 :printf(" %f + %f = %.2f",A,B,A+B) ;
     break ;
      case 2 :printf("%f - %f = %.2f",A,B,A-B) ;
     break ;
     case 3 :printf("%f x %f = %.2f",A,B,A*B) ;
     break ;
     case 4 :printf("%f / %f = %.2f",A,B,A/B) ;
     break ;
     case 5 :printf(" %f %% %f = %.2f",A,B,fmod(A,B)) ;
     break ;
      case 6 :printf(" %f puissance %f = %.2f",A,B,pow(A,B)) ;
     break ;
      case 7 :{
          if(A>0){
               printf("la racine carre du premier nombre est : %f  \n",sqrt(A)) ;
             }else if (B > 0) {
             printf("la racine carre du dexieme nombre est : %f  ",sqrt(B)) ;
             }   else {
                printf("la racine carree n'accept pas des nombres negatifs " );
             }
      }

     break ;
      case 8 :printf(" logarithme de premier nombre est : %d  /// et de deuxieme est %d ",log(A),log(B)) ;
     break ;
     default : printf("l'operation demander est introuvable ") ;
     break ;

}
        printf("\n") ;
     printf("si tu veut faire une autre operation taper (O/N): \n") ;
     scanf(" %c",&choix) ;
}while(choix != 'N') ;


    return 0;


}
