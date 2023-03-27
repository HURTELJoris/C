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
Ecrire un programme qui permet de lire dans un fichier des entiers et de les trier avant de les
enregistrer dans un autre fichier. Vous devez écrire les fonctions suivantes :
*/

/*
1. int lireDonnees(char * nomFichier, int * T) qui lit les données dans le fichier nommé nomFichier
des entiers, puis les stocke dans un tableau T. La valeur de retour est le nombre d’entiers qui ont été
lus (c’est-à-dire le nombre d’éléments du tableau).
*/

int lireDonnees(const char * nomFichier, int * T)
{
	FILE *Nomfichier = fopen(nomFichier,"r");
	int nbentiertableau = 0;

	int fichier;
	/*
	for (int i = 0; getc(Nomfichier) != EOF; i++)
	{
		fichier = getc(Nomfichier);
		T[i] = fichier;
		nbentiertableau = i;
	}
	*/
	int i = 0;
	do
	{
		fichier = getc(Nomfichier);

		T[i] = fichier;
		T[i] -= 48;
		nbentiertableau = i;
		i++;
	} while (fichier != EOF );
	

	fclose(Nomfichier);
	return nbentiertableau;
}

/*
2. void afficherTableau(int * T, int nb) qui affiche le contenu du tableau T qui comprend nb éléments.
*/

void afficherTableau(int * T, int nb)
{
	printf("\n--------------\n");
	printf("\nTableau normal :\n\n");
	for (int i = 0 ; i < nb ; i++)
		printf("[%d]", T[i]);
	printf("\n");
}

/*
3. void triABulles(int * T, int nb) qui trie le tableau T de nb éléments avec la méthode du tri à bulles et
qui retourne le tableau trié.
*/

void triABulles(int * T, int nb)
{
	printf("\n--------------\n");
	printf("\nTableau trie :\n\n");

	int c;
	for (int i = 0; i < nb-1; i++)
	{
		for (int j = 0; j < nb-i-1; j++)
		{
			if (T[j] > T[j+1])
			{
				c = T[j];
				T[j] = T[j+1];
				T[j+1] = c;
			}
		}
	}
	for (int i = 0; i < nb; ++i)
	{
		printf("[%d]", T[i]);
	}
	printf("\n");
}

/*
4. void enregistrerDonnees(char * nomFichier, int * T, int nb) qui enregistre les nb valeurs du tableau
T dans le fichier nommé nomFichier.*/

void enregistrerDonnees(const char * nomFichier, int * T, int nb)
{
	FILE *Nomfichier = fopen(nomFichier, "r+");
	for (int i = 0; i < nb; i++)
	{
		char chiffre = putc(T[i], Nomfichier);
		printf("%d", chiffre);

	}
	fclose(Nomfichier);
}


/*
Pour tester vos fonctions, vous réaliserez un programme principal.Vous choisirez le nom du fichier
pour la lecture des données ainsi que celui pour l’enregistrement des valeurs(vous pouvez mettre
ces noms en dur dans votre code).
*/


int main(int argc, char** argv)
{
	
	int Tableau[100];
	int nombre = lireDonnees("Source.txt", Tableau);
	printf("Taille du tableau = %d\n", nombre);
	afficherTableau(Tableau, nombre);
	triABulles(Tableau, nombre);
	enregistrerDonnees("Source.txt", Tableau, nombre);

/*
	FILE *source = fopen("./source.txt", "w");
	FILE *dest1 = fopen("./des1.txt", "w");
	char [100] = {5,4,3,2,1};
	if (source != NULL)
	{
		char fichier;


		for (char i = 'a'; i >= 'a' && i <= 'z'; i++)
		{
			putc(i, source);
			printf("%c", i);
		}

		printf("\n\n");

		if (fclose(source) == 0)
		{
			printf("Closed files\n");
		}
		else
		{
			printf("Erreur lors de la fermeture des fichiers !\n");
		}
		fclose(source);

		FILE *source = fopen("./source.txt", "r");

		do
		{
			fichier = getc(source);
			if (fichier != EOF)
			{
				putc(fichier, dest1);
				printf("%c", fichier);
			}
		} while (fichier != EOF);

		printf("\n\n");

		fclose(dest1);


	}
	else
	{
		printf("Erreur lors de la lecture des fichiers !\n");
		fclose(source);
		fclose(dest1);
	}
	*/
}