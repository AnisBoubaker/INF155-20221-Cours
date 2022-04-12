
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000
#define MAX_ETUDIANTS 60

int main(void)
{
	FILE* mon_fichier; 
	char chaine_lue[TAILLE_MAX]; 
	int nb_etudiants;

	double notes[MAX_ETUDIANTS][3];

	mon_fichier = fopen("notes_h2022.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("L'ouverture n'pas fonctionne!\n");
		system("pause");
		exit(EXIT_FAILURE);
	}
	printf("Fichier ouvert avec succes!\n");


	fscanf(mon_fichier, "%d", &nb_etudiants);
	printf("Le nombre d'etudiant-es: %d\n", nb_etudiants);

	for (int i = 0; i < nb_etudiants; i++)
	{
		fscanf(mon_fichier, "%lf %lf %lf", &notes[i][0], &notes[i][1], &notes[i][2]);
		
	}
	fclose(mon_fichier);

	//Affiche le contenu du tableau avec les valeurs lues dans le fichier
	for (int i = 0; i < nb_etudiants; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%.2lf ", notes[i][j]);
		}
		printf("\n");
	}

	//Ajouter deux points à toutes les évaluations de tout le monde: 
	for (int i = 0; i < nb_etudiants; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			notes[i][j] += 2;
		}
	}

	mon_fichier = fopen("notes_h2022.txt", "w");
	if (mon_fichier == NULL)
	{
		printf("Erreur d'ouverture du fichier en mode ecriture.\n");
		system("pause");
		exit(EXIT_FAILURE);
	}

	notes[nb_etudiants][0] = 50; 
	notes[nb_etudiants][1] = 70;
	notes[nb_etudiants][2] = 90;
	nb_etudiants++;
	
	fprintf(mon_fichier, "%d\n", nb_etudiants);
	for (int i = 0; i < nb_etudiants; i++) 
	{
		fprintf(mon_fichier, "%.2lf %.2lf %.2lf\n", notes[i][0], notes[i][1], notes[i][2]);
	}
	fclose(mon_fichier);

	/* Lecture de chaines de caractères
	while ( fgets(chaine_lue, TAILLE_MAX - 1, mon_fichier) )
	{
		printf("%s", chaine_lue);
	}*/

	

	system("pause");
	return 0; 
}