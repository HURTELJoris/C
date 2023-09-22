#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
// #include "Header.h"

// Modifiez ces deux programmes pour n’afficher qu’une valeur sur deux du tableau :

/* A enlever

int main(int argc, char** argv)
{
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i+=2)
	{
		printf("%d", *(tabptr + i));
		// Il suffisait de changer i++ ligne 22 en i+=2 pour avoir une incrémentation de 2
	}

	return 0;
}

 A enlever */

int main(int argc, char** argv)
{
	int tabint[15] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int* tabptr = tabint;
	int i;

	for (i = 0; i < 15; i+=2)
	{
		printf("%d", *(tabptr));
		tabptr+=2;
	}
	// Il suffisait de changer le i++ ligne 39 en i=i+2 pour avoir une incrémentation de 2 
	// (sinon notre boucle affiche des valeurs vides), 
	// et de changer tabptr++ ligne 42 en tabptr+=2 pour afficher que la moitié tu tableau
	return 0;
}