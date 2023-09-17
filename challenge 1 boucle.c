#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , i ;
    printf("entrer un nombre entre 1 et 10  :");
    scanf("%d",&N) ;
    for(i=0;i<=10;i++)
    printf("%d * %d = %d \n",N,i,N*i) ;
    return 0;
}
