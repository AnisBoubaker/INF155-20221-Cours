#ifndef T_TAB2D__H_
#define T_TAB2D__H_

/*  Un type nommé qui représente un tableau 2D (i.e., une matrice) 

	Ce type encapsule les données et d'autres informations comme le nombre de lignes et de colonnes
	du tableau.

*/

typedef struct t_tab2D
{
	int nb_lignes;
	int nb_colonnes;
	int** data;
} t_tab2D;


// Fonction qui déclare et retourne un pointeur vers un tableau 2D
t_tab2D* t_tab2D_init(const int nb_lignes,		// Le nombre de lignes du tableau 
	                  const int nb_colonnes);	// Le nombre de colonnes du tableau

// Méthode qui fait un affichage formaté d'un tableau 2D encapsulé (NOTE: Plus besoin de passer les dimensions en entrée!)
void t_tab2D_afficher(t_tab2D* un_tableau2D);

#endif