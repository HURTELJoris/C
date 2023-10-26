#include "vecteur.h" // Inclure le fichier header de votre classe vecteur

/*

Redéfinir l’opérateur == dans la classe vecteur, cette fonction permettra de savoir si deux vecteurs sont égaux (même valeur pour x et y).

*/

int main(int argc, char* argv[])
{
    vecteur a(2, 6), b(4, 8), c, d;
    c = a + 6.5;
    c.affiche();
    d = (float)7.8 + b;
    d.affiche();

    // a--;
    // --a;
    bool rep1 = c == a;
    std::cout << "c == a : " << rep1 << std::endl;
    bool rep2 = c == c;
    std::cout << "c == c : " << rep2 << std::endl;

    // J'aurais aimé les faire mais je ne sais pas comment les méthodes doivent fonctionner.

    return 0;
}