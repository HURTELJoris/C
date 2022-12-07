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
Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest1.txt » en
écriture, puis copier chaque caractère du fichier source dans le fichier de destination.
Refermez le fichier.
*/

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "r");
	FILE *dest1 = fopen("./dest1.txt", "w");

	if (source != NULL && dest1 != NULL)
	{
		char fichier;
		char fichier2;

		do
		{
			fichier = getc(source);
			putc(fichier, dest1);
			printf("%c", fichier);
		} while (fichier != EOF);

		printf("\n\n");

		if (fclose(source) == 0 && fclose(dest1) == 0)
		{
			printf("Closed files\n");
		}
		else
		{
			printf("Erreur lors de la fermeture des fichiers !\n");
		}
		fclose(source);
		fclose(dest1);


	}
	else
	{
		printf("Erreur lors de la lecture des fichiers !\n");
		fclose(source);
		fclose(dest1);
	}
}