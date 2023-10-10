// RAZ.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "essai.h"

int main()
{
    // Création d'un point.
    essai point;
    // Assignation des valeurs du point.
    point.n = 5;
    point.x = 5.25;
    // Affichage des valeurs du point avant le retour à zéro par adresse.
    affiche(point);
    // Retour à zéro des valeurs du point par adresse.
    raz(&point);
    // Affichage des valeurs du point après le retour à zéro par adresse.
    affiche(point);
    // Réassignation des valeurs du point.
    point.n = 5;
    point.x = 5.25;
    // Affichage des valeurs du point avant le retour à zéro par référence.
    affiche(point);
    // Retour à zéro des valeurs du point par référence.
    raz(point);
    // Affichage des valeurs du point après le retour à zéro par référence.
    affiche(point);
}
