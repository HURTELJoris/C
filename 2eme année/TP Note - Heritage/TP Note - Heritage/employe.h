#pragma once

#include <string>
#include <iostream>
using namespace std;

// Classe qui permet de créer et afficher un employé

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
	// Accesseur du nom de l'employé
	string getnom() { return this->nom; };
	// Accesseur du prénom de l'employé
	string getprenom() { return this->prenom; };
	// Accesseur de l'âge de l'employé
	int getage() { return this->age; };
	// Accesseur du salaire de l'employé
	virtual int getsalaire(){ return this->salaire; };
};