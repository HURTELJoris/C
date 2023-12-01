#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "Header.h"
#include <conio.h>

using namespace std;
/*
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
*/
void lire(int*tab, int *nbValues)
{

	cout << "entrez 20 valeurs maximum, entrez -0 pour arreter la saisie" << endl;
	for (int i = 0; i < 20; i++)
	{
		cin >> tab[i];
		if (tab[i] == -0)
		{
			tab[i] = '\0';
			break;
		}
		(*nbValues)++;
	}
}

int indice_min(int* tab, int i1, int i2)
{
	return tab[i1] < tab[i2] ? i1 : i2;
}

void tri(int *tab, int nbValues)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (int i = 0; i < nbValues; i++)
	{
		for (int j = 0; j < nbValues; j++)
		{
			if (indice_min(tab, j, j + 1) == j + 1)
			{
				int tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}

}

void affiche(int* tab, int nbValues)
{
	for (int i = 0; i < nbValues; i++)
	{
		cout << tab[i] << " ";
	}
}



int main(int argc, char **argv)
{
	int tab[20];
	int nbValues = 0;
	lire(tab, &nbValues);
	tri(tab, nbValues);
	affiche(tab, nbValues);
}