#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include "Header.h"


// 1.Ecrire une fonction de conversion d'un élément de type Heure en un nombre de secondes (entier)
int ConvertitHeureEnSecondes(Heure Gouter) {
	int Secondes = (Gouter.Heures * 3600) + (Gouter.Minutes * 60) + Gouter.Secondes;
	return Secondes;
}
// 2.Ecrire une fonction de conversion d'un nombre de secondes (entier) en un élément de type Heure
Heure ConvertitSecondesEnHeure(int Secondes) {
	Heure Heureconvertie;
	int Heureslocale, Minuteslocale, Secondeslocale;
	Heureslocale = Secondes / 3600;
	Minuteslocale = (Secondes % 3600) /60;
	Secondeslocale = (Secondes % 3600) % 60;
	Heureconvertie.Heures = Heureslocale;
	Heureconvertie.Minutes = Minuteslocale;
	Heureconvertie.Secondes = Secondeslocale;
	return Heureconvertie;
}
// 3.Ecrire une fonction qui retourne un temps correspondant à l’addition de deux éléments de type Heure
Heure AdditionerDesHeures(Heure heure1, Heure heure2) {
	Heure SommeDesHeures;
	SommeDesHeures.Heures = heure1.Heures + heure2.Heures;
	SommeDesHeures.Minutes = heure1.Minutes + heure2.Minutes;
	SommeDesHeures.Secondes = heure1.Secondes + heure2.Secondes;
	return SommeDesHeures;
}