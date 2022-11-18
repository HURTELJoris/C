#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"
//a faire
void div2(int n)
{
	if (n % 2)
	{
		printf("\n%d n'est pas divisible par 2\n", n);
	}
	else
	{
		printf("\n%d est divisible par 2\n", n);
	}
}
void div3(int n)
{
	if (n % 3)
	{
		printf("\n%d n'est pas divisible par 3\n", n);
	}
	else
	{
		printf("\n%d est divisible par 3\n", n);
	}
}
int main(int argc, char** argv)
{
	int a;
	printf("Veuillez choisir le nombre entier : ");
	scanf("%d", &a);
	div2(a);
	div3(a);
}