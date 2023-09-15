#include <stdio.h>
#include <stdlib.h>

int main()
{

    float  A, B;
    printf("entrer la valeur de A :");
    scanf("%f",&A);
    printf("entrer la valeur de B :");
    scanf("%f",&B);

    printf("A + B = %f \n",A+B);
     printf("A - B = %f \n",A-B);
      printf("A * B = %f \n",A*B);
       if(B != 0 )
        printf("A / B = %f \n",A/B);
       else
        printf("la division par 0 est impossible");

    return 0;
}
