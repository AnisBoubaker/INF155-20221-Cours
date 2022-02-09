/*
Écrire une fonction nommée saisie_entier qui reçoit deux valeurs entières comme paramètre: min et max. 
Votre fonction doit demander à l'usager de saisir un entier. Si l'entier se trouve entre min et max votre 
fonction doit retourner la valeur saisie. Sinon, elle doit redemander à l'usager une valeur entre min et max 
tant et aussi longtemps que ce dernier ne donne pas une valeur correcte.

Voici le prototype de votre fonction:

int saisie_entier(int min, int max)

Ensuite, dans votre main, votre programme doit demander à l'usager de saisir deux valeurs entre 10 et 50. 
Pour chacune, si l'usager entre une valeur erronée, il faut le lui redemander (donc il faut faire appel à votre fonction!). 
Une fois les deux valeurs obtenues, afficher la somme des valeurs.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>





int saisie_entier(int min, int max)
{
	int val_saisie; 

	do
	{
		printf("Veuillez saisir une valeur entre %d et %d: ", min, max);
		scanf("%d", &val_saisie);
	} while (val_saisie<min || val_saisie>max);

	return val_saisie; 
}


int afficher_menu(void)
{
	int saisie; 

	printf("MENU:\n");
	printf("1. Nouveau client\n");
	printf("2. Modifier un client existant\n");
	printf("3. Supprimer un client\n");
	printf("4. Nouvelle facture\n");
	printf("5. Quitter le programme\n");

	saisie = saisie_entier(1, 5);

	return saisie; 
}


int main(void)
{
	int saisie;
	double prix=100.50;

	saisie = afficher_menu(); //Note: Les parenthèses sont obligatoires!

	printf("Vous avez choisi: %d\n", saisie);

	/*int saisie1, saisie2; 

	saisie1 = saisie_entier(10, 50);
	printf("Valeur saisie: %d\n", saisie1);
	saisie2 = saisie_entier(10, 50);
	printf("Valeur saisie: %d\n", saisie2);

	printf("La somme des valeurs saisies: %d \n", saisie1 + saisie2);*/

	system("pause");
	return EXIT_SUCCESS;
}