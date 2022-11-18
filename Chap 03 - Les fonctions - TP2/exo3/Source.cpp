#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"

char Majuscule(char* phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if (phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			phrase[i] = phrase[i] - 32;
		}
	}
	printf("\nLa phrase en majuscule = %s", phrase);
	return 0;
}

	int main(int argc, char** argv)
{
	char a[100];
	printf("Veuillez choisir la phrase a mettre en majuscule : ");
	gets_s(a,100);
	Majuscule(a);
}
