#ifndef T_CATEGORIE__H_
#define T_CATEGORIE__H_

typedef struct t_categorie
{
	char* nom;				// Le nom de la categorie
	int num_categorie;		// Le numero de la categorie
} t_categorie;

// Constructeur
t_categorie* t_categorie_init(const char* nom,
						      const int num_categorie);

#endif