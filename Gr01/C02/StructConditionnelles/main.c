/*
	Programme simple qui saisit la température et l'affiche
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double temperature = -100;

	//temperature = -20;
	printf("Veuillez saisir la temperature: ");
	scanf("%lf", &temperature); //&: esperluette
	
	/*
	Si la temperature <-10: Il fait tres froid
	Si la temperature est entre -10 et 10: Il faut froid...
	Si la temperature >10: Il fait beau. 
	*/

	if (temperature <= -10)
	{
		printf("Il fait tres froid! \n");
		printf("Il faut bien s'habiller!\n");
	}
	else if (temperature <= 10)
	{
		printf("Il fait froid...\n");
	}
	else
	{
		printf("Il fait beau! \n");
	}

	/*if (temperature > -10)
	{
		if (temperature < 10)
		{
			printf("Il fait froid....\n");
		}
	}
	if (temperature > 10)
	{
		printf("Il fait beau!\n");
	}*/

	printf("La temperature: %.2lf degres.\n", temperature);

	//Demande a marquer une pause avant de fermer la console. 
	system("pause");
	return EXIT_SUCCESS;
}