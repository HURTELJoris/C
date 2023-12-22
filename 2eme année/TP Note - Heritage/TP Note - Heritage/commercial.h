#pragma once
#include "employe.h"

// Classe h�rit�e de la classe employe qui permet de cr�er et g�rer un commercial.

class commercial :
    public employe
{
private :
    int prime;
public :
    // Constructeur
    commercial(string nom, string prenom, int age, int prime, int salaire = 50);
    // Destructeur
    ~commercial();
    // Accesseur de la prime du commercial
    int getprime() { return prime; };

};

