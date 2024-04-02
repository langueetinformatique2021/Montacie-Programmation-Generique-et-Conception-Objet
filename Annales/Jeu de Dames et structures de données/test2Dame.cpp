#include "Dame.h"

int main() {
    Dame game;
     game.afficher();

    // Déplacement du pion blanc de (6, 5) à (5, 4)
    game.move(6, 5, 5, 4);
    game.afficher();

    return 0;
}