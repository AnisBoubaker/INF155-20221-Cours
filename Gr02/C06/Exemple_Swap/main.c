/*
Programme qui illustre l'utilisation d'une fonction pour permuter deux
variables. 
*/


#define _CRT_SECURE_NO_WARNINGS
//standard input/output (qui fornit printf et scanf)
#include <stdio.h> 
//Standard library (déclare des constantes comme la constante NULL)
#include <stdlib.h>



#define PI 3.1415
#define NB_MAX_ETUDIANTS 50


//Déclaration du prototype de la fonction 
void swap(int* adr1, int* adr2);



int main(void)
{

	int a, b; 
	double circonference;
	double rayon; 

	int x; 

	x = 50; 


	a = 10; 
	b = 20;
	 

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b); //affiche a=20, b = 10

	

	circonference = 2 * PI * rayon;

	system("pause");
	return EXIT_SUCCESS;

}



void swap(int* adr1, int* adr2)
{
	int tmp;

	tmp = *adr1;
	*adr1 = *adr2;
	*adr2 = tmp;
}
