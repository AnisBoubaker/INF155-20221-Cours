/*
Exercice dont l'�nonc� se trouve dans les diapositives, p. 37

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max; //La limite 'maximale � ne pas d�passer
	int diviseur; 
	int solution; 

	printf("Saisir le maximum: ");
	scanf("%d", &max);

	printf("Saisir le diviseur: ");
	scanf("%d", &diviseur);

	solution = max; 
	
	while (solution % diviseur) //while ((solution % diviseur) != 0)
	{
		solution--;
	}

	printf("Le plus grand multiple de %d qui <= � %d est: %d.\n", diviseur, max, solution);

	system("pause");
	return 0;

}
