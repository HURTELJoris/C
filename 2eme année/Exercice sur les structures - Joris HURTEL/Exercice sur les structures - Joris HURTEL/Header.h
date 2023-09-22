#pragma once
// 0.	Définir une structure de données Heure permettant de représenter une heure au format hh/mm/ss :


// Déclaration de la structure :
typedef struct
{
	int Heures;
	int Minutes;
	int Secondes;
} Heure;

// 1.Ecrire une fonction de conversion d'un élément de type Heure en un nombre de secondes (entier)
int ConvertitHeureEnSecondes(Heure Gouter);
// 2.Ecrire une fonction de conversion d'un nombre de secondes (entier) en un élément de type Heure
Heure ConvertitSecondesEnHeure(int Secondes);
// 3.Ecrire une fonction qui retourne un temps correspondant à l’addition de deux éléments de type Heure
Heure AdditionerDesHeures(Heure heure1, Heure heure2);