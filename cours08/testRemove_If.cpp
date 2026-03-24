#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

template<class T>
class NomPropre {
public:
    bool operator()(const T& s) const {
        return !s.empty() && (s.at(0) >= 'A' && s.at(0) <= 'Z');
    }
};

int main() {
    list<string> ls;

    // lecture des mots
    ifstream fEntree("cours08/Phrase.txt");
    if (!fEntree) {
        cerr << "Erreur ouverture fichier" << endl;
        return 1;
    }

    istream_iterator<string> in_it(fEntree);
    copy(in_it, istream_iterator<string>(), back_inserter(ls));

    fEntree.close();

    // affichage initial
    for (const auto& mot : ls)
        cout << mot << " ";
    cout << endl;

    // suppression des noms propres
    ls.remove_if(NomPropre<string>());

    // affichage après suppression
    for (const auto& mot : ls)
        cout << mot << " ";
    cout << endl;

    return 0;
}
