/*
Exercice: En utilisant l'exemple de calcul de la factorielle, �crire un programme qui
calcule le nombre de combinaisons possibles de k �l�ments parmi n �l�ments. 

La formule est la suivante: Nb Combinaisons = n! / (k! * (n-k)! )

n = 6 �l�ments
k = 2 �l�ments par tirage

nombre de combinaisons = 6! / ( 2! * 4!)

Votre programme doit demander � l'usager le nombre total (n) ainsi que le nombre d'�l�ments
� tirer (k).

Rappel: n! veut dire factorielle de n en math�matiques. Cet op�rateur n'existe pas 
en langage C, il faut le calculer vous m�me.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int factorielle(int n)
{
	//Supposer que n = 5
	int cpt; 
	int fact = 1;
	
	for (cpt = 1; cpt <= n ; cpt++)
	{
		fact = fact * cpt; 
	}

	return fact;
}


int main(void)
{
	int n; 
	int k; 
	int fact_n; 
	int fact_k; 
	int fact_nk;

	int nb_combinaisons; 

	int cpt; 

	printf("Valeur de n: ");
	scanf("%d", &n);

	printf("Valeur de k: ");
	scanf("%d", &k);

	/*fact_n = 1; 
	for (cpt = 1; cpt <= n; cpt++)
	{
		fact_n = fact_n * cpt;
	}*/

	fact_n = factorielle( n );

	/*fact_k = 1;
	for (cpt = 1; cpt <= k; cpt++)
	{
		fact_k = fact_k * cpt;
	}*/
	fact_k = factorielle(k);

	/*fact_nk = 1;
	for (cpt = 1; cpt <= n-k ; cpt++)
	{
		fact_nk = fact_nk * cpt;
	}*/

	fact_nk = factorielle(n - k);

	nb_combinaisons = fact_n / (fact_k * fact_nk);

	printf("Le nombre de combinaisons possibles est: %d\n", nb_combinaisons);

	system("pause");
	return EXIT_SUCCESS;
}