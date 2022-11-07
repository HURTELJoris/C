#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"

void invmot(char* mot)
{
	char* resultat;
	if (strlen(mot) < 2)
	{
		printf("%s", mot); //cas d'arret
	}
	else
	{
		for (int i = 0; i <= strlen(mot); i++)
		{
			resultat[i] = mot[-1];
			mot - mot[-1];
		}
	}
}

int main(int argc, char** argv)
{
	int a;
	printf("Entrez un mot : ");
	scanf("%s",&a);
	printf("L'inverse du mot %s est : %s\n",a, invmot(a));
}
