#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 1.h"

/*
	Objectif :
	Vous �crirez une fonction �change qui �change les valeurs des deux variables enti�res qui lui sont transmises en argument.

	Contraintes :
	Ces deux variables, d�clar�es dans le main, seront affich�es avant et apr�s l�appel � la fonction �change dans le programme principal.
*/

int main(int argc, char** argv)
{
	// D�claration des deux variables enti�res.
	int a = 1;
	int b = 2;
	// Affichage des deux variables avant l'�change.
	printf("%d - %d\n", a, b);
	// Echange des deux variables.
	echange(&a, &b);
	// Affichage des deux variables apr�s l'�change.
	printf("%d - %d\n", a, b);

	return 0;
}