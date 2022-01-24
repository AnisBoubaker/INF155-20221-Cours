/*
Programme qui demande les coordonnees d'un point et affiche le
cadran dans lequel se trouve le point.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double x; //Abscisse du point
	double y; //Ordonnée du point
	int cadran; 

	printf("Veuillez saisir l'abscisse: ");
	scanf("%lf", &x);

	printf("Veuillez saisir l'ordonnee: ");
	scanf("%lf", &y);

	if (x > 0)
	{
		if (y > 0)
		{
			cadran = 1;
		}
		else
		{
			cadran = 4;
		}
	}
	else
	{
		if (y > 0)
		{
			cadran = 2;
		}
		else
		{
			cadran = 3;
		}
	}

	printf("Le point saisi se trouve dans le cadran: %d\n", cadran);

	system("pause");
	return EXIT_SUCCESS;
}