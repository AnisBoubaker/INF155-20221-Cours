
#ifndef ETUDIANT__H_
#define EDUTIANT__H_


#include <stdlib.h>
#include <stdio.h>

#define TAILLE_MAX 100
#define TAILLE_CODE_PERM 13

typedef struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_CODE_PERM];
	double note_tp1;
	double note_tp2;
	double note_intra;
	double note_final;
} etudiant; //Ne pas oublier le ; 



void etudiant_afficher(etudiant et);



void etudiant_saisir(etudiant* et);



double etudiant_moyenne(etudiant* e);



etudiant* etudiant_init(void);

#endif