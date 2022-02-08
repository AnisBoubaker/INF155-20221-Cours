/*
Définissez une fonction nommée min_trois  qui reçoit trois valeurs réelles en paramètre. 
La fonction doit retourner la plus petite valeur parmi les trois.

Le prototype de votre fonction doit être le suivant:

double min_trois(double val1, double val2, double val3)

Ensuite, écrivez un programme main où vous demandez à l'usager de saisir trois valeurs et 
vous lui affichez la plus petite parmi les trois valeurs saisies. Bien sûr, vous devez faire 
appel à votre fonction depuis votre main.

Rappel: Dans votre programme, vous devez écrire votre fonction au dessus du main (pour l'instant).
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


double min_trois(double val1, double val2, double val3)
{
	double min = val1; 

	printf("Calcul du min: ");

	if (val2 < min)
	{
		min = val2;
	}


	if (val3 < min)
	{
		min = val3; 
	}

	return min;
}


int afficher_menu(void)
{
	int choix; 
	printf("1. Nouveau client\n");
	printf("2. Modifier client existant\n");
	printf("3. Supprimer un client\n");
	printf("9. Quitter\n");

	scanf("%d", &choix);

	return choix;
}


void bidon(int une_valeur)
{
	une_valeur = une_valeur * 100; 
}

int main(void)
{

	int ma_var = 10; 

	bidon(ma_var);

	printf("%d", ma_var);


	/*double val1, val2, val3; 
	double le_min;
	int choix;

	printf("Saisir la vakleur 1: ");
	scanf("%lf", &val1);

	printf("Saisir la vakleur 2: ");
	scanf("%lf", &val2);

	printf("Saisir la vakleur 3: ");
	scanf("%lf", &val3);

	//Inutile, la valeur retournée par la fonction est perdue. 
	//min_trois(v1, v2, v3); 

	le_min = min_trois(val1, val2, val3);

	printf("La plus petite valeur: %lf\n",  le_min  );


	//Affichage du menu
	choix = afficher_menu();

	printf("Vous avez choisi: %d\n", choix);*/

	system("pause");
	return EXIT_SUCCESS;
}