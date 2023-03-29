#pragma once
#include <iostream>
#include <math.h>
class pile_entier
{
	int *pile, taille, hauteur; // pointeur sur les valeurs de la pile, taille maximum, hauteur actuelle
public:

	pile_entier(int taille = 20); // constructeur, taille de la pile, 20 par defaut, initialise la hauteur � 0

	 // alloue dynamiquement de la place m�moire

	~pile_entier(); // destructeur-lib�re la pile

	void empile(int); // ajoute un �lement
	int depile(); // retourne la valeur de l�entier en haut de la pile, la hauteur
	// diminue de 1 unit�
	int pleine(); // retourne 1 si la pile est pleine, 0 sinon
	int vide(); // retourne 1 si la pile est vide, 0 sinon
};