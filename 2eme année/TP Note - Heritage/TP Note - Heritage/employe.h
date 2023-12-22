#pragma once

#include <string>
#include <iostream>
using namespace std;

// Classe qui permet de cr�er et afficher un employ�

class employe
{
private :
	string nom, prenom;
	int age, salaire;
	
public :

	// Constructeur
	employe(string nom, string prenom, int age, int salaire);
	// Destructeur
	virtual ~employe();
	// Accesseur du nom de l'employ�
	string getnom() { return this->nom; };
	// Accesseur du pr�nom de l'employ�
	string getprenom() { return this->prenom; };
	// Accesseur de l'�ge de l'employ�
	int getage() { return this->age; };
	// Accesseur du salaire de l'employ�
	virtual int getsalaire(){ return this->salaire; };
};