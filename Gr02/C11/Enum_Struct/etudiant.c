
#include "etudiant.h"



//Fonction qui crée un étudiant de façon dynamique et retourne 
//son adresse.
//Appelée aussi fonction CONSTRUCTEUR d'un étudiant
etudiant* etudiant_init(void)
{
	etudiant* nouvel_etudiant;
	nouvel_etudiant = (etudiant*)malloc(sizeof(etudiant));
	if (nouvel_etudiant == NULL)
	{
		printf("Plus de memoire");
		exit(EXIT_FAILURE);
	}

	return nouvel_etudiant;
}

//Fonctio qui libere un etudiant: fonction DESTRUCTEUR
void etudiant_destroy(etudiant* e)
{
	free(e);
}



//L'étudiant est passé pas copie. 
void etudiant_afficher(etudiant et)
{
	printf("*** Fiche de l'etudiant-e ***\n");
	printf("Nom: %s\n", et.nom);
	printf("Prenom: %s\n", et.prenom);
	printf("Code permanent: %s\n", et.code_perm);
	printf("Intra: %.2lf\n", et.note_intra);
	printf("Final: %.2lf\n", et.note_final);
	printf("TP1: %.2lf\n", et.note_tp1);
	printf("Tp2: %.2lf\n", et.note_tp2);
}

void etudiant_saisir(etudiant* et)
{
	printf("*** Saisie des informations de l'etudiant-e *** \n");
	printf("Nom: ");
	fgets(et->nom, TAILLE_MAX, stdin);
	et->nom[strlen(et->nom) - 1] = '\0';

	printf("Prenom: ");
	fgets(et->prenom, TAILLE_MAX, stdin);
	et->prenom[strlen(et->prenom) - 1] = '\0';

	printf("Code permanent: ");
	fgets(et->code_perm, TAILLE_CODE_PERM, stdin);
	(*et).code_perm[strlen((*et).code_perm) - 1] = '\0';

	printf("Note Intra: ");
	scanf("%lf", &(et->note_intra));

	printf("Note Final: ");
	scanf("%lf", &(et->note_final));

	printf("Note TP1: ");
	scanf("%lf", &(et->note_tp1));

	printf("Note TP2: ");
	scanf("%lf", &(et->note_tp2));
}


/*
Écrire la fonction etudiant_moyenne qui calcule la moyenne obtenue
par un étudiant, en supposant:
Intra: 10%
Final: 40%
TP1: 25%
TP2: 25%
*/


//Vertsion 1: On reçoit un étudiant (par copie)
/*
double etudiant_moyenne(etudiant e)
{
	double moyenne;

	moyenne = e.note_intra * 0.1 + e.note_final * 0.4 + e.note_tp1 * 0.25 + e.note_tp2 * 0.25;

	e.note_intra = 0;

	return moyenne;
}

*/

//Vertsion 2: On reçoit un pointeur d'un étudiant
double etudiant_moyenne(const etudiant* e)
{
	double moyenne;

	moyenne = e->note_intra * 0.1 + e->note_final * 0.4 + e->note_tp1 * 0.25 + e->note_tp2 * 0.25;


	//Plus possible car le parametre e est déclaré comme constant, on n'a dont pas le droit de changer le
	//contenu de e.
	//e->note_intra = 0;

	return moyenne;

}