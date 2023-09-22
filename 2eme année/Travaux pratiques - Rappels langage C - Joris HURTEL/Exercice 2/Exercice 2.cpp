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

Soit un tableau tab, qui contient au max 100 entiers rangés dans l’ordre croissant et qui sera initialisé par l’utilisateur
OU généré pseudo-aléatoirement (un des deux au choix), vous réaliserez un programme qui recherche une valeur (donnée par l’utilisateur) dans ce tableau.


Contraintes :
La méthode de recherche par dichotomie vous est imposée.
Si la valeur est trouvée vous affichez sa position dans le tableau sinon vous affichez un message d’erreur.
Vous devrez créer trois fonctions :

	- Une pour l’initialisation (qui insérera les valeurs que donnent l’utilisateur de manière à ce que le tableau soit rangé dans l’ordre croissant),
	- Une pour la recherche (qui recherchera la valeur donnée par l’utilisateur dans le tableau en utilisant la méthode de recherche par dichotomie),
	- Une pour l’affichage (qui affiche le tableau et si la valeur donnée par l’utilisateur est présente 
	  ou non dans ce dernier et si oui donne son index dans le tableau).
 
*/

int main(int argc, char** argv)
{
	// Création du tableau
	printf("Veuillez entrer la taille de votre tableau (taille <= 100) : ");
	int tablenght;
	scanf("%d", &tablenght);
	if (tablenght > VAL_MAX)
	{
		printf("Erreur : Taille maximum overload");
	}

	return 0;
}