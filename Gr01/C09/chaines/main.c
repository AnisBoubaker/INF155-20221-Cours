
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void)
{
	//char chaine1[10] = { 'B', 'o', 'n', 'j', 'o', 'u', 'r' };
	char chaine1[TAILLE_MAX] = "Bonjour";

	//%s afficher une chaine de caractères (s: String)
	printf("%s\n", chaine1);


	//Lire une chaine de caractères
	/*printf("Saisir une chaine (SCANF): ");
	//Important: pas de &
	scanf("%s", chaine1);
	//Probleme: le scanf s'arrête à un caractère vide (espace, tabulation ou retour chariot)
	printf("Chaine lue: %s\n", chaine1);*/

	//File get String
	//stdin: représente la console. 
	printf("Saisir une chaine (FGETS): ");
	fgets(chaine1, TAILLE_MAX - 1, stdin);
	chaine1[ strlen(chaine1) - 1 ] = '\0';
	
	printf("Chaine lue: %s\n", chaine1);
	
	

	//Je veux changer le contenu de chaine 1 pour "Allo!"
	/*chaine1[0] = 'A'; 
	chaine1[1] = 'l';
	chaine1[2] = 'l';
	chaine1[3] = 'o';
	chaine1[4] = '!';
	chaine1[5] = '\0';*/

	//String Copy: copier une chaine de caractères dans une autre



	strcpy(chaine1, "Allo!");
	printf("Le contenu de chaine1 après strcpy: %s\n", chaine1);

	/*char mon_char;

	mon_char = 65;

	printf("%d\n", mon_char);*/


	system("pause");
	return 0;
}