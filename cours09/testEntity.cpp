#include "cttl/cttl.h"
#include "utils/fileio.h"
#include <string>
#include <iostream>

using namespace cttl;
using std::cout;
using std::string;
using std::endl;

size_t NomPropre(const_edge<>& edge_) {
    string maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string min = "abcdefghijklmnopqrstuvwxyz";

    return (
        entity(maj) + +entity(min)
    ).bang_find(edge_);
}

int main() {
    string texte;
    file2string("adelaide.txt", texte);

    const_edge<> e(texte, 0, texte.size());

    size_t p;

    while ((p = NomPropre(e)) != string::npos) {
        cout << p << " "
             << texte.substr(p, e.first.offset() - p)
             << endl;

        // avancer d’un caractère pour éviter boucle infinie
        e.first.offset(p + 1);
    }

    return 0;
}
