#include "personne.h"

personne::personne(std::string lenom, std::string leprenom, int annee)
{
	this->nom = lenom;
	this->prenom = leprenom;
	this->annee = annee;
}

personne::~personne()
{
	cout << nom.c_str() << " " << prenom.c_str() << " est morte ... Il avait " << annee << " an(s)" << endl << endl << endl;
}

void personne::affiche()
{
	cout << "Cette personne s'appelle : " << endl << nom.c_str() << " " << prenom.c_str() << ". Il a : " << annee << " an(s)." << endl << endl;
}