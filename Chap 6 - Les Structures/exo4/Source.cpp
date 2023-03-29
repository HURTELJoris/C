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


void saisir(noteseninfo*p,char*elaivesnom, char*elaivesprenom,float**nautes)
{
	int check = 0;
	printf("Veuillez entrer le nom de l\'eleve : ");
	scanf("%s", p->nom);
	char temp1[10] = p->nom ;

	printf("Veuillez entrer le prenom de l\'eleve : ");
	scanf("%s", p->prenom);
	char* temp2 = p->prenom ;

	for (int i = 0; i < strlen(elaivesnom); i++) 
	{
		for (int j = 0; j < strlen(elaivesnom); j++)
		{
			if (elaivesnom[i] == temp1 && elaivesprenom[i] == temp2)
			{
				printf("Votre eleve existe deja !\n");
				printf("Veuillez entrer la note de l\'eleve : ");
				scanf("%f", &nautes[i][j]);
				check++;
			}
		}
	}

	if (check == 0)
	{
		printf("Votre eleve n\'existait pas encore !\n");
		printf("Veuillez entrer la note de l\'eleve : ");
		scanf("%f", &p->note);
	}

	p->nbnotes++;
}

void affiche(char*elaivesnom,char*elaiveprenom, float**nautes)
{
	for (int i = 0; i < strlen(elaivesnom); i++)
	{
		printf("Eleve : %s %s ---|", elaivesnom[i], elaiveprenom[i]);
		for (int j = 0; j < sizeof(nautes[i]); j++)
		{
			printf("--- Note(s) : %f\n", nautes[i][j]);
		}
	}
}


int main(int argc, char** argv)
{
	float*notes[100];
	char elevesnom[100];
	char elevesprenom[100];
	int end = 0;
	int answ,yis;

	printf("Bonjour ! Bienvenu dans votre carnet de notes.\n\n");
	printf("------------------------------------------------\n\n\n");
	do
	{
		do
		{
			printf("Voullez vous saisir une note ?\n");
				printf("\t - 1 pour oui\n");
				printf("\t - 2 pour non\n\n");
			printf(":");
			scanf("%d", &answ);
		} while (answ < 1 || answ > 2);

		if (answ == 2)
		{
			end++;
		}
		else
		{
			for (int i = 0; i < -1; i++)
			{
				int saisie;
				noteseninfo eleve;
				saisir(&eleve,&elevesnom[i],&elevesprenom[i],&notes[i]);
				do
				{
					printf("Voullez vous arreter la saisie ?\n");
					printf("\t - 1 pour oui\n");
					printf("\t - 2 pour non\n\n");
					printf(":");
					scanf("%d", &saisie);
				} while (saisie < 1 || saisie > 2);

				if (saisie == 1)
				{
					i = -1;
				}

			}	
		}
		



	}while(end != 1);

	do
	{
		printf("Voullez vous afficher la liste des eleves ?\n");
		printf("\t - 1 pour oui\n");
		printf("\t - 2 pour non\n\n");
		printf(":");
		scanf("%d", &yis);
	} while (yis < 1 || yis > 2);

	if (yis == 1)
	{
		affiche(elevesnom,elevesprenom,notes);
	}

	return 0;
}