/*

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 500
#define NB_LIGNES_MAX 100

int main(void)
{
	FILE* mon_fichier;
	int nb_lignes; 
	//int val0, val1, val2, val3, val4;
	int valeurs[NB_LIGNES_MAX][5];

	mon_fichier = fopen("donnees.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Erreur de lecture du fichier!");
		system("pause");
		exit(EXIT_FAILURE);
	}

	fscanf(mon_fichier, "%d", &nb_lignes);

	printf("Nombre de lignes du fichier: %d\n", nb_lignes);

	for (int i = 0; i < nb_lignes; i++)
	{
		fscanf(mon_fichier, "%d %d %d %d %d", &valeurs[i][0], &valeurs[i][1], &valeurs[i][2], &valeurs[i][3], &valeurs[i][4]);
		printf("Les valeurs lues sur la ligne: %d %d %d %d %d\n", valeurs[i][0], valeurs[i][1], valeurs[i][2], valeurs[i][3], valeurs[i][4]);
	}

	fclose(mon_fichier);

	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			valeurs[i][j] *= 2;
		}
	}

	mon_fichier = fopen("donnees_resultat.txt", "w");
	if (mon_fichier == NULL)
	{
		printf("Erreur de lecture du fichier!");
		system("pause");
		exit(EXIT_FAILURE);
	}


	fprintf(mon_fichier, "%d\n", nb_lignes);

	for (int i = 0; i < nb_lignes; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			fprintf(mon_fichier, "%d ", valeurs[i][j]);
		}
		fprintf(mon_fichier, "\n");
	}

	fclose(mon_fichier);


	system("pause");
	return 0;



	/*char chaine_lue[TAILLE_MAX];

	mon_fichier = fopen("nouveau_fichier.txt", "r");
	if (mon_fichier == NULL)
	{
		printf("Erreur de lecture du fichier!");
		system("pause");
		exit(EXIT_FAILURE);
	}

	while (fgets(chaine_lue, TAILLE_MAX, mon_fichier))
	{
		printf("%s", chaine_lue);
	}
	


	printf("Ouverture du fichier reussie!\n");



	fclose(mon_fichier);*/

	system("pause");
	return 0;
}