#include "classe.h"


classe* classe_init()
{
	classe* nouvelle_classe;

	nouvelle_classe = (classe*)malloc(sizeof(classe));
	if (nouvelle_classe == NULL)
	{
		printf("Erreur d'allocation!");
		exit(EXIT_FAILURE);
	}

	//Initialisation des champs
	nouvelle_classe->nb_etudiants = 0;

	return nouvelle_classe;
}

void classe_destroy(classe* classe)
{
	free(classe);
}

//typedef struct classe
//{
//	int nb_etudiants; //Taille effective du tableau etudiants
//	char nom[TAILLE_MAX_NOM];
//	etudiant* etudiants[MAX_ETUDIANTS];
//} classe;

int classe_ajouter_etudiant(classe* la_classe, const etudiant* et)
{
	if (la_classe->nb_etudiants >= MAX_ETUDIANTS)
	{
		return 0; 
	}


	la_classe->etudiants[la_classe->nb_etudiants] = et;
	la_classe->nb_etudiants++;

	return 1; 
}

double classe_moyenne(const classe* la_classe)
{
	double somme = 0; 
	for (int i = 0; i < la_classe->nb_etudiants; i++)
	{
		somme += etudiant_moyenne(la_classe->etudiants[i]);
	}
	return somme / la_classe->nb_etudiants;
}