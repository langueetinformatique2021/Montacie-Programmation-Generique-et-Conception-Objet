#include <iostream>
#include <array>

// Enum pour représenter l'état de chaque case du damier
enum class CaseState { Empty, Black, White };

// Classe pour représenter le jeu de dames
class Dame {
private:
    std::array<std::array<CaseState, 8>, 8> board; // Matrice représentant le damier
    bool isWhiteTurn; // Indique si c'est le tour du joueur blanc

public:
    // Constructeur
    Dame();

    // Méthode pour effectuer un déplacement de pion
    bool move(int fromRow, int fromCol, int toRow, int toCol);

    // Autres méthodes publiques nécessaires au jeu
    
    void afficher();
};
