/*
Illustration du fonctionnement des boucles. 

*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nb_repetitions;

	nb_repetitions = 0;
	while (nb_repetitions < 20)
	{
		printf("Je suis fatigant!\n");
		nb_repetitions++;
	}

	system("pause");
	return EXIT_SUCCESS;
}