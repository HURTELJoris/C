#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"


float min(float * t)
{
	float valMin = t[0];
	for (int i = 1; i < 8; i++)
	{
		if (t[i] < valMin)
		{
			valMin = t[i];
		}
	}
	return valMin;
}

float max(float * t)
{
	float valMax = t[0];
	for (int i = 1; i < 8; i++)
	{
		if (t[i] > valMax)
		{
			valMax = t[i];
		}
	}
	return valMax;
}

int main(int argc, char** argv)
{
	float liste[8] = { 1.6,-6.9,9.67,5.90,89.9,-23.6,78,34.6};
	printf("La valeur minimum de la liste est de : %f\n\n",min(liste));
	printf("La valeur minimum de la liste est de : %f\n", max(liste));
	return 0;

}
