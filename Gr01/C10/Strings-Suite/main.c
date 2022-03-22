
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAILLE_MAX 100

int main(void)
{
	char une_chaine1[TAILLE_MAX];
	char copie_une_chaine1[TAILLE_MAX];
	char une_chaine2[TAILLE_MAX];
	int num_cours; 


	char sigle[TAILLE_MAX] = "INF155 ";
	char description[TAILLE_MAX] = "Introduction a la programmation";
	char titre_cours[TAILLE_MAX] = { 0 }; //INF155 Introduction a la programmation


	//une_chaine = "INF155"; //Ne jamais faire ça!!!
	//strcpy(une_chaine1, "INF155\t");
	sprintf(une_chaine1, "INF155\t");
	//strcpy(copie_une_chaine1, une_chaine1);
	//sprintf(copie_une_chaine1, "%s", une_chaine1);
	printf("Le nombre de caracteres de une_chaine est: %d\n", strlen(une_chaine1));
	//Afficher : "Nous sommes au cours numero 10 de INF155"
	num_cours = 10; 

	//printf("Nous sommes au cours %d de %s\n", num_cours, une_chaine1);

	//Fonction sprintf (string printf): formater une chaine de caractères et la stocker dans une chaine destination
	sprintf(une_chaine2, "Nous sommes au cours %d de %s", num_cours, une_chaine1);
	printf("%s\n", une_chaine2);

	//Concatenation de chaines de caractères:
	//Methode sprintf
	//sprintf(titre_cours, "%s%s", sigle, description);
	//printf("%s\n", titre_cours);

	/* Pour référence
	char sigle[TAILLE_MAX] = "INF155 ";
	char description[TAILLE_MAX] = "Introduction a la programmation";
	char titre_cours[TAILLE_MAX] = ""; //INF155 Introduction a la programmation
	*/

	//Methode strcat
	//strcat(sigle, description); //Ajouter description à la fin de sigle
	//printf("%s\n", sigle);

	strcat(titre_cours, sigle);
	strcat(titre_cours, description);
	printf("%s\n", titre_cours);

	system("pause");
	return EXIT_SUCCESS;
}