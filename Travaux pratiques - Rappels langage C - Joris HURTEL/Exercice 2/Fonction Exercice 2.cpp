#define _CRT_SECURE_NO_WARNINGS
#define VAL_MAX 100
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 2.h"

// Déclaration de la fonction initialisation.
void Initialisation(int* tab) {
	// Introduction de qualité.
	printf("Made by Joris HURTEL (copyrights included(no copy allowed))\n\n");
	// Création du tableau.
	// On demande à l'utilisateur la taille du tableau afin de savoir combien de valeur l'utilisateur doit ajouter.
	printf("Veuillez entrer la taille de votre tableau (taille <= 100) : ");
	int tabLength;
	scanf("%d", &tabLength);

	if (tabLength > VAL_MAX || tabLength < 1)
	{
		printf("\nErreur : Taille maximum overload\n");
	}

	// On propose 2 choix au joueur pour pas qu'il ne remplisse 100 valeurs.
	int choix;
	printf("\nVoulez vous remplir ce tableau :\nAutomatiquement : 1\nManuellement : 2\n");
	printf("\nVotre choix : ");
	scanf("%d", &choix);
	if (choix > 2 || choix < 1)
	{
		printf("\nErreur : Taille maximum overload\n");
	}

	// Si il choisit en automatique, on lui remplie son tableau et on l'affiche.

	else if (choix == 1) {

		for (int i = 0; i < tabLength; i++)
		{
			tab[i] = i;
		}
	}

	// Si il choisit en manuelle, il remplie son tableau et on l'affiche.

	else if (choix == 2) {
		for (int i = 0; i < tabLength; i++)
		{
			int valtab;
			printf("\n\nVeuillez saisir la valeur numero %d : ", i+1);
			scanf("%d", &valtab);
			
			// Insérer la valeur dans le tableau trié.
			int j = i - 1;
			while (j >= 0 && tab[j] > valtab)
			{
				tab[j + 1] = tab[j];
				j--;
			}
			tab[j + 1] = valtab;
		}
	}

	// On demande une valeur à rechercher à l'utilisateur.
	int win = 0;
	while (win == 0)
	{
	
		int valeur;
		printf("\nChoisissez un nombre : ");
		scanf("%d", &valeur);
		int position = Recherche(tab, tabLength, valeur);
		Affichage(tab, tabLength, valeur, position);
		win = (position != -1);
	}
}

// Implémentation de la fonction de recherche par dichotomie.
int Recherche(int* tab, int tabLength, int valeur) {
	int debut = 0;
	int fin = tabLength - 1;

	// Tant que le tableau n'est pas vide.
	while (debut <= fin) {
		int milieu = (debut + fin) / 2;
		if (tab[milieu] == valeur)
			return milieu; // La valeur a été trouvée.
		else if (tab[milieu] < valeur)
			debut = milieu + 1;
		else
			fin = milieu - 1;
	}

	return -1; // La valeur n'a pas été trouvée.
}

// Implémentation de la fonction d'affichage.
void Affichage(int* tab, int tabLength, int valeur, int position) {
	printf("\nVoici votre tableau : [");
	for (int i = 0; i < tabLength; i++) {
		printf(" %d,", tab[i]);
	}
	printf("]\n");


	// Si le résultat de la fonction recherche n'est pas faux.
	if (position != -1) {
		printf("\nLa valeur %d a ete trouvee a la position %d dans le tableau.\n", valeur, position);
	}
	// Si le résultat de la fonction recherche est faux.
	else {
		printf("\nLa valeur %d n'a pas ete trouvee dans le tableau.\n", valeur);
	}
}
