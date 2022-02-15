/*
Programme qui saisit trois valeurs et qui affiche le minimum et la maximum des valeurs saisies

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//Trouver le min et le max des valeurs v1, v2 et v3. 
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
	int val1, val2, val3; //Valeurs saisies par l'usager. 

	int min, max; //Valeurs minimale et maximale

	printf("Valeur 1: ");
	scanf("%d", &val1);

	printf("Valeur 2: ");
	scanf("%d", &val2);

	printf("Valeur 3: ");
	scanf("%d", &val3);
	
	min_max(val1, val2, val3, &min, &max);

	printf("Voici le min: %d\n", min);
	printf("Voici le max: %d\n", max);

	system("pause");
	return EXIT_SUCCESS;
}