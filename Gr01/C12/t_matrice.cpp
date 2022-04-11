#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "t_matrice.h"


matrice t_matrice_init(const int nb_lignes, const int nb_colonnes)
{

	// Allouer de la m�moire pour le pointer vers la matrice
	matrice matrice_ptr = (matrice)malloc(nb_lignes * sizeof(int*));

	// Validation de l'allocation
	if (matrice_ptr == NULL)
	{
		return NULL;
	}

	// Allouer la m�moire pour chacune des lignes
	for (int i = 0; i < nb_lignes; i++)
	{

		// Allouer la m�moire pour une ligne
		matrice_ptr[i] = (int*)malloc(nb_colonnes * sizeof(int));

		// Valider l'allocation -> Que faire si cela ne fonctionne pas?
		if (matrice_ptr[i] == NULL)
		{

			// Lib�rer les lignes d�j� allou�es  
			for (int j = 0; j < i; j++)
			{
				free(matrice_ptr[j]);
			}

			// Lib�rer la m�moire pour le pointer vers la matrice (Attention, faites ceci ap�s!)
			free(matrice_ptr);

			// Signaler l'�chec par le retour d'un pointeur nul
			return NULL;

		}

	}

	// Retourner la r�f�rence vers la matrice
	return matrice_ptr;

}


void t_matrice_afficher(matrice matrice_ptr,	
						const int nb_lignes,		
						const int nb_colonnes)		
{

	// Valider l'entr�e pour ne pas d�r�f�rencer le pointeur nul (== plantage)
	if (matrice_ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	// Parcourir la matrice
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			printf("%d\t", matrice_ptr[i][j]);
		}

		// Saut de ligne
		printf("\n");

	}

}