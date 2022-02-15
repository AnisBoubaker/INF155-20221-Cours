/*
Exemple d'utilisation du passage de paramètre par référence. 

Fonction MinMaxTrois
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Identifier et retourner le minimum et le max de trois valeurs v1, v2 et v3
void min_max(int v1, int v2, int v3, int* adr_min, int* adr_max)
{
	int min, max; 

	min = v1; 
	max = v1; 

	if (v2 < min)
	{
		min = v2;
	}
	if (v2 > max)
	{
		max = v2;
	}
	if (v3 < min)
	{
		min = v3;
	}
	if (v3 > max)
	{
		max = v3;
	}
	*adr_min = min;
	*adr_max = max; 
}


int main(void)
{
	int val1, val2, val3;
	int min, max; 


	printf("Saisir la valeur 1: ");
	scanf("%d", &val1);

	printf("Saisir la valeur 2: ");
	scanf("%d", &val2);

	printf("Saisir la valeur 3: ");
	scanf("%d", &val3);

	min_max(val1, val2, val3,  &min   ,  &max   );

	printf("Le minimum est: %d, le maximum est: %d\n", min, max);

	system("pause");
	return EXIT_SUCCESS;
}