#include <iostream>
#include "pile_entier.h"

int main(int argc, char** argv)
{
    pile_entier pile(20);

    pile < 6;
    pile < 9;

    int n;
    pile > n;

    pile.affiche();
    std::cout << n << std::endl;

    return 0;
}
