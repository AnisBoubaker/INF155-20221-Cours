


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int tab1d[10] = {10, 20, 30, 35, 45, 55}; //10, 20, 30, 35, 45, 55, 

	//Déclaration d'un tableau à deux dimensions, et initialisation des 3 premières lignes
	//Le reste des cases recevra la valeur 0. 
	int tablo2d[10][5] = { {3, 6, 9}, {56, 89, 10}, {12, 25, 67, 90, 100} };

	/*tablo2d[0][3] = 10;
	tablo2d[2][4] = 50;
	tablo2d[3][0] = 5;*/

	//Parcours et affichage du contenu du tableau
	for (int ligne = 0; ligne < 10; ligne++)
	{  
		for (int colonne = 0; colonne < 5; colonne++)
		{  
			printf("%d\t", tablo2d[ligne][colonne]);
		}
		printf("\n");
	}

	system("pause");
	return 0;

}