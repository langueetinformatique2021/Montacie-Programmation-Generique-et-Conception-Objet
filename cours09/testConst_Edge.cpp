#include <string>
#include <vector>
#include <iostream>
#include "cttl/cttl.h"
#include "utils/fileio.h"

using namespace std;
using cttl::node;
using cttl::const_edge;

int main()
{
    string texte;

    cttl::file2string("adelaide.txt", texte);

    cout << "Taille texte: " << texte.size() << endl;

    int i1 = -1, i2;
    int n = 0;

    vector<const_edge<> > vs;

    while ((i2 = texte.find('\n', i1 + 1)) != string::npos) {
        node<> p1(texte, i1 + 1);
        node<> p2(texte, i2);

        vs.push_back(const_edge<>(p1, p2));

        n++;
        i1 = i2;
    }

    if (i1 + 1 < (int)texte.size()) {
        node<> p1(texte, i1 + 1);
        node<> p2(texte, texte.size());

        vs.push_back(const_edge<>(p1, p2));
        n++;
    }

    cout << "Nombre de lignes: " << n << endl;

    cout << "Entrez un indice : ";
    int i;
    cin >> i;

    if (i < 0 || i >= n) {
        cerr << "Indice invalide" << endl;
        return 1;
    }

    cout << vs[i].first.offset() << " "
         << vs[i].second.offset() << endl;

    cout << vs[i].text() << endl;

    return 0;
}
