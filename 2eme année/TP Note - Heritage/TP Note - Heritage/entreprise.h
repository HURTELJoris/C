#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "technicien.h"
#include "vendeur.h"
#include "representant.h"

using namespace std;


// Classe qui permet de gérer l'entreprise.

class entreprise
{
private :
	string raisonsociale;
	int maxtech = 10;
	int maxcomm = 10;
	vector<technicien*> tech;
	vector<vendeur*> vend;
	vector<representant*> repr;
public :
	entreprise();
	~entreprise();
	// Permet d'avoir le nombre maximum de techniciens
	int getmaxtech() { return maxtech; };
	// Permet d'avoir le nombre maximum de commerciaux
	int getmaxcomm() { return maxcomm; };
	// Permet de donner un nom à l'entreprise
	void setraisonsocial();
	// Permet d'avoir le vecteur des techniciens
	vector<technicien*> gettechnicien() { return tech; };
	// Permet d'avoir le vecteur des vendeurs
	vector<vendeur*> getvendeur() { return vend; };
	// Permet d'avoir le vecteur des representants
	vector<representant*> getrepresentant() { return repr; };
	// Permet de vérifier si on dépasse le nombre maximum de commerciaux
	bool gestionmaxcomm();
	// Permet de vérifier si on dépasse le nombre maximum de techniciens
	bool gestionmaxtech();
};

