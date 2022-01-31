/*
Exercice2: 

Programme qui demande à l'usager de saisir 5 entiers. Ensuite vous lui affichez la
moyenne des valeurs saisies. 

- Le faire dans un premier temps sans utiliser les boucles avec 5 variables différentes 
de saisie
- Dans un 2e temps, éliminez les 5 variables pour en conserver juste une. 
- Finalement convertir le programme en utilisant les boucles. 

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int saisie; 
	double moyenne; 
	int cpt; 

	int nb_valeurs = 5;


	printf("Combien de valeurs? ");
	scanf("%d", &nb_valeurs);

	moyenne = 0;
	cpt = 0; 
	while (cpt < nb_valeurs )
	{
		printf("Saisir un entier: ");
		scanf("%d", &saisie);
		moyenne = moyenne + saisie;
		cpt++;
	}


	moyenne = moyenne / nb_valeurs;

	printf("La moyenne est: %.2lf \n", moyenne);

	system("pause");
	return EXIT_SUCCESS;
}