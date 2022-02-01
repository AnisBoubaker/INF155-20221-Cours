/*
Exercice: En utilisant l'exemple de calcul de la factorielle, écrire un programme qui
calcule le nombre de combinaisons possibles de k éléments parmi n éléments.
La formule est la suivante: Nb Combinaisons = n! / (k! * (n-k)! )
n = 6 éléments
k = 2 éléments par tirage
nombre de combinaisons = 6! / ( 2! * 4!)
Votre programme doit demander à l'usager le nombre total (n) ainsi que le nombre d'éléments
à tirer (k).
Rappel: n! veut dire factorielle de n en mathématiques. Cet opérateur n'existe pas
en langage C, il faut le calculer vous même.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


//Définition de la fonction
int factorielle(int nb)
{
	int resultat;
	int i; 

	resultat = 1;
	for (i = 1; i <= nb; i++)
	{
		resultat *= i;
	}

	return resultat; 
}


/*
Calcule le nombre de combinaisons possibles si on itre nb_par_tirage éléments
parmi nb_elements. 
*/
int nb_combinaisons(int nb_elements, int nb_par_tirage)
{

}




int main(void)
{
	int n; //Nombre de boules
	int k;  //Boules tirées par tirage
	int i; //Compteur de boucle
	
	int fact_n;
	int fact_k;
	int fact_n_k;

	int resultat; 

	printf("Entrer le nombre d'elements: ");
	scanf("%d", &n);

	printf("Entrer le nombre d'elements par tirage: ");
	scanf("%d", &k);

	/*fact_n = 1;
	for (i = 1; i <= n; i++)
	{
		fact_n = fact_n * i;
	}
	
	fact_k = 1;
	for (i = 1; i <= k; i++)
	{
		fact_k = fact_k * i;
	}

	fact_n_k = 1;
	for (i = 1; i <= n-k; i++)
	{
		fact_n_k = fact_n_k * i;
	}
	*/

	int x; 

	x = factorielle(10);

	fact_n = factorielle(n);
	fact_k = factorielle(k);
	fact_n_k = factorielle(n - k);
	

	resultat = fact_n / (fact_k * fact_n_k);

	printf("Le nombre de combinaisons possibles: %d\n", resultat);

	system("pause");
	return EXIT_SUCCESS;
}