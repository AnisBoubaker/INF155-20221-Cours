#ifndef T_PRODUIT__H_
#define T_PRODUIT__H_

#include "t_categorie.h"

typedef struct t_produit
{
	char* nom;
	double prix;
	int qte_stock;
	t_categorie* categorie;
} t_produit;

// Constructeur
t_produit* t_produit_init(const char* nom,
						  const double prix,
						  const int qte_stock,
						  t_categorie* categorie);

#endif
