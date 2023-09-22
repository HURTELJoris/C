#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"


int main(int argc, char** argv)
{
	int tab[20], nbValues = 0, value;
	//on affiche le tableau
	affiche(tab, nbValues);
	//on ajoute la valeur 1 au tableau
	empile(1, tab, &nbValues);
	//on affiche le tableau
	affiche(tab, nbValues);
	//on ajoute la valeur 5 au tableau
	empile(5, tab, &nbValues);
	//on affiche le tableau
	affiche(tab, nbValues);
	//on supprime la valeur 5 du tableau
	depile(&value, tab, &nbValues);
	//on affiche la valeur supprimée qu'on a gardé en mémoire
	printf("\n %d \n\n", value);
	affiche(tab, nbValues);

	return 0;
}