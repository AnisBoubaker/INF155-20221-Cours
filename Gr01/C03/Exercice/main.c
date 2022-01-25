/*
1. Complétez le programme suivant pour que la programme affiche 10 puis 3.
2. Modifiez votre programme, pour que les valeurs soient saisies par l'usager,
   puis que la plus petite valeur soit affichée en premier.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/**  Ne pas modifier ces deux lignes **/
	int val1;
	int val2;
	/**************************************/
	int perm; 

	printf("Saisir la premiere valeur: ");
	scanf("%d", &val1);

	printf("Saisir la seconde valeur: ");
	scanf("%d", &val2);

	if (val1 > val2)
	{
		perm = val2; 
		val2 = val1; 
		val1 = perm;
	}


	/* Ne pas modifier les lignes ci-dessous */
	printf("val1 = %d, val2= %d\n", val1, val2);
	
	system("pause");
	return EXIT_SUCCESS;
}



//ETAPE 1: 

//int main(void)
//{
//	/**  Ne pas modifier ces deux lignes **/
//	int val1 = 3;
//	int val2 = 10;
//	/**************************************/
//	int perm;
//
//
//	//Interdit de faire val1 = 10 ni val2 = 3;
//
//	perm = val1;
//	val1 = val2;
//	val2 = perm;
//
//	/* Ne pas modifier les lignes ci-dessous */
//	printf("val1 = %d, val2= %d\n", val1, val2);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
