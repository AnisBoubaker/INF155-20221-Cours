#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "t_tab2D.h"


// Fonction qui déclare et retourne un pointeur vers un tableau 2D
t_tab2D* t_tab2D_init(const int nb_lignes,
	                  const int nb_colonnes)
{

	// Allouer la mémoire vers l'enregistrement t_tab2D
	t_tab2D* tab2D_ptr = (t_tab2D*)malloc(sizeof(t_tab2D));

	// Valider l'allocation de mémoire
	if (tab2D_ptr == NULL)
	{
		return NULL;
	}

	// Allouer la mémoire pour le tableau 2D encapsulé
	tab2D_ptr->data = (int**)malloc(nb_lignes * sizeof(int*));

	if (tab2D_ptr->data == NULL)
	{
		free(tab2D_ptr); // Libérer ce qui est déjà alloué
		return NULL;
	}

	for (int i = 0; i < nb_lignes; i++)
	{
		tab2D_ptr->data[i] = (int*)malloc(nb_colonnes * sizeof(int)); // La i-ème ligne

		// Dérouler si échec (Attention! Dérouler dans l'ordre inverse)
		if (tab2D_ptr->data[i] == NULL)
		{ 
			// Libérer la mémoire allouée pour les lignes
			for (int j = 0; j < i; j++)
			{
				free(tab2D_ptr->data[j]);
			}

			// Libérer la mémoire allouée pour pointeur double
			free(tab2D_ptr->data);

			// Libérer la mémoire allouée pour l'enregistrement
			free(tab2D_ptr);

			// Signaler l'échec avec un pointeur nul
			return NULL;

		}
		
	}

	// Stocker les propriétés du tableau
	tab2D_ptr->nb_lignes = nb_lignes;
	tab2D_ptr->nb_colonnes = nb_colonnes;

	// Retourner référence
	return tab2D_ptr;

}


void t_tab2D_afficher(t_tab2D* un_tableau2D)
{

	// Valider l'entrée pour ne pas déréférencer le pointeur nul (== plantage)
	if (un_tableau2D == NULL)
	{
		exit(EXIT_FAILURE);
	}

	// Parcourir la matrice
	for (int i = 0; i < un_tableau2D->nb_lignes; i++)			// Le nombre de lignes est encapsulé
	{
		for (int j = 0; j < un_tableau2D->nb_colonnes; j++)		// Le nombre de colonnes est encapsulé
		{
			printf("%d\t", un_tableau2D->data[i][j]);			// Les données sont encapsulées
		}

		// Saut de ligne
		printf("\n");

	}

}