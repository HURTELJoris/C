/////////////////////////////// string2.cpp ///////////////////////////
#include "string2.h"

chaine2::chaine2(const char* ch)
{
	_taille = strlen(ch);
	// On alloue de la mémoire pour la chaîne et le caractère nul (pour le caractère nul je l'ai vu sur internet
	_ptr = new char[_taille + 1];  
	// Boucle qui parcoure la chaine avec la taille de la chaine de caractères.
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = ch[i];
	}
	// Caractère nul = \0
	_ptr[_taille] = '\0';  
}

chaine2::chaine2(char c, int n)
{
	_taille = n;
	_ptr = new char[_taille + 1];  
	// Boucle qui parcoure la chaine avec la taille n.
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = c;
	}
	_ptr[_taille] = '\0';  
}

chaine2::chaine2(const chaine2& z)
{
	_taille = z._taille;
	_ptr = new char[_taille + 1];  
	// Boucle qui parcoure la chaine avec la taille de l'autre chaine.
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = z._ptr[i];
	}
	_ptr[_taille] = '\0'; 
}

chaine2::~chaine2()
{
	// On libère la mémoire pour éviter de faire bugger la RAM
	delete[] _ptr;
}

int chaine2::longueur()
{
	// Renvoie la longueur de la chaine de caractère _ptr
	return strlen(_ptr);
}

char& chaine2::operator[](int n)
{
	// Renvoie le caractère à l'indice n de la chaine de caractère _ptr
	return _ptr[n];
}

void chaine2::operator+=(char c)
{
	// On alloue de la mémoire pour la chaîne, le caractère 'c', et le caractère nul.
	char* new_ptr = new char[_taille + 2];  
	// Boucle de recopie de la chaine de caractères _ptr à new_ptr
	for (int i = 0; i < _taille; i++)
	{
		new_ptr[i] = _ptr[i];
	}
	new_ptr[_taille] = c;       
	new_ptr[_taille + 1] = '\0'; 
	// Libère la mémoire associé à l'ancienne chaine de caractères
	delete[] _ptr; 
	_ptr = new_ptr;
	_taille++; 
}

void chaine2::operator+=(const chaine2& z)
{
	// On crée une nouvelle chaine de caractère de la taille de la chaine de gauche, plus celle de droite, plus le caractère nul.
	char* new_ptr = new char[_taille + z._taille + 1];  
	// On remplie la première partie de la chaine de caractère avec la chaine de gauche
	for (int i = 0; i < _taille; i++)
	{
		new_ptr[i] = _ptr[i];
	}
	// On remplie la seconde partie de la chaine de caractère avec la chaine de droite
	for (int i = 0; i < z._taille; i++)
	{
		new_ptr[_taille + i] = z._ptr[i];
	}
	new_ptr[_taille + z._taille] = '\0'; 
	delete[] _ptr;
	_ptr = new_ptr;
	// Met à jour la taille
	_taille += z._taille; 
}

chaine2& chaine2::operator+(const chaine2& z)
{
	
	// Calcule la taille totale de la nouvelle chaîne
	int nouvelleTaille = _taille + z._taille;

	/*
						VERSION 1

	// Crée une nouvelle instance de chaine2 avec la chaîne concaténée
	chaine2 nouvelleChaine2;
	nouvelleChaine2._taille = nouvelleTaille;
	nouvelleChaine2._ptr = new char[nouvelleTaille + 1];

	// Copie les caractères de la première chaîne (this) dans la nouvelle chaîne
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine2._ptr[i] = _ptr[i];
	}

	// Copie les caractères de la deuxième chaîne (z) à la suite de la première
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine2._ptr[_taille + i] = z._ptr[i];
	}

	// Ajoute le caractère nul à la fin
	nouvelleChaine2[nouvelleTaille] = '\0';

	return nouvelleChaine2;


						VERSION 1 ne marche pas car on se fait delete notre nouvelle chaine avant de la renvoyer
	*/

	// Alloue de la mémoire pour la nouvelle chaîne, y compris le caractère nul
	char* nouvelleChaine = new char[nouvelleTaille + 1];

	

	

	/*
	
					VERSION 2 (chat GPT)

	// Copie les caractères de la première chaîne (this) dans la nouvelle chaîne
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine[i] = _ptr[i];
	}

	// Copie les caractères de la deuxième chaîne (z) à la suite de la première
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine[_taille + i] = z._ptr[i];
	}
	// Ajoute le caractère nul à la fin
	nouvelleChaine[nouvelleTaille] = '\0';
	// Crée une nouvelle instance de chaine2 avec la chaîne concaténée
	chaine2 nouvelleChaine2(nouvelleChaine);
	// Libère la mémoire allouée pour la nouvelle chaîne
	delete[]nouvelleChaine;
	// Retourne la nouvelle instance de chaine2
	return nouvelleChaine2;
	
				VERSION 2 globalement la même que la VERSION 1, ne marche pas pour la même raison. J'ai aussi essayé le constructeur par recopie mais ca fait la même chose.

	*/

	
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine[i] = _ptr[i];
	}

	// Copie les caractères de la deuxième chaîne (z) à la suite de la première
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine[_taille + i] = z._ptr[i];
	}
	// Ajoute le caractère nul à la fin
	nouvelleChaine[nouvelleTaille] = '\0';

	// Crée une nouvelle instance de chaine2 avec la chaîne concaténée
	//Marche mais modifie ch2, ce qu'on ne veut pas vu qu'à la base on ne cherche pas à modifier this, mais bien une nouvelle chaine.
	_ptr = nouvelleChaine;
	_taille += z._taille;
	
	//_ptr[6] = '\0';
		
	return *this;

	// La VERSION 3 concatène correctement ch2 et ch3 dans ch2, mais on pert la valeur de ch2. Pour pallier à cela on créer une chaine ch5 par recopie.
}

chaine2& chaine2::minuscule()
{	
	// Modifie la chaine de caractères pour la mettre en minuscules
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = tolower(_ptr[i]);
	}

	return *this;
}

chaine2& chaine2::operator=(const chaine2& z)
{
	if (this != &z) {
		delete[] _ptr; // Libère l'ancienne mémoire
		_taille = z._taille;
		_ptr = new char[_taille + 1];  // Alloue de la mémoire pour la nouvelle chaîne et le caractère nul
		for (int i = 0; i < _taille; i++)
		{
			_ptr[i] = z._ptr[i];
		}
		_ptr[_taille] = '\0';  // Ajoute le caractère nul à la fin
	}
	return *this;
}

int chaine2::operator==(const chaine2& z)
{
	if (_taille != z._taille)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < _taille; i++)
		{
			if (_ptr[i] != z._ptr[i])
			{
				return 0;
			}
		}
		return 1;
	}
}

int chaine2::operator!=(const chaine2& z)
{
	if (_taille != z._taille)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < _taille; i++)
		{
			if (_ptr[i] != z._ptr[i])
			{
				return 1;
			}
		}
		return 0;
	}
}