/****************************************************************************************

Auteur(e) :
Dernière Modification :
Fichier :

Écrire description ici

*****************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "t_matrice.h"
#include "t_tab2D.h"

#include "t_categorie.h"
#include "t_produit.h"

/****************************************************************************************
*                               DÉFINTION DES CONSTANTES                                *
****************************************************************************************/

/****************************************************************************************
*                           DÉFINTION DU PRGORAMME PRINCIPALE                           *
****************************************************************************************/

/*
MAIN

Écrire description ici

Paramètres :
- Aucun

Retour :
- Aucun

*/

// Série d'exemples pour l'étude de cas
int main(void)
{

	t_categorie* une_categorie = t_categorie_init("Fruit", 123);

	t_produit* un_produit = t_produit_init("Banane", 2.25, 5, une_categorie);

	// Exemple d'affichage (on pourrait en faire une méthode)
	printf("Nom du produit    : %s\n", un_produit->nom);
	printf("Prix du produit   : %.2f $\n", un_produit->prix);
	printf("Quantite en stock : %d\n", un_produit->qte_stock);

	// Portez attention à la notation ici, car on déréférence deux fois de suite
	printf("Categorie         : %s\n", un_produit->categorie->nom); 
	printf("Numero            : %d\n", un_produit->categorie->num_categorie);

	system("pause");
	return EXIT_SUCCESS;
}


// Série d'exemples pour la première partie du cours sur les tableaux 2D
int main_tableaux2D(void)
{

	// Dimensions de la matrice à initialiser
	const int nb_lignes = 5;
	const int nb_colonnes = 5;

	// Déclarer une matrice 5 X 5
	matrice une_matrice = t_matrice_init(nb_lignes, nb_colonnes);

	// Initialiser les valeurs de la matrice
	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < nb_colonnes; j++)
		{
			une_matrice[i][j] = i * j;
		}
	}

	// Afficher la matrice
	t_matrice_afficher(une_matrice, nb_lignes, nb_colonnes);

	/*
		Tableau 2D encapsulé dans un enregistrement. Cet exemple
		est équivalent au précédent à la différence que le tableau
		est désormais encapsulé avec ces dimensions dans un 
		enregistrement.
	*/

	printf("\n");

	t_tab2D* un_tableau2D = t_tab2D_init(nb_lignes, nb_colonnes);

	for (int i = 0; i < un_tableau2D->nb_lignes; i++)
	{
		for (int j = 0; j < un_tableau2D->nb_colonnes; j++)
		{
			un_tableau2D->data[i][j] = i * j;
		}
	}

	t_tab2D_afficher(un_tableau2D);

	system("pause");
	return EXIT_SUCCESS;
}
