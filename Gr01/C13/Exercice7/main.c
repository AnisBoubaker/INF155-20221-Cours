#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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
	char provenance[MAXCAR];
} t_transaction;
typedef struct {
	t_transaction tab_transactions[MAXTX];
	int nb_transactions;
} t_releve;
//t_releve un_releve;


double calculer_solde(const t_releve* un_releve)
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

int enregistrer_transactions(const char* nom_fichier,
	const t_releve* un_releve,
	int mois, int annee)
{
	FILE* fichier; 

	fichier = fopen(nom_fichier, "w");
	if (fichier == NULL)
	{
		return 0;
	}

	for (int i = 0; i < un_releve->nb_transactions; i++)
	{
		t_transaction t = un_releve->tab_transactions[i];
		if (t.date.mois == mois && t.date.annee == annee)
		{
			fprintf(fichier, "%s\t%.2lf\t%d/%d/%d\n",
				t.provenance,
				t.montant,
				t.date.jour,
				t.date.mois, 
				t.date.annee
				);
		}
	}

	fclose(fichier);

	return 1;
}


int main(void)
{
	t_releve mon_releve; 

	mon_releve.tab_transactions[0].date.jour = 10; 
	mon_releve.tab_transactions[0].date.mois = 5;
	mon_releve.tab_transactions[0].date.annee = 2020;
	mon_releve.tab_transactions[0].montant = 1564.32;
	mon_releve.tab_transactions[0].type_operation = DEPOT;
	strcpy(mon_releve.tab_transactions[0].provenance, "CHEQUE #123");

	mon_releve.tab_transactions[1].date.jour = 12;
	mon_releve.tab_transactions[1].date.mois = 5;
	mon_releve.tab_transactions[1].date.annee = 2020;
	mon_releve.tab_transactions[1].montant = 7.85;
	mon_releve.tab_transactions[1].type_operation = PAIEMENT_DIRECT;
	strcpy(mon_releve.tab_transactions[1].provenance, "Cafeteria ETS");

	mon_releve.tab_transactions[2].date.jour = 15;
	mon_releve.tab_transactions[2].date.mois = 5;
	mon_releve.tab_transactions[2].date.annee = 2020;
	mon_releve.tab_transactions[2].montant = 1.90;
	mon_releve.tab_transactions[2].type_operation = PAIEMENT_FACTURE;
	strcpy(mon_releve.tab_transactions[2].provenance, "Tim Hortons (ETS)");


	mon_releve.tab_transactions[3].date.jour = 10;
	mon_releve.tab_transactions[3].date.mois = 7;
	mon_releve.tab_transactions[3].date.annee = 2022;
	mon_releve.tab_transactions[3].montant = 1564.32;
	mon_releve.tab_transactions[3].type_operation = DEPOT;
	strcpy(mon_releve.tab_transactions[3].provenance, "CHEQUE #333");

	mon_releve.nb_transactions = 4;


	enregistrer_transactions("liste_transactions.txt", &mon_releve, 5, 2020);

	system("pause");
	return 0; 
}