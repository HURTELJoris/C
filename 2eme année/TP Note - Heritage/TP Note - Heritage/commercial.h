#pragma once
#include "employe.h"

// Classe héritée de la classe employe qui permet de créer et gérer un commercial.

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

