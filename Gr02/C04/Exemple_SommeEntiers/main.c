/*
Programme qui fait la somme des entiers entre 0 et n, (n saisi par l'usager)

Exemple: 

Saisir la valeur de n: 100

La somme des entiers entre 1 et 100 est:  5050

1 + 2 + 3 +4 ... + 100

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cpt; 
	int somme;
	int max;

	somme = 0; 

	printf("saisir le max: ");
	scanf("%d", &max);


	for (cpt = 1; cpt <= max; cpt++)
	{
		somme = somme + cpt;
	}

	printf("La somme des entiers entre 1 et %d est: %d\n", max, somme);

	system("pause");
	return 0; 
}