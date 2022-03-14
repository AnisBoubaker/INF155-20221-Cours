
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

	//Changer le contenu d'une chaine de caractères
	strcpy(chaine1, "Allo!");
	//IMPORTANT: NE JAMAIS FAIRFE CECI: 
	//chaine1 = "Nouvelle valeur";


	//%s pour afficher une chaine de caractères (String)
	printf("%s\n", chaine1);


	printf("Saisir une chaine de caractères: ");
	//Sacanf arrête la lecture dès qu'un caractère vide est rencontré (espcae, tabulation, retour à la ligne)
	//scanf("%s", chaine2);

	fgets(chaine2, 254, stdin );

	printf("La chaine lue: %s\n", chaine2);

	printf("La taille de chaine2: %d\n", strlen(chaine2));


	//Elimination du \n qui a été introduit par le fgets
	chaine2[strlen(chaine2) - 1] = '\0';


	printf("La chaine lue apres eliminitation du retour à la ligne: %s\n", chaine2);

	/*char un_caractere;

	un_caractere = 65; 

	printf("%c\n", un_caractere);*/

	system("pause");
	return EXIT_SUCCESS;
}
