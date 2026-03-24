/*
 * testLCSS.cpp
 *
 *  Created on: 24 mars 2026
 *      Author: montacie
 */

#include <iostream>
#include <fstream>
#include <string>
#include "suds/SSTree.h"
#include "suds/Tools.h"

using namespace std;

string lcss(string A, string B);

int main()
{
    string A, B;
    char c;

    ifstream fs1("candide.txt");
    if (!fs1) {
        cerr << "Erreur ouverture candide.txt" << endl;
        return 1;
    }

    while (fs1.get(c)) {
        A += c;
    }
    fs1.close();

    ifstream fs2("l'histoire de l'archiduc albert.txt");
    if (!fs2) {
        cerr << "Erreur ouverture du second fichier" << endl;
        return 1;
    }

    while (fs2.get(c)) {
        B += c;
    }
    fs2.close();

    cout << "Le plus long facteur commun entre les deux livres est :" << endl;
    cout << lcss(A, B) << endl << endl;

    return 0;
}
