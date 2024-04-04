#include <string>

class Cle {
public:
    std::string matricule;

    // Constructeur
    Cle(std::string matricule_);
    bool operator < (const Cle & c) const;
};
