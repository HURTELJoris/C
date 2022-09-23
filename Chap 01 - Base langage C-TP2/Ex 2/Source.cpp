#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
	int a;
	int b;
	int c;
	int resultat1;
	int resultat2;
	int resultat3;
	printf("Entrez le premier nombre entier : ");
	scanf("%d", &a);
	printf_s("Entrez le second nombre entier : ");
	scanf("%d", &b);
	printf_s("Entrez le troisieme nombre entier : ");
	scanf("%d", &c);

	if (a < b and a < c and b < c)
	{
		resultat1 = a;
		resultat2 = b;
		resultat3 = c;
	}

	if (a < b and a < c and c < b)
	{
		resultat1 = a;
		resultat2 = c;
		resultat3 = b;
	}
		

	if (b < a and b < c and a < c)
	{
		resultat1 = b;
		resultat2 = a;
		resultat3 = c;
	}

	if (b < a and b < c and c < a)
	{
		resultat1 = b;
		resultat2 = c;
		resultat3 = a;
	}

	if (c < a and c < b and a < b)
	{
		resultat1 = c;
		resultat2 = a;
		resultat3 = b;
	}

	if (c < a and c < b and b < a)
	{
		resultat1 = c;
		resultat2 = b;
		resultat3 = a;
	}

	printf("Le resultat de a,b et c dans l'ordre croissant est : %d %d %d \n", resultat1,resultat2,resultat3);
	_getch();
}