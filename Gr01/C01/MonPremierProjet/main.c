/*
Programme qui calcule le salaire à verser à un-e employé-e.

Auteur: Anis Boubaker
Date: 20222-01-11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//On commence toujours par la déclaration des variables qu'on
	//va utiliser. 
	double taux_horaire = 0;
	unsigned int nb_heures; 
	double salaire; 


	char mon_caractere = 'A';

	printf("Le contenu de la variable mon_caractere est: %c\n", mon_caractere);
	printf("Le contenu de la variable mon_caractere est: %d\n", mon_caractere);

	//Exemple d'affectation d'une variable à 100.
	nb_heures = 100;
	printf("nb_heures contient: %d\n", nb_heures);



	printf("Taux horaire contient actuellement: %.2lf\n", taux_horaire);

	//Demander le taux horaire
	printf("Saisir le taux horaire: ");
	scanf("%lf", &taux_horaire);

	//Demander le nombre d'heure
	printf("Saisir le nombre d'heure: ");
	scanf("%d", &nb_heures);

	//Calcul du salsire
	salaire = taux_horaire * nb_heures;

	//Affiche le salaire a payer
	printf("Le salaire a payer est: %.2lf\n", salaire);

	system("pause");

	return EXIT_SUCCESS;
}