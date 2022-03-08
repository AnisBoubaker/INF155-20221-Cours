

#include <stdio.h>
#include <stdlib.h>

#define NB_MAX_LIGNES 6
#define NB_MAX_COLONNES 5

int main(void)
{

	int tab2d[NB_MAX_LIGNES][NB_MAX_COLONNES] = { {5, 7, 8, 9}, {11, 21, 10}, {15, 2, 3} };
	
	printf("La case qui a pour indice 4, 2: %d\n", tab2d[4][2]);

	for (int ligne = 0; ligne < NB_MAX_LIGNES; ligne++)
	{ //ligne = 1
		for (int colonne = 0; colonne < NB_MAX_COLONNES; colonne++)
		{ //colonne = 1
			printf("%d\t", tab2d[ligne][colonne]);
		}
		printf("\n");
	}


	system("pause");
	return 0;
}