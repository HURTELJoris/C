#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>

// Ecrire un programme qui saisit une chaîne de caractères au clavier et qui compte le
// nombre de fois que chacune des lettres de l’alphabet et le nombre d’espaces ont été
// présents dans la phrase. 

/*
	Compter le nombre d'apparition de chaque caractère (A à Z ; a à z ; espace)
		-->
		Solution 1 : 27 variables et du coup écrire 53 if --> chiant à écrire !

		Solution 2 : 1 variable temporaire qui compte que pour 1 lettre à chaque fois et affiche entre chaque itérations ma valeur du compteur.
			--> 
			parcours de la chaine beaucoup de fois ---> sous-optimal.

		Solution 3 : Tableau ?
*/

int main(int argc, char** argv)
{
	char chaine[27];

	printf("Entrer une phrase : ");
	gets_s(chaine, 27);

	do
	{

	} while (i < strlen(chaine));




	return 0;
}