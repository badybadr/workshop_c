#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C , F ;
    printf("enter la temperature en Fahrenheit : ");
    scanf("%f",&F) ;
    C = (F - 32)/1.8 ;
    printf("la temperature en celcuis est : %.2f \n",C) ;

     if (C >= -10 && C < 5){
       printf("la temperature est tres froid \n" ) ;
       }
     else if(C >= 5 && C <= 17 )
       printf("la temperature est froid \n") ;

        else if(C >= 17 && C <= 34 )
       printf("la temperature est chaud \n") ;

       else
       printf("la temperature est tres chaud \n" ) ;

    return 0;
}
