#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv)
{
	int N, nb, nbc;
	printf("saisir un nombre:");
	scanf("%d", &N);
	nb = 1;
	nbc = 0;
	while (nb <= N)
	{
		nbc += nb;
		printf("nb= %d nbc=%d\n", nb, nbc);
		nb += 1;
	}
	_getch();
	return 0;
}