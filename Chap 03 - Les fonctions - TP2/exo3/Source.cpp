#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

char Majuscule(char* phrase)
{
	int compteur = 0;
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if (phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			phrase[i] = phrase[i] - 32;
			compteur++;
		}
	}
	printf("\nLa phrase en majuscules = %s\n", phrase);
	printf("\nLa phrase a subie %d modifications\n", compteur);
	return 0;
}

	int main(int argc, char** argv)
{
	char a[100];
	printf("Veuillez choisir la phrase a mettre en majuscules : ");
	gets_s(a,100);
	Majuscule(a);
}
