/* 
Demande a l'usager la saisie d'une coordonnee d'un point, le programme
affiche ensuite le cadran où se trouve le point

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x;  //abscisse
	int y; //ordonnée
	int cadran; //Dans quel cadran se trouve le point


	printf("Saisir la valeur de x: ");
	scanf("%d", &x);

	printf("Saisir la valeur de y: ");
	scanf("%d", &y);

	if (x > 0)
	{
		if (y > 0)
		{
			cadran = 1;
		}
		else
		{
			cadran = 2; 
		}
	}
	else
	{
		if (y > 0)
		{
			cadran = 4;
		}
		else
		{
			cadran = 3;
		}
	}

	printf("On est dans le cadran %d\n", cadran);

	system("pause");
	return EXIT_SUCCESS;

}