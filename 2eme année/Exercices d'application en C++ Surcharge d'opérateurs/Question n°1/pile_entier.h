#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

class pile_entier
{
private:
    int* pile;
    int taille;
    int hauteur;

public:
    pile_entier(int maxTaille = 20);
    ~pile_entier();
    void empile(int valeur);
    void operator<(int valeur); // surdefinition de l'operateur < / remplace empile.
    int depile();
    int operator>(int valeurdepile); // surdefinition de l'operateur > / remplace dépile.
    int pleine();
    int vide();
    void affiche(); // Version console
    int getdepile(); // Création d'une méthode getdepile pour aller avec la surdefinition de l'operateur >.
};