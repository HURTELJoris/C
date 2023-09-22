#pragma once
// 0.	D�finir une structure de donn�es Heure permettant de repr�senter une heure au format hh/mm/ss :


// D�claration de la structure :
typedef struct
{
	int Heures;
	int Minutes;
	int Secondes;
} Heure;

// 1.Ecrire une fonction de conversion d'un �l�ment de type Heure en un nombre de secondes (entier)
int ConvertitHeureEnSecondes(Heure Gouter);
// 2.Ecrire une fonction de conversion d'un nombre de secondes (entier) en un �l�ment de type Heure
Heure ConvertitSecondesEnHeure(int Secondes);
// 3.Ecrire une fonction qui retourne un temps correspondant � l�addition de deux �l�ments de type Heure
Heure AdditionerDesHeures(Heure heure1, Heure heure2);