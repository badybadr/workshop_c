#include <stdio.h>
#include <stdlib.h>

int main()
{
     float  MN , Xm ,Ym , Xn,Yn ;
    printf("entrer la valeur de nobre Xm:");
    scanf("%f",&Xm);
    printf("entrer la valeur de nombre Ym :");
    scanf("%f",&Ym);
     printf("entrer la valeur de nombre Xn :");
    scanf(" %f",&Xn);
    printf("entrer la valeur de nombre Yn :");
    scanf(" %f",&Yn);
     MN =  sqrt((pow(Xn-Xm,2)) + (pow(Yn-Ym,2))) ;
     printf("la distance entre MN est : %f ",MN);

    return 0;
}
