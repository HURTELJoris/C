#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

unsigned long factorielle(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return  n * factorielle(n - 1);
	}
}

int main(int argc, char** argv)
{
	int a;
	printf("Veuillez choisir le nombre entier : ");
	scanf("%d", &a);
	printf("La factorielle de %d est : %d\n", a, factorielle(a));
}