
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 100

int* fibo(int max);

void f2(void)
{
	int c;

}

void f1(void)
{
	int b;

	f2();

}

int main(void)
{
	/*
	//Introduction: Un tableau est un pointeur + Arithmétique des pointeurs
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
	*/


	int a; 
	int* b;

	int* x;

	double* tab_dyn_doubles; 
	double* notes; 
	int nb_etudiants;


	// c = (table*)malloc(sizeof(table));
	b = (int*)malloc(sizeof(int));
	*b = 50;
	printf("La valeur se trouvant à la zone menomire pointee par b est:%d\n", *b);


	x = (int*)malloc(sizeof(int) * 50);

	*x = 20; //Équivalent à x[0]

	printf("Dans l'espace pointe par x: %d\n", *x);

	*(x + 1) = 100; //Équivalent à écrire : x[1] = 100
	printf("Dans l'espace pointe par x+1: %d\n", *(x+1));

	x[2] = 1000;
	printf("Dans l'espace pointe par x+2: %d\n", *(x + 2));
	printf("Dans l'espace pointe par x[2]: %d\n", x[2]);



	tab_dyn_doubles = (double*)malloc(sizeof(double) * 20);
	if (tab_dyn_doubles == NULL) //if( ! tab_dyn_douyble )
	{
		printf("Erreur: Plus de mémoire!");
		return EXIT_FAILURE;
	}

	tab_dyn_doubles[0] = 23.5; 
	tab_dyn_doubles[1] = 50.2;  //   *(tab_dyn_doubles+1)

	do
	{
		printf("Combien d'étudiants? ");
		scanf("%d", &nb_etudiants);
	} while (nb_etudiants <= 0 || nb_etudiants>60);


	notes = (double*)malloc(sizeof(double) * nb_etudiants);
	if (notes == NULL)
	{
		printf("Erruer: plus de memoire!");
		return EXIT_FAILURE;
	}

	// ....

	nb_etudiants += 5;

	//Réallocation: On agrandit l'espace pour contenir 5 notes de plus
	notes = (double*)realloc(notes, sizeof(double) * nb_etudiants);
	if (notes == NULL)
	{
		printf("Erreur: plus de memoire!");
		return EXIT_FAILURE;
	}


	//Libérer l'espace mémoire des notes (quand on a plus besoin)
	free(notes);



	/*
	double* toto; 

	toto = (double*)malloc(sizeof(double) * 1000);

	toto[0] = 40.6;
	toto[1] = 25; 
	toto[2] = 55;

	//ATTENTION: Ici on perd notre adresse alors que le tableau reste alloué
	// ==> Fuite de mémoire !
	toto = NULL;
	*/

	int* termes = fibo(10);

	for (int i = 0; i <= 10; i++)
	{
		printf("Terme %d: %d\n", i, termes[i]);
	}

	free(termes);


	system("pause");
	return 0;


}



int* fibo(int max)
{
	int* suite_fibo;

	suite_fibo = (int*)malloc(sizeof(int) * (max + 1));
	if (suite_fibo == NULL)
	{
		printf("ERREUR: Plus de memoire");
		exit(EXIT_FAILURE);
	}

	suite_fibo[0] = 1;
	suite_fibo[1] = 1;

	for (int i = 2; i <= max; i++)
	{
		suite_fibo[i] = suite_fibo[i - 1] + suite_fibo[i - 2];
	}


	return suite_fibo;
}