/*
 * testConstruction.cpp
 *
 *  Created on: 24 mars 2026
 *      Author: montacie
 */

#include <iostream>
#include <string>
#include "suds/SSTree.h"
#include "suds/Tools.h"

int main()
{
    std::cout << "lecture au clavier du mot" << std::endl;

    // std::string A; std::cin >> A;
    std::string A = "ABCFABCDABFABCDABCDABDE";

    SSTree* sst = new SSTree(
        reinterpret_cast<uchar*>(const_cast<char*>(A.c_str())),
        A.size()
    );

    // Affichage de l'arbre de suffixes
    sst->PrintTree(0, 0);

    delete sst; // éviter fuite mémoire

    return 0;
}
