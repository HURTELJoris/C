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

bool vecteur::operator==(vecteur& a)
{
    if (a.x == x && a.y == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}