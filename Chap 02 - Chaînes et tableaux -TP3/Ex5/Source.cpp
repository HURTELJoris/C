

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <stdlib.h>

/*
   Réalisez un programme permettant de saisir une chaîne de caractères ayant
   éventuellement des espaces puis de traiter cette chaîne sans espaces.
   Vous afficherez cette chaîne sans espaces.
*/

int main(int argc, char** argv)
{

	int i, j = 0;
	char str[100];
	char newstr[100];

	printf("Veuillez saisir votre phrase : ");
	gets_s(str);

	

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			newstr[j] = str[i];
			j++;
		}
	}
	printf("\nLa chaine sans espaces = %s", newstr);
	return 0;
}