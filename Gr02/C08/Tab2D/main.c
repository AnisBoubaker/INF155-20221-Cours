


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int tab1d[10] = {10, 20, 30, 35, 45, 55}; //10, 20, 30, 35, 45, 55, 

	int tablo2d[10][5] = { {3, 6, 9}, {56, 89, 10}, {12, 25, 67, 90, 100} };

	/*tablo2d[0][3] = 10;
	tablo2d[2][4] = 50;
	tablo2d[3][0] = 5;*/

	for (int ligne = 0; ligne < 10; ligne++)
	{ //ligne =1 
		for (int colonne = 0; colonne < 5; colonne++)
		{ //colonne =1 
			printf("%d\t", tablo2d[ligne][colonne]);
		}
		printf("\n");
	}

	system("pause");
	return 0;

}