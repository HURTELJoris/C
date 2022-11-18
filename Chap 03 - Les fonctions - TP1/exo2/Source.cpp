#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

void affiche(int *t)
{
	printf("tab = ");
	for (int i = 0; i <= sizeof t+1; i++)
	{	
		printf("[%d]",t[i]);
	}
	printf("\n\n");
	for (int i = 0; i <= sizeof t + 1; i++)
	{
		printf("Position %d = [%d]\n", i, t[i]);
	}
	
}

int main(int argc, char** argv)
{
	
	int tab[10] = {1,2,4,8,16,32,64,128,256,512};
	affiche(tab);
	return 0;
}