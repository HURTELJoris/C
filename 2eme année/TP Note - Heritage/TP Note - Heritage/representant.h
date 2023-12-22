#pragma once
#include "commercial.h"

// Classe h�rit�e de commercial qui permet de cr�er et g�rer un repr�sentant.

class representant :
    public commercial
{
private :
    int nbdeplacement;
public :
    // Constructeur
    representant(string nom, string prenom, int age, int nbdeplacement = 0, int prime = 5, int salaire = 50);
    // Accesseur du nombre de d�placements du repr�sentant
    int getnbdeplacement() { return nbdeplacement; };
    // Permet d'ajouter un d�placement au repr�sentant
    void adddeplacement(int nombbredeplacement) { nbdeplacement += nombbredeplacement; };
    // Permet de remetre � z�ro les d�placements du repr�sentant
    void razdeplacement() { nbdeplacement = 0; };
    // Accesseur du salaire du repr�sentant
    int getsalaire() { return employe::getsalaire() + getprime() + 3* getnbdeplacement(); };
    // Destructeur
    ~representant();
};

