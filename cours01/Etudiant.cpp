#include "Etudiant.h"

// Constructeur par défaut
Etudiant::Etudiant() {
    m_NombreNote = m_NombreNoteDef;
    m_Tnote = new int[m_NombreNote]{};
}

// Constructeur avec taille
Etudiant::Etudiant(int n) {
    m_NombreNote = n;
    m_Tnote = new int[m_NombreNote]{};
}

// Constructeur de copie (copie profonde)
Etudiant::Etudiant(const Etudiant& e) {
    m_NombreNote = e.m_NombreNote;
    m_Tnote = new int[m_NombreNote];
    for (int i = 0; i < m_NombreNote; i++) {
        m_Tnote[i] = e.m_Tnote[i];
    }
}

// Destructeur
Etudiant::~Etudiant() {
    delete[] m_Tnote;
}

// Opérateur d'affectation
Etudiant& Etudiant::operator=(const Etudiant& e) {
    if (this != &e) {
        delete[] m_Tnote;

        m_NombreNote = e.m_NombreNote;
        m_Tnote = new int[m_NombreNote];
        for (int i = 0; i < m_NombreNote; i++) {
            m_Tnote[i] = e.m_Tnote[i];
        }
    }
    return *this;
}

// Ajouter une note
void Etudiant::putnote(int e, int n) {
    if (e >= 0 && e < m_NombreNote) {
        m_Tnote[e] = n;
    }
}

// Lire une note
int Etudiant::getnote(int e) const {
    if (e < 0 || e >= m_NombreNote)
        return -1;
    return m_Tnote[e];
}
