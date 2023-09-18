#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k , j,L ;

    printf("Entrer le nombre de lignes : ");
    scanf("%d", &L);

    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L - i; j++)
            printf(" ");

        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");

        printf("\n");
    }
    return 0;
}
