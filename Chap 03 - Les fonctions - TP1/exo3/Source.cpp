#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"


float min(float * tab)
{
	int i = 0;
	float min = fminf(tab[i], tab[i++]);
	for (int i = 1; i < 8; i++)
	{
		min = fminf(min, tab[i+1]);
	}
	printf("La valeur minimum de la liste est : %f\n", min);
	return 0;
}

float max(float * tab)
{
	int i = 0;
	float max = 0;
	for (int i = 0; i < 8; i++)
	{
		max = fmaxf(tab[i], tab[i+1]);
	}
		
	printf("La valeur maximum de la liste est : %f\n", max);
	return 0;
}

int main(int argc, char** argv)
{
	float liste[8] = { 1.6,-6.9,9.67,5.90,89.9,-23.6,78,34.6};
	min(liste);
	max(liste);
	return 0;

}
