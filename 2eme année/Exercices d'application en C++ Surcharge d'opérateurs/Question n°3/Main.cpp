#include "vecteur.h" // Inclure le fichier header de votre classe vecteur

/*

En utilisant la propriété de surdéfinition des fonctions du C++, créer :

une fonction membre de la classe vecteur de prototype float vecteur::operator*(vecteur); qui retourne le produit scalaire de 2 vecteurs ;
une fonction membre de la classe vecteur de prototype vecteur vecteur::operator*(float); qui retourne le vecteur produit d’un vecteur et d’un réel (donne une signification à v2 = v1 * h;) ;
une fonction AMIE de la classe vecteur de prototype vecteur operator*(float, vecteur); qui retourne le vecteur produit d’un réel et d’un vecteur (donne une signification à v2 = h * v1;).

*/

int main(int argc, char* argv[])
{
    // Ici v1 = O.
    vecteur v1, v2(5, 6), v3(5, 3), v4(3);
    float h = 2.0;
    float p;
    // p = le produit scalaire de v1 et v2.
    p = v1 * v2;
    // v3 = le vecteur produit de h et de v1 (normalement 0).
    v3 = h * v1;
    // v4 = le vecteur produit de v1 et de h (normalement 0 aussi).
    v4 = v1 * h;

    // On affiche les valeurs de chaque vecteur.
    v1.affiche();
    v2.affiche();
    v3.affiche();
    v4.affiche();
    return 0;
}