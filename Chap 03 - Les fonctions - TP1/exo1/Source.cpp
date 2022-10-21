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
	puissance(2, 8);
	return 0;
}