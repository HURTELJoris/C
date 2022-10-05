#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(int argc, char ** argv)
{
	float t[3][4];

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("Entrer la valeur [%d][%d] : ", i, j);
			scanf("%f", &t[i][j]);
		}
	}

	float somme = 0;
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			somme += t[i][j];
		}
	}

	printf("La somme vaut %f\n", somme);

	return 0;
}