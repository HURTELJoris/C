/////////////////////////////// string2.cpp ///////////////////////////
#include "string2.h"

chaine2::chaine2(const char* ch)
{
	_taille = strlen(ch);
	// On alloue de la m�moire pour la cha�ne et le caract�re nul (pour le caract�re nul je l'ai vu sur internet
	_ptr = new char[_taille + 1];  
	// Boucle qui parcoure la chaine avec la taille de la chaine de caract�res.
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = ch[i];
	}
	// Caract�re nul = \0
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
	// On lib�re la m�moire pour �viter de faire bugger la RAM
	delete[] _ptr;
}

int chaine2::longueur()
{
	// Renvoie la longueur de la chaine de caract�re _ptr
	return strlen(_ptr);
}

char& chaine2::operator[](int n)
{
	// Renvoie le caract�re � l'indice n de la chaine de caract�re _ptr
	return _ptr[n];
}

void chaine2::operator+=(char c)
{
	// On alloue de la m�moire pour la cha�ne, le caract�re 'c', et le caract�re nul.
	char* new_ptr = new char[_taille + 2];  
	// Boucle de recopie de la chaine de caract�res _ptr � new_ptr
	for (int i = 0; i < _taille; i++)
	{
		new_ptr[i] = _ptr[i];
	}
	new_ptr[_taille] = c;       
	new_ptr[_taille + 1] = '\0'; 
	// Lib�re la m�moire associ� � l'ancienne chaine de caract�res
	delete[] _ptr; 
	_ptr = new_ptr;
	_taille++; 
}

void chaine2::operator+=(const chaine2& z)
{
	// On cr�e une nouvelle chaine de caract�re de la taille de la chaine de gauche, plus celle de droite, plus le caract�re nul.
	char* new_ptr = new char[_taille + z._taille + 1];  
	// On remplie la premi�re partie de la chaine de caract�re avec la chaine de gauche
	for (int i = 0; i < _taille; i++)
	{
		new_ptr[i] = _ptr[i];
	}
	// On remplie la seconde partie de la chaine de caract�re avec la chaine de droite
	for (int i = 0; i < z._taille; i++)
	{
		new_ptr[_taille + i] = z._ptr[i];
	}
	new_ptr[_taille + z._taille] = '\0'; 
	delete[] _ptr;
	_ptr = new_ptr;
	// Met � jour la taille
	_taille += z._taille; 
}

chaine2& chaine2::operator+(const chaine2& z)
{
	
	// Calcule la taille totale de la nouvelle cha�ne
	int nouvelleTaille = _taille + z._taille;

	/*
						VERSION 1

	// Cr�e une nouvelle instance de chaine2 avec la cha�ne concat�n�e
	chaine2 nouvelleChaine2;
	nouvelleChaine2._taille = nouvelleTaille;
	nouvelleChaine2._ptr = new char[nouvelleTaille + 1];

	// Copie les caract�res de la premi�re cha�ne (this) dans la nouvelle cha�ne
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine2._ptr[i] = _ptr[i];
	}

	// Copie les caract�res de la deuxi�me cha�ne (z) � la suite de la premi�re
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine2._ptr[_taille + i] = z._ptr[i];
	}

	// Ajoute le caract�re nul � la fin
	nouvelleChaine2[nouvelleTaille] = '\0';

	return nouvelleChaine2;


						VERSION 1 ne marche pas car on se fait delete notre nouvelle chaine avant de la renvoyer
	*/

	// Alloue de la m�moire pour la nouvelle cha�ne, y compris le caract�re nul
	char* nouvelleChaine = new char[nouvelleTaille + 1];

	

	

	/*
	
					VERSION 2 (chat GPT)

	// Copie les caract�res de la premi�re cha�ne (this) dans la nouvelle cha�ne
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine[i] = _ptr[i];
	}

	// Copie les caract�res de la deuxi�me cha�ne (z) � la suite de la premi�re
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine[_taille + i] = z._ptr[i];
	}
	// Ajoute le caract�re nul � la fin
	nouvelleChaine[nouvelleTaille] = '\0';
	// Cr�e une nouvelle instance de chaine2 avec la cha�ne concat�n�e
	chaine2 nouvelleChaine2(nouvelleChaine);
	// Lib�re la m�moire allou�e pour la nouvelle cha�ne
	delete[]nouvelleChaine;
	// Retourne la nouvelle instance de chaine2
	return nouvelleChaine2;
	
				VERSION 2 globalement la m�me que la VERSION 1, ne marche pas pour la m�me raison. J'ai aussi essay� le constructeur par recopie mais ca fait la m�me chose.

	*/

	
	for (int i = 0; i < _taille; i++)
	{
		nouvelleChaine[i] = _ptr[i];
	}

	// Copie les caract�res de la deuxi�me cha�ne (z) � la suite de la premi�re
	for (int i = 0; i < z._taille; i++)
	{
		nouvelleChaine[_taille + i] = z._ptr[i];
	}
	// Ajoute le caract�re nul � la fin
	nouvelleChaine[nouvelleTaille] = '\0';

	// Cr�e une nouvelle instance de chaine2 avec la cha�ne concat�n�e
	//Marche mais modifie ch2, ce qu'on ne veut pas vu qu'� la base on ne cherche pas � modifier this, mais bien une nouvelle chaine.
	_ptr = nouvelleChaine;
	_taille += z._taille;
	
	//_ptr[6] = '\0';
		
	return *this;

	// La VERSION 3 concat�ne correctement ch2 et ch3 dans ch2, mais on pert la valeur de ch2. Pour pallier � cela on cr�er une chaine ch5 par recopie.
}

chaine2& chaine2::minuscule()
{	
	// Modifie la chaine de caract�res pour la mettre en minuscules
	for (int i = 0; i < _taille; i++)
	{
		_ptr[i] = tolower(_ptr[i]);
	}

	return *this;
}

chaine2& chaine2::operator=(const chaine2& z)
{
	if (this != &z) {
		delete[] _ptr; // Lib�re l'ancienne m�moire
		_taille = z._taille;
		_ptr = new char[_taille + 1];  // Alloue de la m�moire pour la nouvelle cha�ne et le caract�re nul
		for (int i = 0; i < _taille; i++)
		{
			_ptr[i] = z._ptr[i];
		}
		_ptr[_taille] = '\0';  // Ajoute le caract�re nul � la fin
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