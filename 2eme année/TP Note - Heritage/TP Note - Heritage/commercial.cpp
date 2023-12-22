#include "commercial.h"

commercial::commercial(string nom, string prenom, int age, int prime, int salaire)
	: employe(prenom, nom, age, salaire)
{
	this->prime = prime;
}

commercial::~commercial()
{
	cout << getprenom().c_str() << " " << getnom().c_str() << " est mort ..." << "Il avait " << getage() << "ans, et un salaire de " << getsalaire() << " euros par mois, avec une prime de " << prime << " euros." << endl << endl;
}