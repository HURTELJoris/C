#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header Exercice 1.h"

// Déclaration de la fonction échange.
void echange(int * val1, int * val2) {
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}