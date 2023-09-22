#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
// #include "Header.h"

// Que donne ce code à l’exécution ?

int main(int argc, char** argv)
{
	int* ptr;
	*ptr = 5;
	printf("%d", ptr);

	return 0;
}

/*
	Ce code donne 4 avertissements et 1 erreur à l'éxécution :

	- Utilisation de la mémoire non initialisée 'ptr'. Car ptr a une adresse mais pas de valeur.

	- Non-entier passé en tant que _Param_(2) lorsqu'un entier est requis dans l'appel à 'printf' 
	  Type réel : 'int *'. Car ptr n'a pas de valeur.

	- 'printf': la chaîne de format '%d' nécessite un argument de type 'int', mais l'argument variadique 
	  1 est de type 'int*'. Car en mettant ptr en argument, on donne son addresse. Il faudrait mettre &ptr

	- 'printf': '%d' dans la chîne de format est en conflit avec l'argument 1 de type 'int *'. Pour la même raison

	- variable locale 'ptr' non initialisée utilisée. Car on a pas donné de valeur à ptr, mais une adresse.
*/