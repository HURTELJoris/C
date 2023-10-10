#include "pile_entier.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <QtWidgets/QWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include "pile_entier.h" // Inclure le fichier header de votre classe pile_entier
#include <QtWidgets/QApplication>
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

// 1. Définissez les différentes méthodes

pile_entier::pile_entier(int maxTaille)
{
    this->taille = maxTaille;
    this->hauteur = 0;
    this->pile = new int[taille];
}

pile_entier::~pile_entier()
{
    delete[] pile;
}

void pile_entier::empile(int valeur)
{
    if (!pleine())
    {
        pile[hauteur] = valeur;
        hauteur++;
    }
    else
    {
        std::cout << "La pile est pleine. Impossible d empiler." << std::endl;
    }
}

int pile_entier::depile()
{
    if (!vide())
    {
        hauteur--;
        return pile[hauteur];
    }
    else
    {
        std::cout << "La pile est vide. Impossible de depiler." << std::endl;
        return -1; // Une valeur sentinelle pour indiquer une pile vide.
    }
}

int pile_entier::pleine()
{
    return hauteur == taille;
}

int pile_entier::vide()
{
    return hauteur == 0;
}

void pile_entier::affiche()
{
    std::cout << "Contenu de la pile : ";
    for (int i = 0; i < hauteur; i++)
    {
        std::cout << pile[i] << " ";
    }
    std::cout << std::endl;
}

QString pile_entier::affiche2()
{
    QString pileContenu;
    for (int i = 0; i < hauteur; i++)
    {
        pileContenu += QString::number(pile[i]) + " ";
    }
    return pileContenu;
}