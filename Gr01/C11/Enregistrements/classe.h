#ifndef CLASSE__H_
#define CLASSE__H_

#include "etudiant.h"

#define TAILLE_MAX_NOM 50
#define MAX_ETUDIANTS 60

typedef struct classe
{
	int nb_etudiants; //Taille effective du tableau etudiants
	char nom[TAILLE_MAX_NOM];
	etudiant* etudiants[MAX_ETUDIANTS];
} classe;


classe* classe_init();

void classe_destroy(classe* classe);


/*
Ajoute un étudiant la classe, retourne vrai si ça a fonctionné ou faux sinon.
*/
int classe_ajouter_etudiant( classe* la_classe, const etudiant* et);



double classe_moyenne(const classe* la_classe);

#endif