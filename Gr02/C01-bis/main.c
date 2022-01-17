/*
 * Premier programme qui calcule le salaire versé
 *
 * Auteur: Anis Boubaker
 * Date: 2022-01-10
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int nb_heures; //0 --> 4 294 967 296

    double taux_horaire;
    double salaire;

    nb_heures = 100;
    taux_horaire = 25.50;
    salaire = nb_heures * taux_horaire;

    printf("L'employe a travaille %d heures au taux de %lf pour un total de %lf.\n",nb_heures,taux_horaire,salaire);






    /*double taux_horaire; //Taux horaire de l'employé
    int nb_heures; //Nombre d'heures travaillees
    double salaire_a_payer; //Selon le nombre d'heures et le taux

    //Saisie du taux horaire
    printf("Taux horaire de l'emplye: ");
    scanf("%lf", &taux_horaire);

    //Saisie du nombre
    printf("Nombre d'heures travaillees: ");
    scanf("%d", &nb_heures);

    //Calculer le salsire
    salaire_a_payer = taux_horaire * nb_heures;

    //Afficher le salaire à payer
    printf("Le salaire a payer est: %lf $", salaire_a_payer);*/

    return EXIT_SUCCESS;
}