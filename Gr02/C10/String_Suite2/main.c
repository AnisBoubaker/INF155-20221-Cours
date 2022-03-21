
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAILLE_MAX_CHAINE 100

int main(void)
{
	char sigle_cours[TAILLE_MAX_CHAINE]; 
	char titre_cours[TAILLE_MAX_CHAINE];

	//Le nom du cours combine le sigle et le titre
	char nom_cours[TAILLE_MAX_CHAINE];


	//Stocker "INF155" dans sigle_cours
	strcpy(sigle_cours, "INF155");
	//Deuxieme methode pour définir le contenu d'une chaine
	//sprintf(sigle_cours, "%s", "INF155");

	//Stocker "Introduction à la programmation" dans titre_cours
	strcpy(titre_cours, "Introduction à la programmation");


	//Créer la chaine de caractères nom_cours à partir de sigle_cours et titre_cours: 
	//nom_cours contient: INF155Introduction à la programmation
	//Concaténer les deux chaines sigle_cours et titre_cours
	/*sprintf(nom_cours, "%s%s", sigle_cours, titre_cours);
	printf("%s\n", nom_cours);*/

	//nom_cours[0] = '\0';
	strcpy(nom_cours, sigle_cours);
	strcat(nom_cours, titre_cours);
	printf("%s\n", nom_cours); //INF155Introduction à la programmation


	

	system("pause");
	return 0;

}