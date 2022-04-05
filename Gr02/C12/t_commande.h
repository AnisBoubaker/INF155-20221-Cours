#ifndef T_COMMANDE__H_
#define T_COMMANDE__H_

#include "t_produit.h"

typedef struct t_commande
{	
	t_produit** un_produit;
	int* qte;
	double sous_total;
} t_commande;

#endif