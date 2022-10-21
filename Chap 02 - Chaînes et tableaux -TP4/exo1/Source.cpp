#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int tab[40];
	srand(time(NULL));
	int i, j =1, k;
	for (int i = 1; i < 40; i++)
	{
		tab[i] = rand() % 1000 - 500;
	}
	k = tab[j];
	while (j < sizeof(tab))
	{
		i = j - 1;

		while (i >= 0 && tab[i] >= tab[i + 1])
		{
			k = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = k;
			i = i - 1;
		}
		j = j + 1;
	}
	printf("%d", &tab[i]);
	return 0;
}