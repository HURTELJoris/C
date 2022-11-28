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
Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un
emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur.
Puis vous rangerez ces valeurs dans l’ordre croissant.
Rechercher le maximum, l'afficher ainsi que son adresse et sa position.
*/

int main(int argc, char** argv)
{
	int *adr_deb;
	adr_deb = (int*)malloc(6*sizeof(int)); // Pour que adr_deb pointe sur un emplacement mémoire suffisant afin de stocker 6 entiers.
	
	/*

	Exemple si on cherche à donner directement les variables :

	*(adr_deb + 0) = 0;			//Pour définir le contenu de la première adresse.
	*(adr_deb + 1) = 1;		    //Pour définir le contenu de la seconde adresse.
	*(adr_deb + 2) = 2;
	*(adr_deb + 3) = 3;
	*(adr_deb + 4) = 4;
	*(adr_deb + 5) = 5;
	*/

	for (int i = 0; i < 6; i++)			// Boucle permettant de rentrer les valeurs de adr_deb. On utilise le +i pour définir la case du contenu.
	{
		printf("Entrez un entier : ");
		scanf("%d",adr_deb+i);
	}

	printf("\n--------------\n\n");
	printf("\nTableau normal :\n\n");

	for (int i = 0; i < 6; i++)			// Boucle permettant d'afficher les valeurs de adr_deb. On utilise adr_deb + i pour définir l'adresse de adr_deb. Et *(adr_deb + i) pour le contenu.
	{
		printf("Adresse : %p || Contenu : %d\n", adr_deb + i, *(adr_deb + i));
	}


	// Recherche de la valeur maximum de adr_deb
	

	printf("\n--------------\n\n");
	printf("\nValeur maximum :\n\n");

	int *valMax = adr_deb; //Pour initialiser la première adresse de valMax à la première adresse de adr_deb
	int position = 0;      //Pour donner la position du contenu dans le tableau. 
	for (int i = 0; i < 6; i++)
	{
		
		if (*(adr_deb + i) > *valMax) //Si le contenu de adr_deb est supérieur à celui de valMax. 
		{
			valMax = adr_deb + i;   //Alors l'adresse de valMax est égale à celle de adr_deb. 
			position = i;           //Et sa position est égale à l'indice de i.
		}
	}

	printf("Adresse : %p || Contenu : %d || Position : adr_deb[%d]\n", valMax, *(valMax),position);




	// Tri par sélection de adr_deb


	printf("\n--------------\n\n");
	printf("\nTableau trie :\n\n");

	int c;								
	for (int i = 0; i < 6 - 1; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (*(adr_deb + i) > *(adr_deb + j))
			{
				c = *(adr_deb + i);
				*(adr_deb + i) = *(adr_deb + j);
				*(adr_deb + j) = c;
			}
		}
	}


	for (int i = 0; i < 6; i++)			// Boucle permettant d'afficher les valeurs de adr_deb. On utilise adr_deb + i pour définir l'adresse de adr_deb. Et *(adr_deb + i) pour le contenu.
	{
		printf("Adresse : %p || Contenu : %d\n", adr_deb + i, *(adr_deb + i));
	}
}