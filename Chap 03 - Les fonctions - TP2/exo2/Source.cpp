#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<math.h>
#include "Header.h"
#include <conio.h>

void mot_de_passe(char *tab)
{
	int i = 0;
	char ch;
	printf("Entrez votre mot de passe : ");
	do
	{
		ch = _getch();
		if (ch != 8 && ch != 0 && ch != 83)
		{
			tab[i] = ch;
			i++;
			if (ch != 13)
			{
				printf("*");
			}
		}
		else if (ch == 8)
		{
			i--;
			if (i < 0)
				i = 0;
			printf("%c %c", 8, 8);
		}
	} while (ch != 13);

	tab[i - 1] = '\0';
	printf("\nLongueur du mot de passe : %d", i-1);
}


int main(int argc, char ** argv)
{
	char mdp[100];
	mot_de_passe(mdp);
	printf("\n%s\n", mdp);



	return 0;
}
