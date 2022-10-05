#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
	srand(time(NULL));
	float t[3][4];
	float m[3];
	int i = 0;
	int j = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			t[i][j] = rand() % 100;
		}
	}

	while (i < 3)
	{
		float somme = 0;
		j = 0;
		while (j < 4)
		{
			somme += t[i][j];
			j++;
		}

		m[i] = somme / 4.0;
		i++;

	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%6.2f, ", t[i][j]);
		}

		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("Moyenne %d : %f\n", i + 1, m[i]);
	}


	return 0;
}