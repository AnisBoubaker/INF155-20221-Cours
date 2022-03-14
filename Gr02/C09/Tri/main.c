#include <stdio.h>
#include <stdlib.h>


#define TAILLE_TAB 100

void afficher_tab(int tab[], int taille);
void tri_insertion(int tab[], int taille);
void tri_selection(int tab[], int taille);
void tri_bulles(int tab[], int taille);

int main(void)
{ 
	int mon_tab1[TAILLE_TAB] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab2[TAILLE_TAB] = { 44, 10, 20, 55, 10, 24, 35 };
	int mon_tab3[TAILLE_TAB] = { 44, 10, 20, 55, 10, 24, 35 };

	tri_insertion(mon_tab1, 7);
	afficher_tab(mon_tab1, 7);


	tri_selection(mon_tab2, 7);
	afficher_tab(mon_tab2, 7);

	tri_bulles(mon_tab3, 7);
	afficher_tab(mon_tab3, 7);


	system("pause");
	return EXIT_SUCCESS;
}


void afficher_tab(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		printf("%d\t", tab[i]);
	}
	printf("\n");
}


void tri_insertion(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		int x; 
		int j; 

		x = tab[i];
		j = i;

		while (j > 0 && tab[j - 1] > x)
		{
			tab[j] = tab[j - 1];
			j--;
		}

		tab[j] = x;
	}
}


void tri_selection(int tab[], int taille)
{
	for (int i = 0; i < taille; i++)
	{
		int indice_min; 

		indice_min = i;
		for (int j = i + 1; j < taille; j++)
		{
			if (tab[j] < tab[indice_min])
			{
				indice_min = j;
			}
		}
		if (indice_min != i)
		{
			int tampon; 
			tampon = tab[i];
			tab[i] = tab[indice_min];
			tab[indice_min] = tampon;
		}
	}
}

void tri_bulles(int tab[], int taille)
{
	for (int i = taille - 1; i >= 1; i--)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			{
				int tmp; 
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
}