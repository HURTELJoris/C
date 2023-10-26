#include "pile_entier.h"

pile_entier::pile_entier(int maxTaille)
{
    this->taille = maxTaille;
    this->hauteur = 0;
    this->pile = new int[taille];
}

pile_entier::~pile_entier()
{
    delete[] pile;
}

void pile_entier::empile(int valeur)
{
    if (!pleine())
    {
        pile[hauteur] = valeur;
        hauteur++;
    }
    else
    {
        std::cout << "La pile est pleine. Impossible d empiler." << std::endl;
    }
}


void pile_entier::operator<(int valeur)
{
    if (!pleine())
    {
        pile[hauteur] = valeur;
        hauteur++;
    }
    else
    {
        std::cout << "La pile est pleine. Impossible d empiler." << std::endl;
    }
}

int pile_entier::depile()
{
    if (!vide())
    {
        hauteur--;
        return pile[hauteur];
    }
    else
    {
        std::cout << "La pile est vide. Impossible de depiler." << std::endl;
        return -1; // Une valeur sentinelle pour indiquer une pile vide.
    }
}


int pile_entier::operator>(int valeurdepile)
{
    if (!vide())
    {
        hauteur--;
        return pile[hauteur];
    }
    else
    {
        std::cout << "La pile est vide. Impossible de depiler." << std::endl;
        return -1; // Une valeur sentinelle pour indiquer une pile vide.
    }
}


int pile_entier::pleine()
{
    return hauteur == taille;
}

int pile_entier::vide()
{
    return hauteur == 0;
}

void pile_entier::affiche()
{
    if (!vide())
    {
        std::cout << "Contenu de la pile : ";
        for (int i = 0; i < hauteur; i++)
        {
            std::cout << pile[i] << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Contenu de la pile : Vide" << std::endl;
    }
}

int pile_entier::getdepile()
{
    return pile[hauteur - 1];
}