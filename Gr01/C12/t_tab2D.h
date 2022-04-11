#ifndef T_TAB2D__H_
#define T_TAB2D__H_

/*  Un type nomm� qui repr�sente un tableau 2D (i.e., une matrice) 

	Ce type encapsule les donn�es et d'autres informations comme le nombre de lignes et de colonnes
	du tableau.

*/

typedef struct t_tab2D
{
	int nb_lignes;
	int nb_colonnes;
	int** data;
} t_tab2D;


// Fonction qui d�clare et retourne un pointeur vers un tableau 2D
t_tab2D* t_tab2D_init(const int nb_lignes,		// Le nombre de lignes du tableau 
	                  const int nb_colonnes);	// Le nombre de colonnes du tableau

// M�thode qui fait un affichage format� d'un tableau 2D encapsul� (NOTE: Plus besoin de passer les dimensions en entr�e!)
void t_tab2D_afficher(t_tab2D* un_tableau2D);

#endif