#pragma once
#include "employe.h"

// Classe h�rit�e de employe qui permet de cr�er et g�rer un technicien.

class technicien :
    public employe
{   
public :
    // Constructeur
    technicien(string nom, string prenom, int age, int salaire = 40);
    // Destructeur
    ~technicien();
};

