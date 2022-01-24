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
	int val3; 

	printf("Val1: ");
	scanf("%d", &val1);

	printf("Val2: ");
	scanf("%d", &val2);

	if (val1 > val2)
	{
		val3 = val1; 
		val1 = val2; 
		val2 = val3; 
	}

	
	/* Ne pas modifier les lignes ci-dessous */
	printf("val1 = %d, val2= %d\n", val1, val2);
	//val1 doit être la plus petite valeur. 
	system("pause");
	return EXIT_SUCCESS;
}



//PARTIE 1
//int main(void)
//{
//	/**  Ne pas modifier ces deux lignes **/
//	int val1 = 3;
//	int val2 = 10;
//	/**************************************/
//	int val3 = 0;
//	//Interdit de faire : val1 = 10; ou val2 = 3; 
//
//	//PAS BON
//	/*val1 = val2; // Val1 = 10 val2 = 10
//	val2 = val1; // val2 = 10 et val1 = 10
//	*/
//
//	val3 = val2;
//	val2 = val1;
//	val1 = val3;
//
//
//	/* Ne pas modifier les lignes ci-dessous */
//	printf("val1 = %d, val2= %d", val1, val2);
//	//Affiche: val1 = 10, val2 = 3
//
//	system("pause");
//	return EXIT_SUCCESS;
//}