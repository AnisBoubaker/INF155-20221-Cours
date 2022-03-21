
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void)
{
	char sigle[TAILLE_MAX];

	int tab_entiers[100] = { 10, 20 , 30 , 40 , 50, 60, 70, 80 };


	strcpy(sigle, "INF155");


	printf("%c\n", sigle[0]);

	printf("%c\n", *sigle);

	printf("%c\n", *(sigle + 1));

	printf("%c\n", *(sigle + 2));

	printf("Affichage des cases du tableau d'entiers: \n");
	printf("%d\n", *tab_entiers);
	printf("%d\n", *(tab_entiers + 4));


	system("pause");
	return 0;


}