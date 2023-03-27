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
Créer un programme qui définisse une structure point qui permet de stocker les
coordonnées d’un point (2 réels) et qui permette de :
-Saisir 15 points
-puis les afficher.
*/
typedef struct point
{
	float x;
	float y;
} point;

void initpoint(point*p)
{
	for (int i = 0; i < 15 ; i++)
	{
		printf("Veuillez entrer la latitude %d: ",i+1);
		scanf("%f", &p->x);
		printf("Veuillez entrer la longitude %d: ",i+1);
		scanf("%f", &p->y);

		printf("\nPoint %d : (%fx // %fy)\n\n", i + 1, p->x, p->y);
	}

}

int main(int argc, char** argv)
{
	point paris;
	initpoint(&paris);
}