#include "Professeur.h"
Professeur::Professeur(std::string nom, std::string prenom, int age, std::string telephone, std::string adresse, std::string email, std::vector<matiereens> matieres, std::string classe)
	: Humain(nom, prenom, age, telephone, adresse, email)
{
	this->matieresens.swap(matieresens);
	this->classe = classe;
}