#include <stdio.h>
#include <stdlib.h>
#include "jeux.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Utilisation: %s [R/P/C]\n", argv[0]);
        return 1;
    }

    char joueur = argv[1][0];
    if (joueur != 'R' && joueur != 'P' && joueur != 'C') {
        printf("Choix invalide. Utilisez R, P ou C.\n");
        return 1;
    }

    char ordinateur = hasard();

    printf("Joueur: %c\n", joueur);
    printf("Ordinateur: %c\n", ordinateur);

    int resultat = comparaison(joueur, ordinateur);

    if (resultat == 0) {
        printf("Match nul !\n");
    } else if (resultat == 1) {
        printf("Le joueur gagne !\n");
    } else {
        printf("L'ordinateur gagne !\n");
    }

    return 0;
}

