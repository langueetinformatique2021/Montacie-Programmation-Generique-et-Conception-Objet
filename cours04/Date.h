#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int jour;
    int mois;
    int annee;

    bool estBissextile() const;

public:
    // Constructeurs
    Date();
    Date(int j, int m, int a);

    // Accesseurs
    int getjour() const;
    int getmois() const;
    int getannee() const;

    // Méthodes
    void incrementer();
    void afficher() const;
    void saisir();

    // Surcharge d'opérateurs
    Date& operator++();                  // ++d (préfixe)
    bool operator<(const Date& y) const;
    bool operator!=(const Date& y) const;
    bool operator<=(const Date& y) const;
    bool operator==(const Date& y) const;

    // Fonctions amies
    friend std::ostream& operator<<(std::ostream& out, const Date& y);
    friend std::istream& operator>>(std::istream& in, Date& y);
};

#endif
