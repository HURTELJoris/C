#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"

int affiche(int nbr1, int nbr2)
{
	int pgcd;
	for (int i = 1; i <= nbr1 && i <= nbr2; ++i)
	{
		if (nbr1%i == 0 && nbr2%i == 0)
			pgcd = i;
	}

	printf("PGCD de %d et %d = %d", nbr1, nbr2, pgcd);
	return 0;

}

int main(int argc, char** argv)
{
	affiche(52, 65);
		
}
