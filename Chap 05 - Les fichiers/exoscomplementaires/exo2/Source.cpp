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
Ecrire un programme C permettant d’afficher le contenu d’un fichier créé préalablement.
*/

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "w");
	FILE *dest1 = fopen("./des1.txt", "w");

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
}