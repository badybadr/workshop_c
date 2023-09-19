#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[10];
	int i ;
	printf("Entrer 10 nombres entiers :\n");

	for (i = 0; i < 10; i++)
	{
		printf(" T[%d]=  ", i);
		scanf("%d", &T[i]);
	}

	int max = 0;

	//Calculer le max d'elements du tableau
	for (i = 0; i < 10; i++)
	{
		if (T[i] > max)
			max = T[i];
	}

	int min = T[0];
	// Calculer le min d'elements du tableau
	for (i = 0; i < 10; i++)
	{
		if (T[i] < min)
		{
			min = T[i];
		}
	}
	// Afficher les elements du tableayu
	printf("Les elements du tableau:\n T[] = ");

	for(i = 0; i < 10; i++)
	{
		printf("%d",T[i]);
		if(i < 9)
			printf(", ");
	}
	printf("\n");

	// Afficher le max et le min
	printf("Min des nombres = %d \n", min);
	printf("Max des nombres = %d \n", max);


    return 0;
}
