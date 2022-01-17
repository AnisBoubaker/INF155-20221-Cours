/*
Demande a l'usager la saisie d'une coordonnee d'un point, le programme
affiche ensuite le cadran où se trouve le point

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//Division entiere
	int nb_etudiants;
	int etudiants_par_groupe; //Nombre d'étudiants permis dans chacun des groupes
	int moy_nb_etudiants_par_groue;
	int reste; 

	nb_etudiants = 10;
	etudiants_par_groupe = 3;

	//Calcul de la répartition par groupe
	moy_nb_etudiants_par_groue = nb_etudiants / etudiants_par_groupe;
	reste = nb_etudiants % etudiants_par_groupe;


	//Affichage des resultats
	printf("Etudiants par groupe: %d\n", moy_nb_etudiants_par_groue);
	printf("Etudiants solitaires: %d\n", reste);
	 

	/*
	//Division réelle
	int nb_etudiants; 
	int etudiants_par_groupe; 
	double moy_nb_etudiants_par_groue; 

	nb_etudiants = 10;
	etudiants_par_groupe = 3;

	moy_nb_etudiants_par_groue = (double)nb_etudiants / etudiants_par_groupe;

	printf("Etudiants par groupe: %.3lf\n", moy_nb_etudiants_par_groue);
	*/


	system("pause");
	return EXIT_SUCCESS;

}