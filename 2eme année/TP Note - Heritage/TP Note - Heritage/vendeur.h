#pragma once
#include "commercial.h"

// Classe héritée de commercial qui permet de créer et gérer un vendeur.

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

