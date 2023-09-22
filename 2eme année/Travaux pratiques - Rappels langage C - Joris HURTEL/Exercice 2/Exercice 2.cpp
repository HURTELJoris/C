#define _CRT_SECURE_NO_WARNINGS
#define VAL_MAX = 100
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 2.h"

/*
	Objectif :

Soit un tableau tab, qui contient au max 100 entiers rang�s dans l�ordre croissant et qui sera initialis� par l�utilisateur
OU g�n�r� pseudo-al�atoirement (un des deux au choix), vous r�aliserez un programme qui recherche une valeur (donn�e par l�utilisateur) dans ce tableau.


Contraintes :
La m�thode de recherche par dichotomie vous est impos�e.
Si la valeur est trouv�e vous affichez sa position dans le tableau sinon vous affichez un message d�erreur.
Vous devrez cr�er trois fonctions :

	- Une pour l�initialisation (qui ins�rera les valeurs que donnent l�utilisateur de mani�re � ce que le tableau soit rang� dans l�ordre croissant),
	- Une pour la recherche (qui recherchera la valeur donn�e par l�utilisateur dans le tableau en utilisant la m�thode de recherche par dichotomie),
	- Une pour l�affichage (qui affiche le tableau et si la valeur donn�e par l�utilisateur est pr�sente 
	  ou non dans ce dernier et si oui donne son index dans le tableau).
 
*/

int main(int argc, char** argv)
{
	// Cr�ation du tableau
	printf("Veuillez entrer la taille de votre tableau (taille <= 100) : ");
	int tablenght;
	scanf("%d", &tablenght);
	if (tablenght > VAL_MAX)
	{
		printf("Erreur : Taille maximum overload");
	}

	return 0;
}