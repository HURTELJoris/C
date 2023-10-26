#include "pile_entier.h"

/*

Reprendre la classe pile_entier de l’exercice précédent (TP Gestion d'une pile (LIFO)) et remplacer la fonction membre « empile » par l’opérateur < 
et la fonction membre « depile » par l’opérateur >.

p < n ajoute la valeur n sur la pile p ;
p> n supprime la valeur du haut de la pile p et la place dans n.

*/

int main(int argc, char* argv[])
{
    /*

    // Crée une instance de la classe pile_entier avec une taille maximale de 10 éléments.
    pile_entier maPile1(10);
    std::cout << "Tests de la classe pile_entier : "<< std::endl << std::endl;

    std::cout << "La pile est elle pleine : " << maPile1.pleine() << std::endl;
    std::cout << "La pile est elle vide : " << maPile1.vide() << std::endl << "\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout << "Empile : " << i * 2 << std::endl;
        maPile1.empile(i * 2); // Empile les nombres pairs de 2 à 20
        maPile1.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "\nLa pile est pleine : " << maPile1.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile1.vide() << std::endl << "\n";

    maPile1.affiche(); // Affiche le contenu de la pile

    while (!maPile1.vide())
    {
        std::cout << "Depile : " << maPile1.depile() << std::endl;
        maPile1.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "\nLa pile est elle pleine : " << maPile1.pleine() << std::endl;
    std::cout << "La pile est elle vide : " << maPile1.vide() << std::endl << "\n";

    */

    // Crée une instance de la classe pile_entier avec une taille maximale de 10 éléments.
    pile_entier maPile2(10);
    std::cout << "Tests de la classe pile_entier avec les surcharges d operateurs : " << std::endl << std::endl;

    std::cout << "La pile est elle pleine : " << maPile2.pleine() << std::endl;
    std::cout << "La pile est elle vide : " << maPile2.vide() << std::endl << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << "Empile : " << i * 2 << std::endl;
        maPile2 < i * 2; // Empile les nombres pairs de 2 à 20
        maPile2.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "\nLa pile est pleine : " << maPile2.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile2.vide() << std::endl << std::endl;

    maPile2.affiche(); // Affiche le contenu de la pile

    while (!maPile2.vide())
    {
        std::cout << "Depile : " << maPile2.getdepile() << std::endl;
        maPile2 > maPile2.getdepile();
        maPile2.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "\nLa pile est elle pleine : " << maPile2.pleine() << std::endl;
    std::cout << "La pile est elle vide : " << maPile2.vide() << std::endl << std::endl;

    return 0;
}