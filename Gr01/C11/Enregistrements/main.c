
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAILLE_MAX 100 
#define TAILLE_CODE_PERM 13

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

//Syntaxe: 
// typedef type_existant nouveau_nom;

typedef unsigned int uint;

void etudiant_afficher(etudiant et);
void etudiant_saisir(etudiant* et);

int main(void)
{
	struct etudiant etudiant0;

	etudiant etudiant1; 

	etudiant1.intra = 100;


	//Mettre Lapierre comme nom 
	strcpy(etudiant0.nom , "Lapierre");
	strcpy(etudiant0.prenom, "Jean");
	strcpy(etudiant0.code_perm, "LAPJ20021023");

	//Notes
	etudiant0.intra = 80;
	etudiant0.final = 90;
	etudiant0.tp1 = 95;
	etudiant0.tp2 = 92;


	
	etudiant_afficher(etudiant0);

	etudiant_saisir(&etudiant1);
	

	etudiant_afficher(etudiant1);

	system("pause");
	return 0;

}


//Le passage d'un enregistrement se fait par copie!
void etudiant_afficher(etudiant et)
{
	printf("**** Fiche de l'etudiant ***\n");
	printf("Nom: %s\n", et.nom);
	printf("Prenom: %s\n", et.prenom);
	printf("Code Permanent: %s\n", et.code_perm);
	printf("Intra: %.2lf\n", et.intra);
	printf("Final: %.2lf\n", et.final);
	printf("TP1: %.2lf\n", et.tp1);
	printf("TP2: %.2lf\n", et.tp2);
}

void etudiant_saisir(etudiant* et)
{
	printf("Saisie d'un-e etudiant-e: \n");
	printf("Nom: ");
	fgets(et->nom, TAILLE_MAX - 1, stdin);
	et->nom[strlen(et->nom) - 1] = '\0';


	printf("Prenom: ");
	fgets((*et).prenom, TAILLE_MAX - 1, stdin);
	(*et).prenom[strlen((*et).prenom) - 1] = '\0';

	printf("Code Permanent: ");
	fgets((*et).code_perm, TAILLE_CODE_PERM - 1, stdin);
	(*et).code_perm[strlen((*et).code_perm) - 1] = '\0';

	printf("Intra: ");
	scanf("%lf", &et->intra);

	printf("Final: ");
	scanf("%lf", &et->final);

	printf("TP1: ");
	scanf("%lf", &et->tp1);

	printf("TP2: ");
	scanf("%lf", &(*et).tp2);
}


/*
Écrire une fonction etudiant_moyenne, qui calcule la moyenne selon 
la pondération: 

Intra: 10%
Final: 40%
TP1: 25%
TP2: 25%
*/