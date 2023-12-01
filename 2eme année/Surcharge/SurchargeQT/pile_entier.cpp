#include "pile_entier.h"
#include <iostream>

pile_entier::pile_entier(int taille = 20)
{
	this->hauteur = 0;
	this->taille = taille;
	this->pile = new int[taille];
}

pile_entier::~pile_entier()
{
	delete[] pile;
}

void pile_entier::empile(int valeur)
{
	if (!pleine())
		pile[hauteur++] = valeur;
}

int pile_entier::depile()
{
	if (!vide())
		return pile[--hauteur];

	return 0;
}

int pile_entier::pleine()
{
	return hauteur >= taille;
}

int pile_entier::vide()
{
	return hauteur <= 0;
}

void pile_entier::affiche()
{
	for (int i = 0; i < hauteur; i++)
	{
		if (i != 0) std::cout << ", ";
		std::cout << pile[i];
	}
	std::cout << std::endl;
}

bool pile_entier::operator<(const int& b)
{
	if (!pleine())
	{
		empile(b);
		return true;
	}
	return false;
}

bool operator>(pile_entier& a, int& b)
{
	if (!a.vide())
	{
		b = a.depile();
		return true;
	}

	return false;
}
