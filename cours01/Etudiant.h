#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant {
private:
    int* m_Tnote;
    int m_NombreNote;
    static const int m_NombreNoteDef = 5;

public:
    // Constructeurs
    Etudiant();                  // défaut
    Etudiant(int n);             // avec taille
    Etudiant(const Etudiant& e); // constructeur de copie

    // Destructeur
    ~Etudiant();

    // Opérateur d'affectation
    Etudiant& operator=(const Etudiant& e);

    // Méthodes
    void putnote(int e, int n);
    int getnote(int e) const;
};

#endif
