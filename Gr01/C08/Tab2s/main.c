
#include <stdio.h>
#include <stdlib.h>


//NE JAMAIS INCLURE LE .C
#include "tab2d.h"



int main(void)
{
	double moyenne; 
	int tab2d[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {5, 7, 10, 9}, {11, 21, 10, 1}, {15, 2, 3, 2} };
	
	int autre_tab2d[20][40]; 
	
	int nb_lignes = 3, nb_colonnes = 4;
	
	printf("La case qui a pour indice 4, 2: %d\n", tab2d[4][2]);

	//for (int ligne = 0; ligne < NB_MAX_LIGNES; ligne++)
	//{ //ligne = 1
	//	for (int colonne = 0; colonne < NB_MAX_COLONNES; colonne++)
	//	{ //colonne = 1
	//		printf("%d\t", tab2d[ligne][colonne]);
	//	}
	//	printf("\n");
	//}
	afficher_tab2d(tab2d, 3, 4);

	//Calculer la moyenne des valeurs du tableau
	/*moyenne = 0;
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			moyenne += tab2d[i][j];
		}
	}
	moyenne /= nb_lignes * nb_colonnes;*/

	printf("La moyenne: %lf\n", moyenne_tab2d(tab2d, 3, 4));

	system("pause");
	return 0;
}


