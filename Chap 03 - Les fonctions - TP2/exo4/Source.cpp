#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

int* Lire(int* tab)
{
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		tab[i] = rand() % (20 + 1 - 0);
	}
	return tab;
}

void Affiche(int* tab)
{
	printf("\nTab = ");
	for (int i = 0; i < 20; i++)
	{
		printf("[%d]", tab[i]);
	}
	printf("\n\n");
}

int Indice_min(int* tab,int x,int y)
{
	if (tab[x] < tab[y])
	{	
		return x;
	}
	else
	{
		return y;
	}
}

void Trier(int* tab)
{
	int tabtri[20];
	int tabtritmp[20];
	tabtritmp[0] = 0;
	int tabtritmp2[20];
	tabtritmp2[0] = 0;
	printf("\nTab trie = ");
	for (int i = 0; i < 20; i++)
	{
		for (int j = 1; j < 19; j++)
		{
			tabtritmp[i] = tab[Indice_min(tab, i, j)];
			tabtritmp2[i] = tab[Indice_min(tab, i, j++)];
			if (tabtritmp[i] < tabtritmp2[i])
			{
				tabtri[i] = tab[Indice_min(tab, i, j)];
			}
			else
			{
				tabtri[i] = tab[Indice_min(tab, i, j++)];
			}
		}
		printf("[%d]", tabtri[i]);
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	int tableau[20];
	Lire(tableau);
	Affiche(tableau);
	srand(time(NULL));
	int x = rand() % (19 + 1 - 0);
	int y = rand() % (19 + 1 - 0);
	Trier(tableau);
}