#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "t_tab2D.h"


// Fonction qui d�clare et retourne un pointeur vers un tableau 2D
t_tab2D* t_tab2D_init(const int nb_lignes,
	                  const int nb_colonnes)
{

	// Allouer la m�moire vers l'enregistrement t_tab2D
	t_tab2D* tab2D_ptr = (t_tab2D*)malloc(sizeof(t_tab2D));

	// Valider l'allocation de m�moire
	if (tab2D_ptr == NULL)
	{
		return NULL;
	}

	// Allouer la m�moire pour le tableau 2D encapsul�
	tab2D_ptr->data = (int**)malloc(nb_lignes * sizeof(int*));

	if (tab2D_ptr->data == NULL)
	{
		free(tab2D_ptr); // Lib�rer ce qui est d�j� allou�
		return NULL;
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		tab2D_ptr->data[i] = (int*)malloc(nb_colonnes * sizeof(int)); // La i-�me ligne

		// D�rouler si �chec (Attention! D�rouler dans l'ordre inverse)
		if (tab2D_ptr->data[i] == NULL)
		{ 
			// Lib�rer la m�moire allou�e pour les lignes
			for (int j = 0; j < i; j++)
			{
				free(tab2D_ptr->data[j]);
			}

			// Lib�rer la m�moire allou�e pour pointeur double
			free(tab2D_ptr->data);

			// Lib�rer la m�moire allou�e pour l'enregistrement
			free(tab2D_ptr);

			// Signaler l'�chec avec un pointeur nul
			return NULL;

		}
		
	}

	// Stocker les propri�t�s du tableau
	tab2D_ptr->nb_lignes = nb_lignes;
	tab2D_ptr->nb_colonnes = nb_colonnes;

	// Retourner r�f�rence
	return tab2D_ptr;

}


void t_tab2D_afficher(t_tab2D* un_tableau2D)
{

	// Valider l'entr�e pour ne pas d�r�f�rencer le pointeur nul (== plantage)
	if (un_tableau2D == NULL)
	{
		exit(EXIT_FAILURE);
	}

	// Parcourir la matrice
	for (int i = 0; i < un_tableau2D->nb_lignes; i++)			// Le nombre de lignes est encapsul�
	{
		for (int j = 0; j < un_tableau2D->nb_colonnes; j++)		// Le nombre de colonnes est encapsul�
		{
			printf("%d\t", un_tableau2D->data[i][j]);			// Les donn�es sont encapsul�es
		}

		// Saut de ligne
		printf("\n");

	}

}