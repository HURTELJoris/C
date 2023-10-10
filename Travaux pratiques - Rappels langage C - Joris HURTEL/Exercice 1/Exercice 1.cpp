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
	Vous écrirez une fonction échange qui échange les valeurs des deux variables entières qui lui sont transmises en argument.

	Contraintes :
	Ces deux variables, déclarées dans le main, seront affichées avant et après l’appel à la fonction échange dans le programme principal.
*/

int main(int argc, char** argv)
{
	// Déclaration des deux variables entières.
	int a = 1;
	int b = 2;
	// Affichage des deux variables avant l'échange.
	printf("%d - %d\n", a, b);
	// Echange des deux variables.
	echange(&a, &b);
	// Affichage des deux variables après l'échange.
	printf("%d - %d\n", a, b);

	return 0;
}