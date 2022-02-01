#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max; 
	int cpt; //Compteur de boucle
	int x; 

	printf("Nombre de répétitions: ");
	scanf("%d", &max);

	/*
	cpt++  équivalent à cpt = cpt + 1

	cpt+2;
	*/

	

	for (cpt = 0; cpt < max; cpt = cpt + 2)
	{
		printf("Le langage C c'est lfun! (%d fois) \n", cpt + 1);
	}
	



	/*
	//Initialisation du compteur
	cpt = 0; 
	while (cpt < max)
	{
		
		//Incrément 
		cpt++; //cpt = cpt + 1 ou cpt += 1
	}
	*/

	system("pause");
	return EXIT_SUCCESS;
}