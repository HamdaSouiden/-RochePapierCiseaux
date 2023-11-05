#include <stdio.h>
#include "jeux.h"

int main() {
    char joueur, ordinateur;
    int resultat;

    joueur = 'R'; // Vous pouvez changer la valeur pour tester différents scénarios.

    printf("Test avec joueur choisissant %c\n", joueur);

    ordinateur = hasard();
    printf("L'ordinateur a choisi: %c\n", ordinateur);

    resultat = comparaison(joueur, ordinateur);

    if (resultat == 0) {
        printf("Égalité !\n");
    } else if (resultat == 1) {
        printf("Le joueur gagne !\n");
    } else {
        printf("L'ordinateur gagne !\n");
    }

    return 0;
}
