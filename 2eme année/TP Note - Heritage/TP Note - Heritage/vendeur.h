#pragma once
#include "commercial.h"

// Classe h�rit�e de commercial qui permet de cr�er et g�rer un vendeur.

class vendeur :
    public commercial
{
public :
    // Constructeur
    vendeur(string nom, string prenom, int age, int prime = 2,int salaire = 50);
    // Destructeur
    ~vendeur();
    // Accesseur du salaire du vendeur
    int getsalaire() { return employe::getsalaire() + getprime(); };
};

