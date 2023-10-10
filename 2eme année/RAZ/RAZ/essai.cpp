#include "essai.h"
#include <iostream>

using namespace std;

// Définition de la fonction raz par adresse.
void raz(essai& a) {
	a.n = 0;
	a.x = 0;
}
// Définition de la fonction raz par référence.
void raz(essai* a) {
	a->n = 0;
	a->x = 0;
}
// Définition de la fonction affiche.
void affiche(essai& b) {
	cout << b.x << " " << b.n << endl;
}