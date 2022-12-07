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
Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest2.txt » en
écriture, puis vous copier chaque caractère du fichier source dans le fichier de destination
mais sans copier la lettre ‘a’ dès que vous la trouverez dans le fichier source.
Refermez le fichier.
*/

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "r");
	FILE *dest2 = fopen("./dest2.txt", "w");

	if (source != NULL && dest2 != NULL)
	{
		char fichier;
		char fichier2;

		do
		{
			fichier = getc(source);
			if (fichier != 'a')
			{
				putc(fichier, dest2);
				printf("%c", fichier);
			}	
		} while (fichier != EOF);

		printf("\n\n");

		if (fclose(source) == 0 && fclose(dest2) == 0)
		{
			printf("Closed files\n");
		}
		else
		{
			printf("Erreur lors de la fermeture des fichiers !\n");
		}
		fclose(source);
		fclose(dest2);


	}
	else
	{
		printf("Erreur lors de la lecture des fichiers !\n");
		fclose(source);
		fclose(dest2);
	}
}