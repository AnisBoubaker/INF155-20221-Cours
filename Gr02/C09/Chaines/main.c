
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 255

int main(void)
{

	//char chaine1[TAILLE_MAX_CHAINE] =  { 'B', 'o', 'n', 'j', 'o', 'u', 'r'};
	char chaine1[TAILLE_MAX_CHAINE] = "Bonjour";

	char chaine2[TAILLE_MAX_CHAINE];

	//Changer le contenu d'une chaine de caract�res
	strcpy(chaine1, "Allo!");
	//IMPORTANT: NE JAMAIS FAIRFE CECI: 
	//chaine1 = "Nouvelle valeur";


	//%s pour afficher une chaine de caract�res (String)
	printf("%s\n", chaine1);


	printf("Saisir une chaine de caract�res: ");
	//Sacanf arr�te la lecture d�s qu'un caract�re vide est rencontr� (espcae, tabulation, retour � la ligne)
	//scanf("%s", chaine2);

	fgets(chaine2, 254, stdin );

	printf("La chaine lue: %s\n", chaine2);

	printf("La taille de chaine2: %d\n", strlen(chaine2));


	//Elimination du \n qui a �t� introduit par le fgets
	chaine2[strlen(chaine2) - 1] = '\0';


	printf("La chaine lue apres eliminitation du retour � la ligne: %s\n", chaine2);

	/*char un_caractere;

	un_caractere = 65; 

	printf("%c\n", un_caractere);*/

	system("pause");
	return EXIT_SUCCESS;
}
