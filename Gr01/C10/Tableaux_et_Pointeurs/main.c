
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

int main(void)
{
	char str1[TAILLE_MAX] = "INF155";

	int tab_entier[TAILLE_MAX] = { 10, 20 , 30 , 40 , 50 , 70, 80 };

	printf("%d\n", *str1);
	printf("%c\n", *str1);


	printf("tab_entier est un pointeur qui pointe vers: %d\n", *tab_entier);


	printf("tab_entier+0 pointe vers: %d\n", *(tab_entier + 0));
	printf("La case 0 du tableau: %d\n", tab_entier[0]);

	printf("tab_entier+4 pointe vers: %d\n", *(tab_entier + 4));
	printf("La case 4 du tableau: %d\n", tab_entier[4]);

	printf("tab_entier+1 pointe vers: %d\n", *(tab_entier + 1));
	printf("La case 1 du tableau: %d\n", tab_entier[1]);


	for (int i = 0; i < 7; i++)
	{
		printf("Element %d: %d\n", i, *(tab_entier + i));
		//printf("Element %d: %d\n", i, tab_entier[i]);
	}

	/*
	La notation tab[x] est équivalente à *(tab + x)
	
	*/
	system("pause");
	return 0;
}
