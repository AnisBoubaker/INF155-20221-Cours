



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cpt; 

	/*
	cpt = 0; //Initialisation
	while (cpt < 10)
	{
		printf("Je repete %d fois!\n", cpt);
		cpt++; //Incrémentation
	}*/
	// Décrémenter (descendre)
	//for (cpt = 10; cpt > 0; cpt--)
	for (cpt = 0; cpt < 10; cpt ++)
	{
		printf("Je repete %d fois!\n", cpt );
	}


	system("pause");
	return EXIT_SUCCESS;
}