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
Ecrire une fonction ayant un pointeur de fichier en argument (pointeur sur un fichier qui sera
déjà ouvert dans le programme principal) et qui retournera un entier. Cette fonction aura pour
but de calculer et de retourner la taille du fichier (en octets).
Essayez votre fonction avec les trois fichiers utilisés (source.txt, dest1.txt,dest2.txt).
La fermeture du fichier se fera dans le programme principal.
*/

int comptefichier(FILE *fichier)
{
	char c;
	int compteur = 0;
	do
	{
		c = getc(fichier);
		compteur++;
	} while (c != EOF);
	return compteur;
}

int comptefichier2(FILE *fichier)
{
	long i = 0;
	do
	{
		i++;
	} while (fseek(fichier, i, SEEK_SET) != 0);

	
	return i;


	
}

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "r");
	FILE *dest1 = fopen("./dest1.txt", "r");
	FILE *dest2 = fopen("./dest2.txt", "r");

	if (source != NULL && dest1 != NULL && dest2 != NULL)
	{
		 int i = comptefichier(source);
		 int u = comptefichier(dest1);
		 int v = comptefichier(dest2);
		 int x = comptefichier2(source);
		 printf("Le fichier source compte %d caracteres.\n", i);
		 printf("Le fichier dest1 compte %d caracteres.\n", u);
		 printf("Le fichier dest2 compte %d caracteres.\n\n", v);
		 printf("Le fichier source compte %d caracteres.\n\n", x);

		if (fclose(source) == 0 && fclose(dest2) == 0)
		{
			printf("Closed files\n");
		}
		else
		{
			printf("Erreur lors de la fermeture des fichiers !\n");
		}
		fclose(source);
		fclose(dest1);
		fclose(dest2);


	}
	else
	{
		printf("Erreur lors de la lecture des fichiers !\n");
		fclose(source);
		fclose(dest1);
		fclose(dest2);
	}
}