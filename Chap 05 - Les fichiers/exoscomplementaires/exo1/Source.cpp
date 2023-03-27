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
Ecrire un programme C permettant de créer un fichier qui contiendra l’alphabet.
*/

int main(int argc, char** argv)
{
	FILE *source = fopen("./source.txt", "w");

	if (source != NULL)
	{
		char fichier;


		for (char i = 'a'; i >= 'a' && i <= 'z';i++)
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
		

	}
	else
	{
		printf("Erreur lors de la lecture des fichiers !\n");
		fclose(source);

	}
}