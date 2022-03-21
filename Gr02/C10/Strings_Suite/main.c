

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void)
{
	char ma_chaine[TAILLE_MAX_CHAINE];
	char message[TAILLE_MAX_CHAINE];
	int num_cours; 


	char une_autre_chaine[TAILLE_MAX_CHAINE];

	//ma_chaine <= "INF155"
	strcpy(ma_chaine, "INF155");
	//IMPOSSIBLE: 
	//ma_chaine = "INF155";


	num_cours = 10; 

	//Nous sommes rendus au cours 10 de INF155. 
	//printf("Nous sommes rendus au cours %d de %s\n", num_cours, ma_chaine);

	sprintf(message, "Nous sommes rendus au cours %d de %s\n", num_cours, ma_chaine);

	printf("%s", message);


	sprintf(une_autre_chaine, "%s", "Ceci est le contenu de ma nouvelle chaine");
	printf("%s\n", une_autre_chaine);


	system("pause");
	return 0;
}