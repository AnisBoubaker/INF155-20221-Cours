



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int nb_etudiants = 100;
	int* adr_nb_etudiants; 
	int** chose;

	//%p: Pour afficher une adresse mémoire
	printf("La variable nb_etudiants se trouve en memoire a l'adresse: %p \n", &nb_etudiants);

	adr_nb_etudiants = &nb_etudiants; 

	*adr_nb_etudiants = 200;

	printf("La variable nb_etudiants contient: %d\n", nb_etudiants);


	nb_etudiants = 500;


	printf("La valeur se trouvant à l'adresse stiockée dans adr_nb_etudiants: %d\n", *adr_nb_etudiants);


	chose = &adr_nb_etudiants;

	printf("Si je déréférence chose, j'obtiens: %p\n\n", *chose);


	printf("Magie: %d\n", **chose);


	int x; 


	scanf("%d", &x);





	system("pause");
	return 0;
}