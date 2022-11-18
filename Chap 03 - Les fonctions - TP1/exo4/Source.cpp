#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

void pgcd(int x,int y)
{
	int pgcd;
	for (int i = 1; i <= x && i <= y; ++i)
	{
		if (x%i == 0 && y%i == 0)
		{
			pgcd = i;
		}	
	}
	printf("\nLe pgcd de %d et %d est : %d\n",x,y,pgcd);
}

int main(int argc, char** argv)
{
	int a,b;

	printf("\nEntrez le premier entier : ");
	scanf("%d", &a);
	printf("\nEntrez le deuxieme entier : ");
	scanf("%d", &b);
	pgcd(a, b);
}