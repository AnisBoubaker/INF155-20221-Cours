/*
Illustration du fonctionnement des opérateurs
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int val1; 
	int val2;  
	int resultat; 

	printf("val1: ");
	scanf("%d", &val1);

	printf("val2: ");
	scanf("%d", &val2);

	if ( val1 )
	{
		printf("La valeur de val1 est differente de 0. \n");
	}

	resultat = (val1 < val2) + 10;


	printf("Resultat vaut: %d\n", resultat);

	//printf(" val1 < val2 = %d \n", val1 < val2);




	/*int resultat; 
	val1 = 11;
	val2 = 3;

	resultat = val1++ / val2;

	printf("val1 = %d\n", val1);
	printf("resultat : %d\n", resultat);*/

	system("pause");
	return EXIT_SUCCESS;
}