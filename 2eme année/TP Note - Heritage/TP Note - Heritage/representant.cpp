#include "representant.h"

representant::representant(string nom, string prenom, int age, int nbdeplacement, int prime, int salaire)
	: commercial(prenom, nom, age, prime, salaire)
{
	this->nbdeplacement = nbdeplacement;
}

representant::~representant()
{
	cout << getprenom().c_str() << " " << getnom().c_str() << " est mort ..." << "Il avait " << getage() << "ans, et un salaire de " << getsalaire() << " euros par mois, avec une prime de " << getprime() << " euros." << endl << endl;
}
