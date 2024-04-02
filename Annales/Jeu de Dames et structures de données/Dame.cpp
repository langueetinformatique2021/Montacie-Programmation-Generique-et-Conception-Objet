#include "Dame.h"

// Constructeur
Dame::Dame() {
    // Initialisation du damier avec des cases vides
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = CaseState::Empty;
        }
    }

    // Placement des pions noirs
    for (int i = 0; i < 3; ++i) {
        for (int j = (i % 2 == 0) ? 1 : 0; j < 8; j += 2) {
            board[i][j] = CaseState::Black;
        }
    }

    // Placement des pions blancs
    for (int i = 5; i < 8; ++i) {
        for (int j = (i % 2 == 0) ? 1 : 0; j < 8; j += 2) {
            board[i][j] = CaseState::White;
        }
    }

    // Initialisation du tour de jeu
    isWhiteTurn = true;
}

// Méthode pour effectuer un déplacement de pion
bool Dame::move(int fromRow, int fromCol, int toRow, int toCol) {
    // Vérification de la validité du mouvement
    // On peut ajouter ici les règles spécifiques au déplacement des pions dans le jeu de dames
    // Par exemple, vérifier si les coordonnées de départ et d'arrivée sont dans les limites du damier
    // et si le mouvement est conforme aux règles du jeu de dames
    if (fromRow < 0 || fromRow >= 8 || fromCol < 0 || fromCol >= 8 ||
        toRow < 0 || toRow >= 8 || toCol < 0 || toCol >= 8) {
        return false; // Mouvement invalide
    }

    // Déplacer le pion sur le damier
    board[toRow][toCol] = board[fromRow][fromCol];
    board[fromRow][fromCol] = CaseState::Empty;
   
   return true;
    }

 // Méthode pour afficher la position et la couleur des pions
void Dame::afficher() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            std::cout << "[" << i << "," << j << "]: ";
            switch (board[i][j]) {
                case CaseState::Empty:
                    std::cout << "Vide";
                    break;
                case CaseState::Black:
                    std::cout << "Noir";
                    break;
                case CaseState::White:
                    std::cout << "Blanc";
                    break;
            }
            std::cout << std::endl;
        }
    }
}