/*
Exercice: Écrire un programme qui demande à l'usager de saisir une valeur entière
dans l'intervalle [0..100[.
Si la valeur saisie par l'usager n'est pas dans le bon intervalle, lui redemander la saisie
jusqu'à obtention d'une valeur satisfaisante.
Une fois qu'on a obtenu une valeur correcte, terminer le programme en affichant la valeur
saisie.
Exemple:
Veuillez saisir une valeur dans [0..100[: 250
Veuillez saisir une valeur dans [0..100[: 110
Veuillez saisir une valeur dans [0..100[: -20
Veuillez saisir une valeur dans [0..100[: 100
Veuillez saisir une valeur dans [0..100[: -100
Veuillez saisir une valeur dans [0..100[: 50
Vous avez saisi: 50.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie; 

	do
	{
		printf("Veuillez saisir une valeur dans [0..100[: ");
		scanf("%d", &saisie);
	} while (saisie < 0 || saisie >= 100);

	printf("Vous avez saisi: %d\n", saisie);





	system("pause");
	return EXIT_SUCCESS;
}