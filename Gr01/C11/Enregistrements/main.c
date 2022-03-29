
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "etudiant.h"
#include "classe.h"


//Syntaxe: 
// typedef type_existant nouveau_nom;

typedef unsigned int uint;




int main(void)
{
	struct etudiant etudiant0;
	etudiant etudiant1; 
	etudiant* etudiant2; 

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

	printf("La moyenne de l'etudiant-e saisi-e: %lf\n", etudiant_moyenne(&etudiant1));

	//Allocation dynamique d'un étudiant
	etudiant2 = (etudiant*)malloc(sizeof(etudiant));
	if (etudiant2 == NULL)
	{
		printf("Plus de place pour allouer un etudiant!\n");
		exit(EXIT_FAILURE);
	}

	//Mettre 80 pour l'intra de etudiant 2:
	etudiant2->intra = 80;

	//void etudiant_saisir(etudiant* et)
	etudiant_saisir(etudiant2);

	etudiant_afficher(*etudiant2);



	etudiant* etudiant3 = NULL;
	
	etudiant3 = etudiant_init();

	//void etudiant_saisir(etudiant* et)
	etudiant_saisir(etudiant3);



	// Creation d'une classe

	classe* ma_classe = classe_init();



	system("pause");
	return 0;

}
