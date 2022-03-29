#include "etudiant.h"



//Fonction Constructeur pour le type etudiant
etudiant* etudiant_init(void)
{
	etudiant* nouvel_etudiant;

	nouvel_etudiant = (etudiant*)malloc(sizeof(etudiant));
	if (nouvel_etudiant == NULL)
	{
		printf("Erreur d'allocation pour l'étudiant.\n");
		exit(EXIT_FAILURE);
	}
	return nouvel_etudiant;
}


void etudiant_destroy(etudiant* et)
{
	free(et);
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

/*
Version 1: Passage par copie
*/
/*double etudiant_moyenne(etudiant et)
{
	double moyenne;

	moyenne = et.intra * 0.1 + et.final * 0.4 + et.tp1 * 0.25 + et.tp2 * 0.25;

	et.intra = 0;

	return moyenne;

}*/

/*
Version 1: Passage par référence (par pointeur)
*/
double etudiant_moyenne(const etudiant* et)
{
	double moyenne;

	moyenne = et->intra * 0.1 + et->final * 0.4 + et->tp1 * 0.25 + et->tp2 * 0.25;

	return moyenne;

}