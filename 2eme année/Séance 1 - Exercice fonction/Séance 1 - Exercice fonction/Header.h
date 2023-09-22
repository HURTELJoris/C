#pragma once

// Fonction empile
// Paramètres :
//	- int : valeur à empiler
//	- int * : tableau
//	- int nombre de valeurs dans le tableau
//  Retour :
//	- bool : succès de l'opération

bool empile(int value, int* tab, int* nbValues);
bool depile(int* value, int* tab, int* nbValues);
void affiche(int* tab, int nbValues);

// Fonction depile

// Fonction affiche :