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
Soit une variable de type char * , �crire un programme qui saisit une cha�ne de
caract�res et qui la stocke dans cette variable, puis qui affiche les �l�ments de la
cha�ne caract�re par caract�re avec leur adresse .
*/

int main(int argc, char** argv)
{
	char* phrase[100];
	printf("Entrez votre phrase : ");
	gets_s(phrase,100);
	phrase = (char*)malloc(strlen(char)); // Pour que la phrase pointe sur un emplacement m�moire suffisant afin de stocker tout ses caract�res.


	// Affichage des contenus de la phrase.

	printf("\n--------------\n\n");
	printf("\nTableau normal :\n\n");

	for (int i = 0; i < strlen(phrase); i++)	// Boucle permettant d'afficher les valeurs de adr_deb. On utilise adr_deb + i pour d�finir l'adresse de adr_deb. Et *(adr_deb + i) pour le contenu.
	{
		printf("Adresse : %p || Contenu : %c\n", phrase + i, *(phrase + i));
	}