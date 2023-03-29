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
Créer un programme qui définisse la structure fiche, qui saisisse une fiche et qui l'affiche.
*/
typedef struct fiche
{
	char nom[100];
} fiche;

void initfiche(fiche*p)
{
	printf("Veuillez rentrer votre nom : ");
	scanf("%s", p->nom);
}

int main(int argc, char** argv)
{
	fiche eloise;
	initfiche(&eloise);
	printf("%s", eloise.nom);
}