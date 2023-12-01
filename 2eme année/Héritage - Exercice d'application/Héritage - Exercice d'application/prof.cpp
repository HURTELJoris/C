#include "prof.h"

prof::prof(std::string lenom, std::string leprenom, int année, std::string matiere, std::vector<std::string> classes)
	: personne(lenom, leprenom, année)
{
	this->matiere = matiere;
	this->Classes.swap(classes);
}

void prof::affiche()
{
	cout << "Ce prof s'appelle : " << nom.c_str()
		<< " " << prenom.c_str() << endl << "Il a : "
		<< annee << "ans, enseigne le/l\'/la : "
		<< matiere.c_str()
		<< " aux classes de : ";
	for (int i = 0; i < size(Classes)-1; i++)
	{
		cout << Classes[i] << ", ";
	}
	cout << Classes[size(Classes)-1] << endl << endl;
}