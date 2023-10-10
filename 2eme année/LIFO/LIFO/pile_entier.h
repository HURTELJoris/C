#pragma once
#include <QString>

class pile_entier
{
private:
    int* pile;
    int taille;
    int hauteur;

public:

    // 1. Définissez les différentes méthodes

    pile_entier(int maxTaille = 20);
    ~pile_entier();
    void empile(int valeur);
    int depile();
    int pleine();
    int vide();
    void affiche(); // Version console
    QString affiche2(); // Version Qt
};