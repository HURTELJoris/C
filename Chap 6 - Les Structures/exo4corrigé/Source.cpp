#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"
#include <iostream>
#define SAISIE_NOTE  1
#define AFFICHAGE_NOTE 2
#define QUITTER 3


/*
Créer un programme qui permette de gérer un carnet de notes pour une classe dans une
matière.
Vous utiliserez la structure suivante :
typedef struct /* On définit un type struct
{
char nom[10];
char prenom[10];
int nbnotes; //permet de stocker le nombre de notes saisies
float note[50];
}
noteseninfo;

Vous déclarerez donc une variable de type noteseninfo* qui vous permettra
d’enregistrer les notes d’une classe en informatique.

Vous créerez un menu qui fera appel à la fonction « saisir » qui vous permettra de saisir
des notes sachant qu’il faudra vérifier si l’élève est déjà présent dans la liste d’élèves
dans ce cas on ajoute les nouvelles notes à la suite.Puis vous utiliserez une fonction
affiche qui affiche tous les élèves avec leurs notes.
*/



typedef struct // On définit un type struct
{
	char nom[10];
	char prenom[10];
	int nbnotes; //permet de stocker le nombre de notes saisies
	float note[50];
} noteseninfo;


int displayMenu()
{
	int choix;
	system("CLS");
	printf("------ Gestion d'eleves ------\n\n");
	printf(" %d - Saisie de notes\n", SAISIE_NOTE);
	printf(" %d - Affichage des notes\n", AFFICHAGE_NOTE);
	printf(" %d - Quitter\n", QUITTER);

	do
	{
		printf("\n\nChoix : ");
		scanf("%d", &choix);

		if (choix < 1 || choix > 3)
		{
			printf("Valeur incorrecte ! \n\n");
		} 
	} while (choix < 1 || choix > 3);

	return choix;
}


void afficher(noteseninfo * eleves, int nbEleves)
{
	if (nbEleves > 0)
	{
		for (int i = 0; i < nbEleves; i++)
		{
			printf("Eleve %d :\n", i + 1);
			printf("\tNom : %s", eleves[i].nom);
			printf("\tNom : %s", eleves[i].prenom);

			if (eleves[i].nbnotes > 0)
			{
				for (int j = 0; j < eleves[i].nbnotes; j++)
				{
					printf("\t - %.2f\n", eleves[i].note[j]);
				}
			}
			else
			{
				printf("\tPas de note a afficher ....\n\n");
			}
		}
	}
	else
	{
		printf("\n\nPas d'eleves ...\n\n");
	}
}


void saisir(noteseninfo ** eleves, int * nbEleves)
{
	int iFound = -1;

	noteseninfo * eleveAModifier = NULL;

	//Si on l'a pas trouvé, on est content :D
	if (iFound == -1)
	{
		noteseninfo * oldMem = (*eleves);
		*eleves = (noteseninfo *)malloc((*nbEleves + 1) * sizeof(noteseninfo));

		memcmpy(*eleves, oldMem, *nbEleves * sizeof(noteseninfo));
		free(oldMem);

		eleveAModifier = &(*eleves)[(*nbEleves)++];

		strcpy(eleveAModifier->nom, nom);
		strcpy(eleveAModifier->prenom, prenom);
		eleveAModifier->nbnotes = 0;
	}
	// On l'a trouvé !!!
	else
	{
		eleveAModifier = &(*eleves)[iFound];
	}

	// Ajout des notes :
	for (int i = eleveAModifier->nbnotes; i < 50; i++)
	{
		//TODO :D
	}
}






int main(int argc, char** argv)
{
	noteseninfo * eleve =  NULL;
	int nbEleves = 0;

	int choix;
	do
	{
		choix = displayMenu();

		if (choix == SAISIE_NOTE)
		{

		}
		else if (choix == AFFICHAGE_NOTE)
		{

		}
	} while (choix != QUITTER);

	return 0;
}