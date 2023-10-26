#include "vecteur.h"  // Inclure le fichier header de votre classe vecteur

vecteur::vecteur(float abs, float ord)
{
    x = abs;
    y = ord;
}

void vecteur::affiche()
{
    std::cout << "x = " << x << " y = " << y << "\n";
}

vecteur vecteur::operator+(float z)
{
    vecteur res;
    res.x = z + x;
    res.y = z + y;
    return res;
}

vecteur operator+(float z, vecteur& w)
{
    vecteur res;
    res.x = z + w.x;
    res.y = z + w.y;
    return res;
}

float vecteur::operator*(vecteur& w)
{
    // Formule produit scalaire = OA X OB X cos(angle(AOB)).
    float pscalaire = x * w.x + y * w.y;
    return pscalaire;
}

vecteur vecteur::operator*(float z)
{
    vecteur vecteurproduit1;
    vecteurproduit1.x *= z;
    vecteurproduit1.y *= z;
    return vecteurproduit1;
}

vecteur operator*(float z, vecteur& w)
{
    w.x *= z;
    w.y *= z;
    return w;
}

/*

float vecteur::getlongueurvecteur(vecteur& w)
{
    // Formule longueur d'un vecteur = sqrt((xA - xB)² + (yA - yB)²)
    float longueur = sqrt(((w.x - x) * (w.x - x)) + ((w.y - y) * (w.y - y)));
    return longueur;
}

float vecteur::getanglevecteur(vecteur& w)
{
    // Formule angle géométrique : cos(AOB) = vecteur(OA) X vecteur(OB) / OA X OB
    // Je suis obligé d'utiliser des float pour le produit de deux vecteur car si je surcharge l'opérateur * il y aura une surcharge en trop.
    float x = x * w.x;
    float y = y * w.y;
    float angle = 
    return angle;
}

*/