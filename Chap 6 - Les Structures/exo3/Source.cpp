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
Reprendre l’exercice ci-dessus en créant une fonction « saisie » qui permet de saisir ces
points, une fonction « affiche » qui permet de les afficher.
Mettre en œuvre ces deux fonctions dans main(). On ne devra voir apparaître dans main() que
la déclaration des différentes variables ainsi que l’appel aux fonctions.
*/
typedef struct point
{
	float x;
	float y;
} point;

void initsaisie(point*p, float*T)
{
	int j = 1;
	int i = 0;
	printf("             Saisie             \n");
	printf("--------------------------------\n\n");
	for (int compteur = 0; compteur < 3;compteur++)
	{
		printf("Veuillez entrer la latitude %d: ", compteur + 1);
		scanf("%f", &p->x);
		T[i] = p->x;
		printf("Veuillez entrer la longitude %d: ", compteur + 1);
		scanf("%f", &p->y);
		printf("\n\n");
		T[j] = p->y;
		i += 2;
		j += 2;
	}
}

void initaffiche(float*T)
{
	int i = 0;
	int j = 1;
	printf("            Affichage           \n");
	printf("--------------------------------\n\n");
	for (int compteur = 0; compteur < 3; compteur++)
	{
		printf("\nPoint %d : (%fx // %fy)", compteur + 1, T[i],T[j]);
		i += 2;
		j += 2;
	}
	printf("\n\n");
}

int main(int argc, char** argv)
{
	float Tableau[100];
	point paris;
	initsaisie(&paris,Tableau);
	initaffiche(Tableau);
}