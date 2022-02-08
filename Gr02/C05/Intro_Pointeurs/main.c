

#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	int ma_var; 
	int ma_var2;

	int* adr_mavar;


	int** autre_pointeur;


	ma_var = 20;
	ma_var2 = 50;



	// & : opérateur d'adresse, doit être utilisé avec une variable.
	printf("La variable ma_var se trouve à l'adresse: %p \n", &ma_var);
	printf("La variable ma_var2 se trouve à l'adresse: %p \n", &ma_var2);



	adr_mavar = &ma_var;
	printf("Information à l'adresse : %d \n", *adr_mavar);


	*adr_mavar = 100;

	printf("Ma variable ma_var contient: %d\n", ma_var);


	autre_pointeur = &adr_mavar;

	printf("Contenu de autre_pointeur: %p\n", autre_pointeur);

	printf("Déreferencement une seule fois de autre_pointeur:  %p\n", *autre_pointeur);

	printf("Magie : %d", **autre_pointeur);

	system("pause");
	return EXIT_SUCCESS;

}