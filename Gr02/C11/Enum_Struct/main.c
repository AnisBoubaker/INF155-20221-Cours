
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100
#define TAILLE_CODE_PERM 13

//Définit le type étudiant. AUCUNE ALLOCATION MEMOIRE POUR L'INSTANT!
/*
struct etudiant
{
	char nom[TAILLE_MAX];
	char prenom[TAILLE_MAX];
	char code_perm[TAILLE_CODE_PERM];
	double note_tp1;
	double note_tp2;
	double note_intra;
	double note_final;
}; //Ne pas oublier le ; 

typedef struct etudiant etudiant;
*/

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




typedef unsigned int uint; //Crée un alias de unsigned int qui est uint
/*
Syntaxe de typedef: 

typedef nom_existant nouveau_nom;
*/

void etudiant_afficher(etudiant et);

void etudiant_saisir(etudiant* et);

int main(void)
{
	//uint nombre_etudiants; 

	struct etudiant et0;  //Un espace pour stocker l'étudiant est créé!

	etudiant et1;

	et1.note_tp1 = 0; 


	strcpy(et0.nom ,  "Bazinet");
	strcpy(et0.prenom, "Julie");
	strcpy(et0.code_perm, "BAZJ20021219");
	et0.note_intra = 80;
	et0.note_final = 95;
	et0.note_tp1 = 89;
	et0.note_tp2 = 90;

	etudiant_afficher(et0);

	etudiant_saisir(&et1);
	

	etudiant_afficher(et1);



	system("pause");
	return EXIT_SUCCESS;

}

void etudiant_afficher(etudiant et)
{
	printf("*** Fiche de l'etudiant-e ***\n");
	printf("Nom: %s\n", et.nom);
	printf("Prenom: %s\n", et.prenom);
	printf("Code permanent: %s\n", et.code_perm);
	printf("Intra: %.2lf\n", et.note_intra);
	printf("Final: %.2lf\n", et.note_final);
	printf("TP1: %.2lf\n", et.note_tp1);
	printf("Tp2: %.2lf\n", et.note_tp2);
}

void etudiant_saisir(etudiant* et)
{
	printf("*** Saisie des informations de l'etudiant-e *** \n");
	printf("Nom: ");
	fgets(et->nom, TAILLE_MAX, stdin);
	et->nom[strlen(et->nom) - 1] = '\0';

	printf("Prenom: ");
	fgets(et->prenom, TAILLE_MAX, stdin);
	et->prenom[strlen(et->prenom) - 1] = '\0';

	printf("Code permanent: ");
	fgets(et->code_perm, TAILLE_CODE_PERM, stdin);
	(*et).code_perm[strlen((*et).code_perm) - 1] = '\0';

	printf("Note Intra: ");
	scanf("%lf", &(et->note_intra));

	printf("Note Final: ");
	scanf("%lf", &(et->note_final));

	printf("Note TP1: ");
	scanf("%lf", &(et->note_tp1));

	printf("Note TP2: ");
	scanf("%lf", &(et->note_tp2));
}


/*
Écrire la fonction etudiant_moyenne qui calcule la moyenne obtenue
par un étudiant, en supposant: 
Intra: 10%
Final: 40%
TP1: 25%
TP2: 25%
*/