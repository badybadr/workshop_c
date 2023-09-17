#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 srand(time(NULL));
  int Jour = (rand()%6)+1 ;
  switch(Jour){
  case 1 :
      printf("lundi") ;
      break ;
  case 2 :
      printf("Mardi") ;
      break ;
      case 3 :
      printf("mercredi") ;
      break ;
      case 4 :
      printf("jeudi") ;
      break ;
      case 5 :
      printf("vandredi") ;
      break ;
      case 6 :
      printf("samedi") ;
      break ;
      case 7 :
      printf("dimanche") ;
      break ;
  }

    return 0;
}
