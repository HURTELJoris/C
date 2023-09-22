#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
// #include "Header.h"

// Que donne ce code � l�ex�cution ?

int main(int argc, char** argv)
{
	int* ptr;
	*ptr = 5;
	printf("%d", ptr);

	return 0;
}

/*
	Ce code donne 4 avertissements et 1 erreur � l'�x�cution :

	- Utilisation de la m�moire non initialis�e 'ptr'. Car ptr a une adresse mais pas de valeur.

	- Non-entier pass� en tant que _Param_(2) lorsqu'un entier est requis dans l'appel � 'printf' 
	  Type r�el : 'int *'. Car ptr n'a pas de valeur.

	- 'printf': la cha�ne de format '%d' n�cessite un argument de type 'int', mais l'argument variadique 
	  1 est de type 'int*'. Car en mettant ptr en argument, on donne son addresse. Il faudrait mettre &ptr

	- 'printf': '%d' dans la ch�ne de format est en conflit avec l'argument 1 de type 'int *'. Pour la m�me raison

	- variable locale 'ptr' non initialis�e utilis�e. Car on a pas donn� de valeur � ptr, mais une adresse.
*/