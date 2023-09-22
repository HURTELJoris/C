#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

bool empile(int value, int* tab, int* nbValues)
{
	if (*nbValues < 20)
	{
		tab[*nbValues] = value;
		*nbValues = *nbValues + 1;
		return true;
	}
	else
	{
		return false;
	}
}

bool depile(int* value, int* tab, int* nbValues) {
	if (*nbValues > 0)
	{
		*nbValues = *nbValues - 1;
		*value = tab[*nbValues];
		
		
		return true;
	}
	else
	{
		return false;
	}

}

void affiche(int* tab, int nbValues) {
	printf("tab = [");
	while (nbValues > 0){
		printf("%d ,", tab[nbValues - 1]);
		nbValues = nbValues - 1;
	}
	printf("]\n\n");
}