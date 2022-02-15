/*
Exemple  illustratif de l'utilisation de tableaux � une dimension
*/

#define _CRT_SECURE_NO_WARNINGS
//Standard input/output (contient printf, scanf, entre autres). 
#include <stdio.h> 
//Standard library (contient des fonctions g�n�rique et des constantes
//fr�quemment utilis�es)
#include <stdlib.h>

#define NB_MAX_ETUDIANTS 60



/*
D�claration des prototypes
*/
double calcul_moyenne(double tab[], int taille);


int main(void)
{
	double temperature = -16.5;
	int nb_etudiants; 
	//D�claration d'un tableau de 45 cases de valeurs r�elles
	double notes[NB_MAX_ETUDIANTS] = {0};
	//Taille maximale : 60 (NB_MAX_ETUDIANTS)
	//Taille effective : 0


	//Ce tableau aura une taille de 3, car la taille a �t� d�duite � partir des valeurs initiales.
	int un_tab[] = {10, 20, 30};

	
	double moyenne; 

	do
	{
		printf("Nombre d'�tudiants (< %d): ", NB_MAX_ETUDIANTS);
		scanf("%d", &nb_etudiants);
	} while (nb_etudiants <= 0 || nb_etudiants > NB_MAX_ETUDIANTS);

	//Taille effective = nb_etudiants

	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("Saisir la note de l'etudiant %d: ", i);
		scanf("%lf", &notes[i]);
	}

	//Parcours le tableau et on met la valeur 10 dans chaque case. 
	/*for (int i = 0; i < NB_MAX_ETUDIANTS; i++)
	{
		notes[i] = 10;
	}*/
	
	//Parcours le tableau et affiche le contenu de chaque case
	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("La case ayant pour indice %d contient: %lf\n", i, notes[i]);
	}


	moyenne = calcul_moyenne(notes, nb_etudiants );


	//Parcours le tableau et affiche le contenu de chaque case
	for (int i = 0; i < nb_etudiants; i++)
	{
		printf("La case ayant pour indice %d contient: %lf\n", i, notes[i]);
	}

	printf("La moyenne du groupe est: %lf\n", moyenne);

	//On affecte la valeur 85 � la case du tableau ayant pour indice 2
	notes[2] = 85;


	//printf("La case ayant pour indice 2 contient: %lf\n", notes[2]);

	/*double et1, et2, et3, et4, et5; 

	printf("Saisir la note de l'�tudiant 1: ");
	scanf("%lf", &et1);
	
	printf("Saisir la note de l'�tudiant 2: ");
	scanf("%lf", &et2);

	printf("Saisir la note de l'�tudiant 3: ");
	scanf("%lf", &et3);

	printf("Saisir la note de l'�tudiant 4: ");
	scanf("%lf", &et4);

	printf("Saisir la note de l'�tudiant 5: ");
	scanf("%lf", &et5);*/

	system("pause");
	return 0;
}


double calcul_moyenne(double tab[], int taille)
{
	double moyenne = 0; 

	for (int i = 0; i < taille; i++)
	{
		moyenne += tab[i];
	}

	moyenne /= taille;

	/* A ne pas faire: les valeurs du tableau original sont modifi�es!  */
	for (int i = 0; i < taille; i++)
	{
		tab[i] = 0;
	}

	return moyenne; 
}