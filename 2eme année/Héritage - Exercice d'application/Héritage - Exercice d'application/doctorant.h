#pragma once
#include "etudiant.h"
#include "prof.h"

class doctorant : public etudiant, public prof
{
private :
	std::string sujetThese;
public :
	doctorant(std::string lenom, std::string leprenom, int annee, 
		char* classe, float* Moyenne, std::string commentaires, 
		std::string matiere, std::vector<std::string> classes, 
		std::string sujetThese);
	virtual void affiche();
	~doctorant();
};

