#include "cle.h"
#include "valeur.h"
#include <map>
#include <iostream>


int main() {

std::map<Cle, Valeur> Table;
Table.insert(std::make_pair(Cle("0079"), Valeur("HENRION", "Lieutenant")));
Table.insert(std::make_pair(Cle("0101"), Valeur("PIERRE", "Capitaine")));
Table.insert(std::make_pair(Cle("0126"), Valeur("MARTIN", "Lieutenant")));
Table.insert(std::make_pair(Cle("0846"), Valeur("JEANCARD", "Lieutenant")));
Table.insert(std::make_pair(Cle("2312"), Valeur("BARON", "Lieutenant")));
Table.insert(std::make_pair(Cle("4684"), Valeur("DENIS", "Capitaine")));
Table.insert(std::make_pair(Cle("6587"), Valeur("DUPONT", "Colonel")));

for (const auto& pair : Table) 
    std::cout << "Matricule: " << pair.first.matricule << ", Nom: " << pair.second.nom << ", Grade: " << pair.second.grade << std::endl;


  return 0;
}
