#ifndef ETUDIANT__H_
#define ETUDIANT__H_

//D�pendances du module
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


#define TAILLE_MAX 100 
#define TAILLE_CODE_PERM 13

//D�finition du type �tudiant
typedef struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_CODE_PERM];
	double intra;
	double final;
	double tp1;
	double tp2;
} etudiant; //Ne pas oublier ler ;
//typedef struct etudiant etudiant;


//Ensemble des fonction associ�es au type �tudiant

/*
Fonction constructeur
*/
etudiant* etudiant_init(void);


/*
*/
void etudiant_destroy(etudiant* et);


/*
Fonction destructeur
*/
void etudiant_afficher(etudiant et);

/*
*/
void etudiant_saisir(etudiant* et);


/*
*/
double etudiant_moyenne(const etudiant* et);


#endif