#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>

/* 
   Écrivez un programme en C qui saisit une chaîne donnée par l’utilisateur et qui
   convertit les éventuelles majuscules en minuscules
*/

int main(int argc, char** argv)
{

	int i;
	char str[100];

	printf("Veuillez saisir votre phrase : ");
	gets_s(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		/* 
		   si les caractères sont en minuscules, convertissez-les
		   en majuscules en soustrayant 32 de leur valeur ASCII. 
		*/

		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] = str[i] - 32;
		}
	}
	printf("\nLa chaine en majuscule = %s", str);
	return 0;
}