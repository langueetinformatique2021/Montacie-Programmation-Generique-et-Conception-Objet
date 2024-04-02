#include <array>

// Enum pour représenter l'état de chaque case du damier
enum class CaseState { Empty, Black, White };

// Classe pour représenter le damier
class Damier {
private:
    std::array<std::array<CaseState, 8>, 8> board; // Matrice représentant le damier

public:
    // Constructeur
    Damier() {
        // Initialisation du damier avec des cases vides
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[i][j] = CaseState::Empty;
            }
        }
    }
};
