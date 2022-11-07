#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"

int puissance(int a, int b)
{
	int puissance = pow(a, b);
	return printf("%d puissance %d = %d\n",a, b, puissance);
}
int main(int argc, char** argv)
{
	int x, y;
	printf("Donnez le chiffre : ");
	scanf("%d",&x);
	printf("\nDonnez la puissance : ");
	scanf("%d",&y);
	puissance(x, y);
	return 0;
}