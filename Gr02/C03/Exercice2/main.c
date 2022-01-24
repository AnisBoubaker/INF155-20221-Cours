/*
Écrire un programme qui demande à l'usager de saisir 5 valeurs (réelles), puis affichez 
la moyenne des valeurs saisies. 

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	double saisie;
	double moyenne = 0; 
	int repetitions = 0 ;
	int nb_valeurs; 


	printf("Combien de valeurs avez-vous? ");
	scanf("%d", &nb_valeurs);


	repetitions = 0;
	while (repetitions < nb_valeurs)
	{
		printf("Saisir une valeur: ");
		scanf("%lf", &saisie);
		moyenne = moyenne + saisie; //moyenne += saisie; 
		//Incrément de repetition
		repetitions = repetitions + 1; //repetition++
	}

	/*printf("Saisir une valeur: ");
	scanf("%lf", &saisie);
	moyenne = moyenne + saisie; //moyenne += saisie; 

	printf("Saisir une valeur: ");
	scanf("%lf", &saisie);
	moyenne = moyenne + saisie; //moyenne += saisie; 

	printf("Saisir une valeur: ");
	scanf("%lf", &saisie);
	moyenne = moyenne + saisie; //moyenne += saisie; 

	printf("Saisir une valeur: ");
	scanf("%lf", &saisie);
	moyenne = moyenne + saisie; //moyenne += saisie; */

	moyenne = moyenne / nb_valeurs; //moyenne /= 5;

	printf("La moyenne est: %lf\n", moyenne);


	system("pause");
	return EXIT_SUCCESS;
}