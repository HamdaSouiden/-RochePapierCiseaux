#include <stdio.h>
#include "jeux.h"

int main() {
    char joueur, ordinateur;
    int resultat;

    srand(time(NULL)); // Initialisation du générateur de nombres aléatoires

    printf("Roche (R), Papier (P), Ciseaux (C) ? ");
    scanf(" %c", &joueur);

    if (joueur != 'R' && joueur != 'P' && joueur != 'C') {
        printf("Choix invalide. Veuillez choisir R, P ou C.\n");
        return 1;
    }

    ordinateur = hasard();
    printf("L'ordinateur a choisi: %c\n", ordinateur);

    resultat = comparaison(joueur, ordinateur);

    if (resultat == 0) {
        printf("Égalité !\n");
    } else if (resultat == 1) {
        printf("Vous avez gagné !\n");
    } else {
        printf("L'ordinateur a gagné !\n");
    }

    return 0;
}
