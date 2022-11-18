#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

void inverse(char *mot)
{
	char rev[100];
	int t, i = strlen(mot), j = 0;
	
	do
	{
		mot[i] = '\0';
	} while (mot[--i] == ' ');

	for (t = i ; t >= 0; t--)
	{
		rev[j++] = mot[t];
	}
	rev[i+1] = '\0';
	printf("\nChaine de caractere apres inversion = %s\n", rev);
}

int main(int argc, char** argv)
{
	char blabla[100];
	printf("Entrez une phrase : ");
	gets_s(blabla, 100);
	inverse(blabla);
}