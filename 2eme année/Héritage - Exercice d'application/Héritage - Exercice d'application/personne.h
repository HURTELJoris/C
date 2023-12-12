#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class personne
{
protected:
	std::string nom;
	std::string prenom;
	int annee;
public:
	personne(std::string lenom, std::string leprenom, int annee);
	virtual ~personne();
	void affiche();
};