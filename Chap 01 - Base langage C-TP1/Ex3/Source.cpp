#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> //pour exit
#include <conio.h>
int main(int argc, char** argv)
{
	float x;
	printf("entrez votre nombre");
	scanf("%f", &x);
	if (!x) //x vaut 0
		printf("erreur de saisie ");
	else
		printf("l’inverse du nombre est : %f", 1 / x);
	_getch();
}