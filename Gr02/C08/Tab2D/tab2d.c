
//Important: toujours include le fichier .h du module dans le fichier .c
#include "tab2d.h"


//OBLIGATOIRE: Il faut donner la taille maximale en colonnes du tableau
//qu'on reçoit. 
void afficher_tab2d(int le_tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			printf("%d\t", le_tab[i][j]);
		}
		printf("\n");
	}
}

double moyenne_tab2d(int le_tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes)
{
	int somme = 0;
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			somme += le_tab[i][j];
		}
	}

	return (double)somme / (nb_lignes * nb_colonnes);
}