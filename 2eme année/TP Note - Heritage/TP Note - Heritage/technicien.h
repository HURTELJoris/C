#pragma once
#include "employe.h"

// Classe héritée de employe qui permet de créer et gérer un technicien.

class technicien :
    public employe
{   
public :
    // Constructeur
    technicien(string nom, string prenom, int age, int salaire = 40);
    // Destructeur
    ~technicien();
};

