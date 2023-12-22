#pragma once
#include "commercial.h"

// Classe héritée de commercial qui permet de créer et gérer un représentant.

class representant :
    public commercial
{
private :
    int nbdeplacement;
public :
    // Constructeur
    representant(string nom, string prenom, int age, int nbdeplacement = 0, int prime = 5, int salaire = 50);
    // Accesseur du nombre de déplacements du représentant
    int getnbdeplacement() { return nbdeplacement; };
    // Permet d'ajouter un déplacement au représentant
    void adddeplacement(int nombbredeplacement) { nbdeplacement += nombbredeplacement; };
    // Permet de remetre à zéro les déplacements du représentant
    void razdeplacement() { nbdeplacement = 0; };
    // Accesseur du salaire du représentant
    int getsalaire() { return employe::getsalaire() + getprime() + 3* getnbdeplacement(); };
    // Destructeur
    ~representant();
};

