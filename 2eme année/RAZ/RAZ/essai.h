#pragma once

// Structure essai.
struct essai
{
	int n;
	float x;
};

// Prototype de la fonction raz par adresse.
void raz(essai& a);
// Prototype de la fonction raz par r�f�rence.
void raz(essai* a);
// Prototype de la fonction affiche.
void affiche(essai& b);