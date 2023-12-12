#include "doctorant.h"

doctorant::doctorant(std::string lenom, std::string leprenom, int annee
	, char* classe, float* Moyenne, std::string commentaires
	, std::string matiere, std::vector<std::string> classes
	, std::string sujetThese)

	: etudiant(lenom, leprenom, annee, classe, Moyenne, commentaires) 
	, prof(lenom, leprenom, annee, matiere, classes)
	, personne(lenom, leprenom, annee)
{

}

void doctorant::affiche()
{

}

doctorant::~doctorant()
{
	cout << "Destructeur doctorant ";
}
