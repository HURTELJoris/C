#pragma once

// Fonction empile
// Param�tres :
//	- int : valeur � empiler
//	- int * : tableau
//	- int nombre de valeurs dans le tableau
//  Retour :
//	- bool : succ�s de l'op�ration

bool empile(int value, int* tab, int* nbValues);
bool depile(int* value, int* tab, int* nbValues);
void affiche(int* tab, int nbValues);

// Fonction depile

// Fonction affiche :