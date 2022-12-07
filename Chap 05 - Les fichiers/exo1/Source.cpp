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
Avec une application écrite en C, vous allez ouvrir le fichier « source.txt » en lecture, et
afficher son contenu caractère par caractère à l’écran à l’aide de la fonction getc.
Refermez ensuite le fichier.
*/

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "r");

	if (source != NULL)
	{
		char fichier;

		do
		{
			fichier = getc(source);
			printf("%c", fichier);
		} while (fichier != EOF);

		printf("\n\n");

		if (fclose(source) == 0)
		{
			printf("Closed file\n");
		}
		else
		{
			printf("Erreur lors de la fermeture du fichier !\n");
		}
		fclose(source);

	}
	else
	{
		printf("Erreur lors de la lecture du fichier !\n");
	}
}