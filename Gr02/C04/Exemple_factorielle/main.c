/*
Programme qui calcule la factorielle de n

Exemple:

Saisir la valeur de n: 5

Factorielle 5 = 120

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cpt;
	int factorielle;
	int max;

	factorielle = 1;

	printf("saisir le max: ");
	scanf("%d", &max);


	for (cpt = 1; cpt <= max; cpt++)
	{
		factorielle = factorielle * cpt;
	}

	printf("Factorielle %d = %d\n", max, factorielle);

	system("pause");
	return 0;
}