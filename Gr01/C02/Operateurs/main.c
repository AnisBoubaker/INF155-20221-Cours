/*
Illustration des opérateurs
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int val1; 
	int val2; 
	double resultat;
	int reste;
	int x; 
	double temperature; 
	int valeurCondition; 

	val1 = 10; 
	val2 = 3; 

	resultat = (val1 / (double)val2);
	reste = val1 % val2;


	printf("Quotient contient: %lf\n", resultat);
	printf("Reste contient: %d\n", reste);


	x = 10; 
	x++; // x = x + 1 (incrémenter x)
	printf("x contient: %d\n", x);

	x = 50; 
	x--; // x = x - 1 (décrémenter x)
	printf("x contient: %d\n", x);


	val1 = 11; 
	val2 = 3; 

	resultat = ++val1 / val2;
	printf("Le resultat est: %lf\n", resultat);
	printf("La valeur de val1: %d\n", val1);


	temperature =0; 

	valeurCondition = (temperature < 0);

	if( temperature != 0  )
	{
		printf("La temperature est non nulle. \n");
	}

	printf("La valeur de la condition est: %d\n", valeurCondition);

	system("pause");
	return EXIT_SUCCESS;
}