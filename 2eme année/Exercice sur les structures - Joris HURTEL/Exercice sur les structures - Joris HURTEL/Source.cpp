#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"

/*D�finir une structure de donn�es Heure permettant de repr�senter une heure au format hh/mm/ss, puis �crire les fonctions suivantes :

1.	Ecrire une fonction de conversion d'un �l�ment de type Heure en un nombre de secondes (entier)
2.	Ecrire une fonction de conversion d'un nombre de secondes (entier) en un �l�ment de type Heure
3.	Ecrire une fonction qui retourne un temps correspondant � l�addition de deux �l�ments de type Heure
4.	Cr�er un programme permettant de saisir un temps en H/M/S puis convertir ce temps en nombre de secondes. 
	Ensuite saisir un nombre de secondes et le convertir en temps au format H/M/S. Puis ajoutez les deux temps pr�c�demment
	saisis et affichez le r�sultat.
	
*/

int main(int argc, char** argv)
{
	// Utilisation de la structure :
	Heure Gouter;
	int heure, minute, seconde, seconde2;
	/* A enlever


	Gouter.Heures = 18;
	Gouter.Minutes = 22;
	Gouter.Secondes = 33;

	// 1.Ecrire une fonction de conversion d'un �l�ment de type Heure en un nombre de secondes (entier)
	printf("La valeur en secondes de %dh%dmin et %dsec est : %d secondes \n\n", Gouter.Heures, Gouter.Minutes, Gouter.Secondes, ConvertitHeureEnSecondes(Gouter));

	// 2.Ecrire une fonction de conversion d'un nombre de secondes (entier) en un �l�ment de type Heure
	int intSecondes = 496479;
	Heure Diner = ConvertitSecondesEnHeure(intSecondes);
	printf("La valeur en structure heure de %d secondes est : %dH%dmin et %dsec\n\n", intSecondes, Diner.Heures, Diner.Minutes, Diner.Secondes);

	// 3.Ecrire une fonction qui retourne un temps correspondant � l�addition de deux �l�ments de type Heure

	Heure Toutrepas = AdditionerDesHeures(Gouter,Diner);
	printf("La somme de %dH%dmin%dsec et %dH%dmin%dsec donne : %dH%dmin et %dsec\n\n", Gouter.Heures, Gouter.Minutes, Gouter.Secondes, Diner.Heures, Diner.Minutes, Diner.Secondes, Toutrepas.Heures, Toutrepas.Minutes, Toutrepas.Secondes);
	// Le probl�me est que cela nous donne 72 secondes dans les secondes. Pour cela nous devons utiliser les deux premi�re fonctions.
	int convertissement = ConvertitHeureEnSecondes(Toutrepas);
	Toutrepas = ConvertitSecondesEnHeure(convertissement);
	printf("La somme convertie de %dH%dmin%dsec et %dH%dmin%dsec donne : %dH%dmin et %dsec\n\n", Gouter.Heures, Gouter.Minutes, Gouter.Secondes, Diner.Heures, Diner.Minutes, Diner.Secondes, Toutrepas.Heures, Toutrepas.Minutes, Toutrepas.Secondes);


	A enlever */

	/*
	4.Cr�er un programme permettant de saisir un temps en H / M / S puis convertir ce temps en nombre de secondes.
	Ensuite saisir un nombre de secondes et le convertir en temps au format H / M / S.Puis ajoutez les deux temps pr�c�demment
	saisis et affichez le r�sultat.
	*/

	printf("Entrez une valeur en heures : ");
	scanf("%d", &heure);
	printf("Entrez une valeur en minutes : ");
	scanf("%d", &minute);
	printf("Entrez une valeur en secondes : ");
	scanf("%d", &seconde);

	Gouter.Heures = heure;
	Gouter.Minutes = minute;
	Gouter.Secondes = seconde;

	printf("\n\nLa valeur en secondes de %dh%dmin et %dsec est : %d secondes \n\n", Gouter.Heures, Gouter.Minutes, Gouter.Secondes, ConvertitHeureEnSecondes(Gouter));

	printf("\n\nEntrez une grande valeur en secondes : ");
	scanf("%d", &seconde2);

	Heure Diner = ConvertitSecondesEnHeure(seconde2);
	printf("\nLa valeur en structure heure de %d secondes est : %dH%dmin et %dsec\n\n", seconde2, Diner.Heures, Diner.Minutes, Diner.Secondes);

	Heure Toutrepas = AdditionerDesHeures(Gouter, Diner);
	int convertissement = ConvertitHeureEnSecondes(Toutrepas);
	Toutrepas = ConvertitSecondesEnHeure(convertissement);
	printf("La somme de %dH%dmin%dsec et %dH%dmin%dsec donne : %dH%dmin et %dsec\n\n", Gouter.Heures, Gouter.Minutes, Gouter.Secondes, Diner.Heures, Diner.Minutes, Diner.Secondes, Toutrepas.Heures, Toutrepas.Minutes, Toutrepas.Secondes);

	return 0;
}