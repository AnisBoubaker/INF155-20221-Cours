
//La garde du module: IMPORTANT dans tout fichier .h
#ifndef TAB2D__H_
#define TAB2D__H_



#define NB_MAX_LIGNES 6
#define NB_MAX_COLONNES 5

/*

*/
void afficher_tab2d(int tablo2d[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);



/*

*/
double moyenne_tab2d(int tablo2d[][NB_MAX_COLONNES], int nb_lignes, int nb_colonnes);


//Derniere ligne du fichier .h
#endif