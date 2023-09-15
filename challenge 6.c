#include <stdio.h>
#include <stdlib.h>

int main()
{
     float R , C ;
     const float Pi = 3.14 ;
     printf("programme qui calcule la circonférence du cercle /n");
     printf("entrer le rayon du cercle ") ;
     scanf("%f",&R);
     C = 2 * Pi * R ;
     printf("la circonference du cercle est : %f ",C) ;
    return 0;
}
