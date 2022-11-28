#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"
#include <iostream>


/*
adr1 et adr2 sont des pointeurs pointant sur des r�els.
Le contenu de o� pointe adr1 vaut - 45.78; le contenu de o� pointe adr2 vaut 678.89.
Ecrire un programme qui ne contient que deux variables(adr1 et adr2) de type
pointeurs sur r��l, qui stocke deux valeurs r�elles(-45.78 et 678.89) et qui affiche les
adresses des espaces m�moires qui stockent les deux r��ls ainsi que le contenu de
ces deux espaces.
*/

int main(int argc, char** argv)
{
	float *adr1;
	float *adr2;
	adr1 = (float*)malloc(sizeof(float));
	adr2 = (float*)malloc(sizeof(float));
	*adr1 = -45.78;
	*adr2 = 678.89;


	printf("%p - %f  ||  %p - %f", adr1, *adr1, adr2, *adr2);
	free(adr1);
	free(adr2);
}	