
#include <stdlib.h>

#define MAXTX 500 
#define MAXCAR 100

typedef enum {
	DEPOT, RETRAIT, PAIEMENT_FACTURE, PAIEMENT_DIRECT
} e_operation;
typedef struct {
	int jour, mois, annee;
} t_date;
typedef struct {
	e_operation type_operation; 
	t_date date;
	double montant;
	//char provenance[MAXCAR];
	char* provenance;
} t_transaction;
typedef struct {
	t_transaction* tab_transactions;
	int nb_transactions;
	int taille_max;
} t_releve;


double solde_courant(const t_releve* un_releve)
{
	double solde = 0; 
	if (un_releve == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < un_releve->nb_transactions; i++)
	{
		if (un_releve->tab_transactions[i].type_operation == DEPOT)
		{
			solde += un_releve->tab_transactions[i].montant;
		}
		else
		{
			solde -= un_releve->tab_transactions[i].montant;
		}	
	}
	return solde; 
}

int main(void)
{
	t_releve un_releve;
	/* Supposez que la variable un_releve est correctement initialisée et contient une centaine de transactions.
	*/

	un_releve.tab_transactions = (t_transaction*)malloc(20 * sizeof(t_transaction));
	if (un_releve.tab_transactions == NULL)
	{
		exit(EXIT_FAILURE);
	}

	t_transaction t; 

	t.provenance = (char*)malloc(sizeof(char) * MAXCAR);
	if (t.provenance == NULL)
	{
		exit(EXIT_FAILURE);
	}

	strcpy(t.provenance, "Depot de cheque");

}
