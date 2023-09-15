#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float  A, B, C,D,S ,M ;
    printf("entrer la valeur de nobre A :");
    scanf("%f",&A);
    printf("entrer la valeur de nombre B :");
    scanf("%f",&B);
     printf("entrer la valeur de nombre C :");
    scanf(" %f",&C);
    printf("entrer la valeur de nombre D :");
    scanf(" %f",&D);
     S = A + B + C + D ;
    printf("La somme des quatre nombres est : %f ",S);
    M = S /4 ;
     printf(" La moyenne  des quatre nombres est : %f ",M);

    return 0;
}
