
//IMPORTANT : Toujours inclure le .h du module dans le fichier .c
//Toujours entre " ... "
#include "tab2d.h"

void afficher_tab2d(int tablo2d[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	for (int ligne = 0; ligne < nb_lignes; ligne++)
	{
		for (int colonne = 0; colonne < nb_colonnes; colonne++)
		{ //colonne = 1
			printf("%d\t", tablo2d[ligne][colonne]);
		}
		printf("\n");
	}
}

double moyenne_tab2d(int tablo2d[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	double moyenne = 0;
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			moyenne += tablo2d[i][j];
		}
	}
	moyenne /= nb_lignes * nb_colonnes;
	return moyenne;
}