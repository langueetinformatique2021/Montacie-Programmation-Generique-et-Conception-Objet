#include "cle.h"

// Constructeur
Cle::Cle(std::string matricule_) {
	matricule = matricule_;
	 }
	 
	 
bool Cle::operator < (const Cle & c) const {
	return (matricule < c.matricule);
}

