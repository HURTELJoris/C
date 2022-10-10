#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <tchar.h>
#include <string.h>

// Ecrire un programme qui saisit une chaîne de caractères au clavier et qui compte le
// nombre de fois que chacune des lettres de l’alphabet et le nombre d’espaces ont été
// présents dans la phrase. 

int main(int argc, char** argv)
{
	char car;

	int i, compt = 0, o = 0;
	char str[100];


	printf("Veuillez saisir votre phrase : ");
	gets_s(str);


	printf("Donnez le charactere que vous voulez rechercher : ");
	scanf("%c", &car);

	i = strlen(str);

	while (car != str[i])
	{

		if (i <= 0)
		{
			o = 1;
			break;
		}
		compt++;
		i--;
	}

	if (o == 0)
	{
		printf("Le caractere %c se trouve a la position %d a partir de la droite \n", car, compt);
	}
	else
	{
		printf("Le caractere %c n'est pas dans la phrase", car);
	}
	return 0;
}