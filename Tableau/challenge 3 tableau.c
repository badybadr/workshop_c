#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[10];
    int i ;
	printf("Entrer 10 nombres entiers.\n");

	for (i = 0; i < 10; i++)
	{
		printf(" T[%d] =  ", i );
		scanf("%d", &T[i]);
	}

	int temp;

	for ( i = 0; i < 10; i++){
		for (int j = i ; j < 10; j++){
			if (T[i] < T[j])
			{
				temp = T[i];
				T[i] = T[j];
				T[j] = temp;
			}
		}
	}

	//Afficher la liste de tri
	printf("Les nombres de plus grand au plus petit:\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", T[i]);
	}
    return 0;
}
