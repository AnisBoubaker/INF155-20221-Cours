
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "etudiant.h"


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






typedef unsigned int uint; //Crée un alias de unsigned int qui est uint
/*
Syntaxe de typedef: 

typedef nom_existant nouveau_nom;
*/



int main(void)
{
	//uint nombre_etudiants; 

	struct etudiant et0;  //Un espace pour stocker l'étudiant est créé!

	etudiant et1;

	etudiant* et2 = NULL; 


	et1.note_tp1 = 0; 


	strcpy(et0.nom ,  "Bazinet");
	strcpy(et0.prenom, "Julie");
	strcpy(et0.code_perm, "BAZJ20021219");
	et0.note_intra = 80;
	et0.note_final = 95;
	et0.note_tp1 = 89;
	et0.note_tp2 = 90;

	etudiant_afficher(et0);

	printf("Moyenne: %.2lf\n", etudiant_moyenne(&et0) );


	etudiant_saisir(&et1);
	

	etudiant_afficher(et1);

	et2 = etudiant_init();

	etudiant_saisir(et2);

	etudiant_afficher(*et2);



	


	//(*et2).note_tp1 = 100;
	et2->note_tp1 = 100;

	system("pause");
	return EXIT_SUCCESS;

}

