#include <stdio.h>
#include <stdlib.h>

int main()
{
   int longueur = 0;
	float somme = 0;
	float note, moyenne;
	float notes[20];
	int sup = 0;

	printf("Entrer les notes de 0 a 20:\n");
	printf(" N.B: Valeurs hors [0 - 20] arretera la saisie\n");

	// Entrer des valeurs de 0 - 20
	do {
		scanf("%f", &note);

		if (note >= 0 && note <= 20)
		{
			// Remplissage du tableau
			notes[longueur] = note;
			longueur++;

			//calcul des sommes des notes
			somme += note;

		}

	} while (note >= 0 && note <= 20);

	//calcul du moyenne
	moyenne = somme / longueur;

	// Affichage du taille du tableau et la moyenne des notes
	printf("Le nombre des notes: %d\n", longueur);
	printf("La moyenne des notes: %.2f\n", moyenne);
	printf("\n");

	for (int i = 0; i < longueur; i++)
	{
		printf("%.2f: ", notes[i]);

		if (notes[i] > moyenne)
		{
			printf("est sup�rieure � la moyenne.\n");
			sup++;
		}
		else if (notes[i] < moyenne)
		{
			printf("est inf�rieure � la moyenne.\n");
		}
		else
		{
			printf("�gale � la moyenne.\n");
		}
	}

	// Affichage de nombres de notes sup � la moyenne
	printf("\n");
	printf("%d notes sup�rieures � la moyenne.\n", sup);
	printf("\n");

	int max = 0;
	int min = notes[0];
	int indice;
	// Recherche de note plus petite
	for (int i = 0; i < longueur; i++)
	{
		if (min > notes[i])
		{
			min = notes[i];
			indice = i;
		}
	}

	// Affichage de note plus petite et indice
	printf("La note plus petite est: %d\n", min);
	printf("Sa position dans le tableau est la %d\n", indice + 1);

	for (int i = 0; i < longueur; i++)
	{
		if (max < notes[i])
		{
			max = notes[i];
			indice = i;
		}
	}
	// Affichage de note plus grande et indice
	printf("La note plus grande est: %d\n", max);
	printf("Sa position dans le tableau est la %d\n", indice + 1);


    return 0;
}
