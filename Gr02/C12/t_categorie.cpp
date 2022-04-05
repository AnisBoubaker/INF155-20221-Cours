#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "t_categorie.h"
#include <string.h>

// Constructeur
t_categorie* t_categorie_init(const char* nom,
							  const int num_categorie)
{

	// Validation
	if (nom == NULL)
	{
		return NULL;
	}

	// Allouer la memoire pour la categorie
	t_categorie* cat_ptr = (t_categorie*)malloc(sizeof(t_categorie));

	// Validation 
	if (cat_ptr == NULL)
	{
		return NULL;
	}

	// Allocation de mémoire pour le nom
	//On ajoute +1 car strlen ne tient pas compte du \0 mais ce-dernier doit faire partie de la chaine
	cat_ptr->nom = (char*)malloc((strlen(nom)+1) * sizeof(char));

	// Validation 
	if (cat_ptr->nom == NULL)
	{
		free(cat_ptr);
		return NULL;
	}

	// Stocker le nom et le numero de categorie
	strcpy(cat_ptr->nom, nom);
	cat_ptr->num_categorie = num_categorie;

	// Retourner la reference
	return cat_ptr;

}