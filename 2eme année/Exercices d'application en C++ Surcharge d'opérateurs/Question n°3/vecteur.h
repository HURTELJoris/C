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
#include <cmath>

// Classe vecteur
// Surdefinition de l'operateur + par une fonction AMIE
class vecteur
{
    float x, y;
public:
    vecteur(float abs = 0, float ord = 0);
    void affiche();
    vecteur operator+(float z); //retourne le vecteur correspondent à la somme
    friend vecteur operator+(float z, vecteur& w); //idem

    //void operator—();
    //friend operator—(const vector& w);

    // J'aurais aimé les faire mais je ne sais pas comment les méthodes doivent fonctionner.

    float operator*(vecteur& w);
    vecteur operator*(float z);
    friend vecteur operator*(float z, vecteur& w);

    /*
    float getlongueurvecteur(vecteur& w); // Pour avoir la longueur d'un vecteur rapidement afin de calculer le produit scalaire.
    float getanglevecteur(vecteur& w); // Pour avoir l'angle d'un vecteur rapidement afin de calculer le produit scalaire.
    */
};