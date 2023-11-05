#include <stdlib.h>
#include <time.h>
#include "jeux.h"

char hasard() {
    char choix[] = {'R', 'P', 'C'};
    int index = rand() % 3;
    return choix[index];
}

int comparaison(char joueur, char ordinateur) {
    if (joueur == ordinateur) {
        return 0; // Égalité
    } else if (
        (joueur == 'R' && ordinateur == 'C') ||
        (joueur == 'P' && ordinateur == 'R') ||
        (joueur == 'C' && ordinateur == 'P')
    ) {
        return 1; // Joueur gagne
    } else {
        return -1; // Ordinateur gagne
    }
}
