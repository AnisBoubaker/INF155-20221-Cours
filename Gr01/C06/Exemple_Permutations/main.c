/*
Exemple d'utilisation du passage de paramètre par référence.

Fonction permuter
*/

#define _CRT_SECURE_NO_WARNINGS
//Standard input/output (contient printf, scanf, entre autres). 
#include <stdio.h> 
//Standard library (contient des fonctions générique et des constantes
//fréquemment utilisées)
#include <stdlib.h>

#define PI 3.1415


//Déclrations des prototypes
void permuter(int* adr1, int* adr2);



int main(void)
{
	double rayon; 
	double circonference; 
	int a, b;
	//Une variable const n'est pas modifiable!
	const double pi = 3.14;

	a = 10; 
	b = 20;


	rayon = 10.5; 
	//circonference = 2 * 3.1415 * rayon; 
	circonference = 2 * PI * rayon; 

	
	permuter( &a , &b );

	printf("a = %d, b = %d\n", a, b); //Affiche a=20, b = 10

	system("pause");
	return EXIT_SUCCESS;
}





void permuter(int* adr1, int* adr2)
{
	int transition;

	transition = *adr1;
	*adr1 = *adr2;
	*adr2 = transition;

}