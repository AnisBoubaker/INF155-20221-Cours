/*
Écrire un programme qui demande à l'usager de saisir un entier < 15  

Ensuite calculer la factorielle du nombre donné. 

Rappel:

n! = 1 * 2 *3 * ... * n


Exemple: 
Saisir un entier < 15: 5
Factorielle de 5 = 120

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max;
	int i; 
	int resultat = 1; 

	printf("Entrer un entier <15: ");
	scanf("%d", &max);

	for (i = 1; i <= max; i++)
	{
		resultat = resultat * i;
	}

	printf("La factorielle de %d est: %d\n", max, resultat);

	system("pause");
	return EXIT_SUCCESS;
}