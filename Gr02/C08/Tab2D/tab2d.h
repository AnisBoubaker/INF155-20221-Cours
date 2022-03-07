//Important: Ajouter le garde du module au tout début du fichier
#ifndef TAB2D__H_
#define TAB2D__H_



#define MAX_COLONNES 100
#define MAX_LIGNES 50

void afficher_tab2d(int le_tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);


double moyenne_tab2d(int le_tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);


//À la toute fin du fichier
#endif