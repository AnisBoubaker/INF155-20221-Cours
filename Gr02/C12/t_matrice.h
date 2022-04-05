#ifndef T_MATRICE__H_
#define T_MATRICE__H_

// Un type qui représente un tableau 2D (i.e., une matrice) d'entiers
typedef int** matrice;

// Une fonction qui déclare un tableau 2D et en retourne une référence
matrice t_matrice_init(const int nb_ligne,			// Nombre de lignes de la matrice
	                   const int nb_colonnes);		// Nombre  de colonnes de la matrice

// Une fonction qui fait un affichage formaté d'une matrice 
void t_matrice_afficher(matrice matrice_ptr,		// Pointeur vers la matrice
						const int nb_lignes,		// Le nombre de lignes de la matrice
						const int nb_colonnes);		// Le nombre de colonnes de la matrice

#endif
