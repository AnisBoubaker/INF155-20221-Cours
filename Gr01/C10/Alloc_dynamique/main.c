
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int fn1(int i);
void fn2(void);
int* fibo(int max);

int main(void)
{
	int* entier_dynamique;
	int* tab;

	//malloc: memory allocate
	//Allocation et utilisation d'un entier dynamiquement
	entier_dynamique = (int*)malloc( sizeof(int) );
	if (entier_dynamique == NULL)
	{
		printf("Erreur: Plus de memoire!\n");
		return EXIT_FAILURE;
	}
	*entier_dynamique = 1000;
	printf("%d\n", *entier_dynamique);

	//Allocation d'un tableau 1D dynamiquement
	int nb_cases;

	printf("Combien de cases voulez-vous? ");
	scanf("%d", &nb_cases);

	tab = (int*)malloc(sizeof(int) * nb_cases);
	if (tab == NULL)
	{
		printf("Erreur: Plus de memoire!\n");
		return EXIT_FAILURE;
	}

	/*
	*(tab + 0) = 10; 
	*(tab + 1) = 50;
	*(tab + 2) = 80;
	*/
	// <==>
	tab[0] = 10; 
	tab[1] = 50;
	tab[2] = 80;

	for (int i = 0; i < 3; i++)
	{
		printf("Case %d: %d\n", i, tab[i]);
	}

	

	//Modification de la taille d'un espace dynamique
	tab = (int*)realloc(tab, sizeof(int) * 100);
	if (tab == NULL)
	{
		printf("Erreur: Plus de memoire!\n");
		return EXIT_FAILURE;
	}
	
	for (int i = 0; i < 3; i++)
	{
		printf("Case %d: %d\n", i, tab[i]);
	}

	free(tab);


	int* la_suite = fibo(10);
	printf("Les 10 premiers termes de fibonacci: \n");
	for (int i = 0; i <= 10; i++)
	{
		printf("fibo(%d)=%d\n", i, la_suite[i]);
	}

	free(la_suite);

	la_suite = fibo(30);
	printf("Les 30 premiers termes de fibonacci: \n");
	for (int i = 0; i <= 30; i++)
	{
		printf("fibo(%d)=%d\n", i, la_suite[i]);
	}

	free(la_suite);


	system("pause");
	return 0;

}

int fn1(int i)
{
	int resultat; 
	resultat = i * i;
	fn2();
	return resultat;
}

void fn2(void)
{
	printf("Je suis dans fn2");
}




int* fibo(int max)
{
	int* suite;
	suite = (int*)malloc(sizeof(int) * (max + 1));
	if (suite == NULL)
	{
		printf("Erreur: plus de mémoire!");
		exit(EXIT_FAILURE);
	}

	suite[0] = 0; 
	suite[1] = 1;
	for (int i = 2; i <= max; i++)
	{
		suite[i] = suite[i - 2] + suite[i - 1];
	}

	return suite;
}