
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "t_produit.h"

// Constructeur
t_produit* t_produit_init(const char* nom,
						  const double prix,
						  const int qte_stock,
						  t_categorie* categorie)
{
	
	// Validation des entrees
	if (nom == NULL || categorie == NULL)
	{
		return NULL;	// On aurait pu accepter les NULL, mais ici on a décidé que nom
	}

	// Allocation de memoire de l'enregistrement + validation
	t_produit* produit_ptr = (t_produit*)malloc(sizeof(t_produit));

	if (produit_ptr == NULL)
	{
		return NULL;
	}

	// Allocation de memoire pour le nom
	//On ajoute +1 car strlen ne tient pas compte du \0 mais ce-dernier doit faire partie de la chaine
	produit_ptr->nom = (char*)malloc((strlen(nom)+1) * sizeof(char));

	if (produit_ptr->nom == NULL)
	{
		free(produit_ptr);
		return NULL;
	}

	// Allocation de mémoire pour la categorie
	produit_ptr->categorie = (t_categorie*)malloc(sizeof(t_categorie));

	if (produit_ptr->categorie == NULL)
	{
		free(produit_ptr->nom);
		free(produit_ptr);
		return NULL;
	}

	// Mettre a jour les champs de l'instance courante
	strcpy(produit_ptr->nom, nom);
	produit_ptr->prix = prix;
	produit_ptr->qte_stock = qte_stock;
	produit_ptr->categorie = categorie; // Qu'arrive-t-il si quelqu'un libère catégorie ?

	// Retourner la reference
	return produit_ptr;

}