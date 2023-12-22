#include "employe.h"

employe::employe(string prenom, string nom, int age, int salaire)
{
	this->nom = nom;
	this->prenom = prenom;
	this->age = age;
	this->salaire = salaire;
}

employe::~employe()
{
	cout << prenom.c_str() << " " << nom.c_str() << " est mort ..." << "Il avait " << age << "ans, et un salaire de " << salaire << " euros par mois." << endl << endl;
}
