#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

class chaine2
{
private:
    int _taille; // taille allouee pour la chaine
    char* _ptr; // pointeur sur la chaine
public:
    chaine2(const char* ch = ""); // constructeur, initialisation , _taille reçoit la longueur de la chaîne
    chaine2(char c, int n = 1); // constructeur, alloue un emplacement de n caractères initialisés à c
    chaine2(const chaine2& z); // constructeur de recopie
    ~chaine2(); // destructeur, libère emplacement mémoire
    int longueur(); // retourne la longueur de la chaine
    char& operator [] (int n); // retourne le caractere de la position donnee
    void operator += (char c); // ajoute un caractere a la fin de la chaine
    void operator += (const chaine2& z); // ajoute une chaine a la fin de la chaine
    chaine2& operator + (const chaine2& z); // retourne une nouvelle chaine formee a partir de la concatenation de deux autres
    chaine2& minuscule(); // retourne une nouvelle chaine formee des caracteres de la chaine d'origine mis en minuscules
    chaine2& operator = (const chaine2& z);  // affectation d'une chaine
    int operator == (const chaine2& z); //comparaison de deux chaînes
    int operator != (const chaine2& z); // compare deux chaines
};