#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
// #include "Header.h"

/*
	1. En Langage C, d�clarez une variable � varfloat � de type float initialis�e, � la d�claration, avec la valeur 1.7,
	2. Affichez l�adresse de varFloat,
	3. D�clarez une variable permettant de stocker l�adresse de la variable varFloat,
	4. Dessinez la configuration de la m�moire,
	5. Affichez le contenu de la zone point�e par le pointeur, en utilisant le pointeur ;
*/

int main(int argc, char** argv)
{
	// 1. En Langage C, d�clarez une variable � varfloat � de type float initialis�e, � la d�claration, avec la valeur 1.7,
	float varfloat = 1.7;
	// 2. Affichez l�adresse de varFloat,
	printf("Adresse de varfloat = %p\n\n",&varfloat);
	// 3. D�clarez une variable permettant de stocker l�adresse de la variable varFloat,
	float* Pvarfloat = &varfloat;
	// 4. Dessinez la configuration de la m�moire,
	printf("Configuration de la memoire :\n varfloat =  [%p : %f]\n Pvarfloat = [%p : %p]\n\n", &varfloat, varfloat,&Pvarfloat, Pvarfloat);
	//5. Affichez le contenu de la zone point�e par le pointeur, en utilisant le pointeur;
	printf("Contenu de la zone point�e par Pvarfloat = %f\n\n", *Pvarfloat);
	return 0;
}