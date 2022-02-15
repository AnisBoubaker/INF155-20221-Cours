
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NB_MAX_ETUDIANTS 60

double moyenne(double un_tab[], int taille);

int main(void)
{
	//Déclaration d'un tableau pour stocker les notes de 40 étudiants au maximum
	double notes[NB_MAX_ETUDIANTS] = { 100, 78, 56, 89, 90 };
	int nb_notes_effectives = 0; 
	double la_moyenne; 

	double saisie = 0; 

	while( saisie != -1 && nb_notes_effectives < NB_MAX_ETUDIANTS )
	{ 
		printf("Saisir la note du prochain étudiant (-1 pour terminer: ");
		scanf("%lf", &saisie);
		if (saisie != -1)
		{
			notes[nb_notes_effectives] = saisie; 
			nb_notes_effectives++;
		}
	}

	//Calcul de moyenne
	la_moyenne = moyenne(notes, nb_notes_effectives);

	for (int i = 0; i < nb_notes_effectives; i++)
	{
		printf("La case ayant pour indice %d contient: %lf\n", i, notes[i]);
	}
	
	

	printf("La moyenne: %lf", la_moyenne);




	/*double et1, et2, et3, et4, et5;

	printf("Note de l'intra de etudiant 1: ");
	scanf("%lf", &et1);

	printf("Note de l'intra de etudiant 2: ");
	scanf("%lf", &et2);

	printf("Note de l'intra de etudiant 3: ");
	scanf("%lf", &et3);

	printf("Note de l'intra de etudiant 4: ");
	scanf("%lf", &et4);

	printf("Note de l'intra de etudiant 5: ");
	scanf("%lf", &et5);
	*/

	system("pause");
	return EXIT_SUCCESS;
}


//Crochets vides pour signifier que un_tab est un tableau qui est reçu en paramètre,
//Le paramètre taille est la taille effective du tableau 
double moyenne(double un_tab[], int taille)
{
	double moyenne = 0;

	for (int i = 0; i < taille; i++)
	{
		moyenne += un_tab[i];
	}
	moyenne /= taille;

	un_tab[0] = 0;


	return moyenne;
}