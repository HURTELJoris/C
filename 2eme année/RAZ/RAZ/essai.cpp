#include "essai.h"
#include <iostream>

using namespace std;

// D�finition de la fonction raz par adresse.
void raz(essai& a) {
	a.n = 0;
	a.x = 0;
}
// D�finition de la fonction raz par r�f�rence.
void raz(essai* a) {
	a->n = 0;
	a->x = 0;
}
// D�finition de la fonction affiche.
void affiche(essai& b) {
	cout << b.x << " " << b.n << endl;
}