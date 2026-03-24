#include "Date.h"
#include <iostream>

using namespace std;

// Constructeur vide
Date::Date() {
    jour = mois = annee = 0;
}

// Constructeur avec initialisation
Date::Date(int j, int m, int a) {
    jour = j;
    mois = m;
    annee = a;
}

// Accesseurs
int Date::getjour() const {
    return jour;
}

int Date::getmois() const {
    return mois;
}

int Date::getannee() const {
    return annee;
}

// Test année bissextile (CORRIGÉ)
bool Date::estBissextile() const {
    return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
}

// Incrément d'une date
void Date::incrementer() {
    int lmois[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    // Correction ici
    if (estBissextile()) {
        lmois[1] = 29;
    }

    jour++;

    if (mois >= 1 && mois <= 12 && jour > lmois[mois - 1]) {
        jour = 1;
        mois++;
        if (mois == 13) {
            mois = 1;
            annee++;
        }
    }
}

// Affichage
void Date::afficher() const {
    cout << jour << "/" << mois << "/" << annee;
}

// Saisie
void Date::saisir() {
    cin >> jour >> mois >> annee;
}

// Opérateur <<
ostream& operator<<(ostream& out, const Date& y) {
    out << y.getjour() << "/" << y.getmois() << "/" << y.getannee();
    return out;
}

// Opérateur >>
istream& operator>>(istream& in, Date& y) {
    cout << "Entrez une date (jour mois annee) : ";
    in >> y.jour >> y.mois >> y.annee;
    return in;
}

bool Date::operator==(const Date& y) const {
    return (annee == y.annee) && (mois == y.mois) && (jour == y.jour);
}

bool Date::operator<=(const Date& y) const {
    return (*this < y) || (*this == y);
}

// Opérateur ++ (préfixe CORRIGÉ)
Date& Date::operator++() {
    incrementer();
    return *this;
}

// Opérateur <
bool Date::operator<(const Date& y) const {
    if (annee != y.annee) return annee < y.annee;
    if (mois != y.mois) return mois < y.mois;
    return jour < y.jour;
}

// Opérateur !=
bool Date::operator!=(const Date& y) const {
    return (annee != y.annee) || (mois != y.mois) || (jour != y.jour);
}
