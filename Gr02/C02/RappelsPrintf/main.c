/*
	Programme simple de rappels des printf / scanf
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	//Stocker la temperature ambiante
	double temperature = 0; 

	//temperature = -13;
	printf("Saisir la temperature ambiante: ");
	scanf("%lf", &temperature); //&: esperluette

	if (temperature < 0)
	{
		printf("Il fait froid!\n");
	}
	else if(temperature < 15)
	{
		printf("Il ne fait pas si froid!\n");
	}
	else
	{
		printf("Il fait beau!\n");
	}

	printf("Il fait %.2lf aujourd'hui.\n", temperature);

	system("pause");
	return EXIT_SUCCESS;
}